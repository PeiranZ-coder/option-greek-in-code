#include "option_greeks.h"
#include <cmath>   // 用于 exp, log, sqrt, erfc

// 圆周率常量（在 .cpp 中定义，外部不可见）
const double PI = 3.14159265358979323846;

// ---------- 1. 正态分布概率密度函数 ----------
double norm_pdf(double x) {
    return (1.0 / std::sqrt(2.0 * PI)) * std::exp(-0.5 * x * x);
}

// ---------- 2. 正态分布累积分布函数 ----------
// 使用 erfc (互补误差函数) 实现高精度，且避免查表
double norm_cdf(double x) {
    return 0.5 * std::erfc(-x / std::sqrt(2.0));
}

// ---------- 3. 计算 d1 和 d2 ----------
void calculate_d1_d2(const OptionParams& params, double& d1, double& d2) {
    double S = params.S;
    double K = params.K;
    double T = params.T;
    double sigma = params.sigma;
    double r = params.r;
    double q = params.q;

    // 到期时间为0或负数的边界处理（避免除以0）
    if (T <= 0.0) {
        d1 = 0.0;
        d2 = 0.0;
        return;
    }

    double sigma_sqrt_T = sigma * std::sqrt(T);
    d1 = (std::log(S / K) + (r - q + 0.5 * sigma * sigma) * T) / sigma_sqrt_T;
    d2 = d1 - sigma_sqrt_T;
}

// ---------- 4. 计算 Delta ----------
double calculate_delta(const OptionParams& params, bool is_call) {
    double d1, d2;
    calculate_d1_d2(params, d1, d2);

    double T = params.T;
    double q = params.q;

    // 特殊情形：到期日当天（T = 0）
    if (T <= 0.0) {
        if (is_call) {
            return (params.S > params.K) ? 1.0 : 0.0;
        }
        else {
            return (params.S < params.K) ? 1.0 : 0.0;
        }
    }

    double nd1 = norm_cdf(d1);
    double discount_factor = std::exp(-q * T);

    if (is_call) {
        // 看涨期权 Delta = e^(-qT) * N(d1)
        return discount_factor * nd1;
    }
    else {
        // 看跌期权 Delta = e^(-qT) * (N(d1) - 1)
        return discount_factor * (nd1 - 1.0);
    }
}

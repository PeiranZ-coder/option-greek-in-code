#include "option_greeks.h"
#include <boost/math/distributions/normal.hpp>
#include <cmath>

// 使用 Boost 的正态分布（标准正态，均值=0，标准差=1）
static const boost::math::normal normal_dist;

// ---------- 辅助函数：PDF 和 CDF 直接调用 Boost ----------
double norm_pdf(double x) {
    return boost::math::pdf(normal_dist, x);
}

double norm_cdf(double x) {
    return boost::math::cdf(normal_dist, x);
}

// ---------- 计算 d1 和 d2 ----------
void calculate_d1_d2(const OptionParams& p, double& d1, double& d2) {
    if (p.T <= 0.0) {
        d1 = 0.0;
        d2 = 0.0;
        return;
    }
    double sigma_sqrt_T = p.sigma * std::sqrt(p.T);
    d1 = (std::log(p.S / p.K) + (p.r - p.q + 0.5 * p.sigma * p.sigma) * p.T) / sigma_sqrt_T;
    d2 = d1 - sigma_sqrt_T;
}

// ---------- 1. Delta ----------
double delta(const OptionParams& p, bool isCall) {
    double d1, d2;
    calculate_d1_d2(p, d1, d2);
    if (p.T <= 0.0) {
        if (isCall) return (p.S > p.K) ? 1.0 : 0.0;
        else        return (p.S < p.K) ? 1.0 : 0.0;
    }
    double nd1 = norm_cdf(d1);
    double df = std::exp(-p.q * p.T);
    if (isCall) return df * nd1;
    else        return df * (nd1 - 1.0);
}

// ---------- 2. Gamma ----------
double gamma(const OptionParams& p) {
    if (p.T <= 0.0 || p.sigma <= 0.0 || p.S <= 0.0) return 0.0;
    double d1, d2;
    calculate_d1_d2(p, d1, d2);
    double nd1 = norm_pdf(d1);
    return std::exp(-p.q * p.T) * nd1 / (p.S * p.sigma * std::sqrt(p.T));
}

// ---------- 3. Vega ----------
double vega(const OptionParams& p) {
    if (p.T <= 0.0 || p.sigma <= 0.0 || p.S <= 0.0) return 0.0;
    double d1, d2;
    calculate_d1_d2(p, d1, d2);
    double nd1 = norm_pdf(d1);
    return p.S * std::exp(-p.q * p.T) * nd1 * std::sqrt(p.T);
}

// ---------- 4. Theta ----------
double theta(const OptionParams& p, bool isCall) {
    if (p.T <= 0.0) return 0.0;
    double d1, d2;
    calculate_d1_d2(p, d1, d2);
    double nd1 = norm_pdf(d1);
    double nd2 = norm_cdf(d2);
    double sqrt_T = std::sqrt(p.T);
    double term1 = -(p.S * p.sigma * std::exp(-p.q * p.T) * nd1) / (2.0 * sqrt_T);

    if (isCall) {
        double term2 = -p.r * p.K * std::exp(-p.r * p.T) * nd2;
        double term3 = p.q * p.S * std::exp(-p.q * p.T) * norm_cdf(d1);
        return term1 + term2 + term3;
    }
    else {
        double term2 = p.r * p.K * std::exp(-p.r * p.T) * norm_cdf(-d2);
        double term3 = -p.q * p.S * std::exp(-p.q * p.T) * norm_cdf(-d1);
        return term1 + term2 + term3;
    }
}

// ---------- 5. Rho ----------
double rho(const OptionParams& p, bool isCall) {
    if (p.T <= 0.0) return 0.0;
    double d1, d2;
    calculate_d1_d2(p, d1, d2);
    if (isCall) {
        return p.K * p.T * std::exp(-p.r * p.T) * norm_cdf(d2);
    }
    else {
        return -p.K * p.T * std::exp(-p.r * p.T) * norm_cdf(-d2);
    }
}
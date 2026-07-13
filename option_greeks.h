#ifndef OPTION_GREEKS_H
#define OPTION_GREEKS_H

// 期权参数结构体
struct OptionParams {
    double S;      // 标的资产当前价格
    double K;      // 行权价
    double T;      // 到期时间（年）
    double sigma;  // 波动率
    double r;      // 无风险利率（连续复利）
    double q;      // 股息率（无股息设为 0）
};

// ---------- 概率统计函数 ----------
double norm_pdf(double x);          // 标准正态分布概率密度函数 (PDF)
double norm_cdf(double x);          // 标准正态分布累积分布函数 (CDF)

// ---------- 期权定价辅助函数 ----------
void calculate_d1_d2(const OptionParams& params, double& d1, double& d2);

// ---------- 希腊值计算 ----------
// is_call = true  => 看涨期权 Delta
// is_call = false => 看跌期权 Delta
double calculate_delta(const OptionParams& params, bool is_call);

#endif // OPTION_GREEKS_H

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

// ---------- 希腊值计算函数声明 ----------
double delta(const OptionParams& params, bool isCall);
double gamma(const OptionParams& params);
double vega(const OptionParams& params);
double theta(const OptionParams& params, bool isCall);
double rho(const OptionParams& params, bool isCall);

#endif // OPTION_GREEKS_H
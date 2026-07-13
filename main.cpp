#include "option_greeks.h"
#include <iostream>
#include <limits>   // For input validation（用于输入错误处理）

int main() {
    OptionParams params;

    std::cout << "========== European Option Delta Calculator ==========" << std::endl;
    std::cout << "Please enter the following parameters (press Enter after each input):" << std::endl;
   

    // 1. Underlying asset price（标的资产价格）
    std::cout << "Underlying Asset Price (S): ";
    
    std::cin >> params.S;

    // 2. Strike price（行权价）
    std::cout << "Strike Price (K): ";
    
    std::cin >> params.K;

    // 3. Time to maturity（到期时间）
    std::cout << "Time to Maturity (T, in years): ";
   
    std::cin >> params.T;

    // 4. Volatility（波动率）
    std::cout << "Volatility (sigma): ";
   
    std::cin >> params.sigma;

    // 5. Risk-free interest rate（无风险利率）
    std::cout << "Risk-Free Interest Rate (r): ";
 
    std::cin >> params.r;

    // 6. Dividend yield（股息率）
    std::cout << "Dividend Yield (q): ";
    
    std::cin >> params.q;

    // Basic input validation（基本输入检查）
    if (std::cin.fail()) {
        std::cout << "Invalid input! Please enter numeric values only." << std::endl;
        
        return 1;
    }

    // Check time to maturity（检查到期时间）
    if (params.T < 0) {
        std::cout << "Warning: Time to maturity cannot be negative." << std::endl;
        
        params.T = -params.T;
    }

    // Calculate Delta（计算 Delta）
    double delta_call = calculate_delta(params, true);
    double delta_put = calculate_delta(params, false);

    // Display results（输出结果）
    std::cout << "\n========== Results /  ==========" << std::endl;
    std::cout << "Call Option Delta : " << delta_call << std::endl;
    std::cout << "Put Option Delta  : " << delta_put << std::endl;

    return 0;
}
#include "option_greeks.h"
#include <iostream>
#include <limits>

int main() {
    OptionParams params;

    std::cout << "========== European Option Greeks Calculator (Boost) ==========" << std::endl;
    std::cout << "Please enter the following parameters:" << std::endl;

    std::cout << "spot price S: ";
    std::cin >> params.S;

    std::cout << "strike price K: ";
    std::cin >> params.K;

    std::cout << "time to maturity T (years): ";
    std::cin >> params.T;

    std::cout << "volatility sigma: ";
    std::cin >> params.sigma;

    std::cout << "risk-free rate r: ";
    std::cin >> params.r;

    std::cout << "dividend yield q (0 if none): ";
    std::cin >> params.q;

    // Input validation
    if (std::cin.fail()) {
        std::cout << "Input error! Please enter valid numbers." << std::endl;
        return 1;
    }

    if (params.T < 0) {
        std::cout << "Warning: Time to maturity cannot be negative. Taking absolute value." << std::endl;
        params.T = -params.T;
    }

    if (params.sigma < 0) {
        std::cout << "Warning: Volatility cannot be negative. Taking absolute value." << std::endl;
        params.sigma = -params.sigma;
    }

    // Calculate all Greeks
    double delta_call = delta(params, true);
    double delta_put = delta(params, false);
    double gamma_val = gamma(params);
    double vega_val = vega(params);
    double theta_call = theta(params, true);
    double theta_put = theta(params, false);
    double rho_call = rho(params, true);
    double rho_put = rho(params, false);

    // Output results
    std::cout << "\n========== Results ==========" << std::endl;
    std::cout << "Call Delta  : " << delta_call << std::endl;
    std::cout << "Put Delta   : " << delta_put << std::endl;
    std::cout << "Gamma       : " << gamma_val << " (same for call & put)" << std::endl;
    std::cout << "Vega        : " << vega_val << " (per unit volatility change)" << std::endl;
    std::cout << "Call Theta  : " << theta_call << " (annualized)" << std::endl;
    std::cout << "Put Theta   : " << theta_put << " (annualized)" << std::endl;
    std::cout << "Call Rho    : " << rho_call << std::endl;
    std::cout << "Put Rho     : " << rho_put << std::endl;

    return 0;
}
# Option Rho (ρ)

## 1. Definition

Rho measures the sensitivity of an option's price with respect to changes in the risk-free interest rate.

$$
\rho=\frac{\partial V}{\partial r}
$$


where:

- Rho measures how much the option price changes when the interest rate changes.
- It represents the option's exposure to interest rate risk.

For a 1% increase in interest rates:

$$
\Delta V \approx \rho \times 0.01
$$


---

# 2. Black-Scholes Rho Formula


Rho is different for European Call and Put options.

---

## 2.1 European Call Option Rho


$$
\boxed{
\rho_{Call}
=
K(T-t)e^{-r(T-t)}N(d_2)
}
$$


---

## 2.2 European Put Option Rho


$$
\boxed{
\rho_{Put}
=
-K(T-t)e^{-r(T-t)}N(-d_2)
}
$$


---

## 2.3 Definitions of $d_1$ and $d_2$


$$
d_1=
\frac{
\ln(S/K)+(r-q+\frac12\sigma^2)(T-t)
}
{\sigma\sqrt{T-t}}
$$


$$
d_2=d_1-\sigma\sqrt{T-t}
$$


where:

$$
N(d)
$$

is the standard normal cumulative distribution function.

---

# 3. Parameters


| Symbol | Description |
|---|---|
| $S$ | Current underlying asset price |
| $K$ | Strike price |
| $T-t$ | Time to maturity |
| $r$ | Risk-free interest rate |
| $q$ | Dividend yield |
| $\sigma$ | Implied volatility |
| $N(d)$ | Standard normal cumulative distribution function |

---

# 4. Main Properties of Rho


## 4.1 Call Options Have Positive Rho


For European Call options:


$$
\rho_{Call}>0
$$


When interest rates increase:


$$
r\uparrow
$$


Call option value increases:


$$
V_{Call}\uparrow
$$


Reason:

Higher interest rates reduce the present value of the strike price:

$$
PV(K)=Ke^{-r(T-t)}
$$


A lower present value of the strike makes exercising the Call more valuable.

---

## 4.2 Put Options Have Negative Rho


For European Put options:


$$
\rho_{Put}<0
$$


When interest rates increase:


$$
r\uparrow
$$


Put option value decreases:


$$
V_{Put}\downarrow
$$


Reason:

A higher discount rate decreases the value of receiving the strike price in the future.

---

# 5. Rho and Time to Maturity


Rho increases with maturity:


$$
\rho \propto T-t
$$


Long-term options have larger Rho exposure.


Short-term options:


- Have small interest rate sensitivity.
- Have smaller Rho.


---

# 6. Rho and Moneyness


Rho is usually larger for:

$$
ITM\ options
$$


because the probability of exercising the option is higher.


For Call options:

$$
S>K
$$

creates larger positive Rho.


For Put options:

$$
S<K
$$

creates larger negative Rho.


---

# 7. Long Rho vs Short Rho


## Long Call


Characteristics:

$$
\rho>0
$$


Benefits from:


$$
r\uparrow
$$


---

## Long Put


Characteristics:

$$
\rho<0
$$


Benefits from:


$$
r\downarrow
$$


---

## Short Options


The Rho exposure is opposite:


| Position | Rho |
|---|---|
| Short Call | Negative Rho |
| Short Put | Positive Rho |

---

# 8. Rho Hedging


A portfolio Rho exposure:


$$
\rho_{portfolio}
=
\sum_i w_i\rho_i
$$


A Rho-neutral portfolio requires:


$$
\boxed{
\rho_1+\rho_2+\cdots+\rho_n=0
}
$$


Traders use Rho hedging to manage interest rate risk.

---

# 9. Relationship Between Greeks


The five major option Greeks:


| Greek | Risk Factor | Sensitivity |
|---|---|---|
| Delta | Price movement | $\frac{\partial V}{\partial S}$ |
| Gamma | Delta change | $\frac{\partial^2V}{\partial S^2}$ |
| Vega | Volatility | $\frac{\partial V}{\partial \sigma}$ |
| Theta | Time decay | $\frac{\partial V}{\partial t}$ |
| Rho | Interest rate | $\frac{\partial V}{\partial r}$ |

---

# 10. Practical Summary


| Feature | Rho Property |
|---|---|
| Definition | Interest rate sensitivity |
| Formula | $\frac{\partial V}{\partial r}$ |
| Call Rho | Positive |
| Put Rho | Negative |
| Largest | Long-term ITM options |
| Rate Increase | Benefits Calls |
| Rate Increase | Hurts Puts |
| Main Risk | Interest rate changes |
| Hedging | Rho-neutral portfolio |

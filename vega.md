# Option Vega (ν)

## 1. Definition

Vega measures the sensitivity of an option's price with respect to changes in implied volatility.

$$
\nu=\frac{\partial V}{\partial \sigma}
$$


where:

- Vega measures how much the option price changes when implied volatility changes.
- It represents the option's exposure to volatility risk.

For example:

If:

$$
\nu=0.20
$$

then a 1% increase in implied volatility changes the option value approximately by:

$$
0.20 \times 0.01 = 0.002
$$


---

# 2. Black-Scholes Vega Formula


For both European Call and Put options, Vega is identical:

$$
\boxed{
\nu=
S\phi(d_1)\sqrt{T-t}
}
$$


where:


$$
d_1=
\frac{
\ln(S/K)+(r-q+\frac12\sigma^2)(T-t)
}
{\sigma\sqrt{T-t}}
$$


and:


$$
\phi(d_1)
=
\frac{1}{\sqrt{2\pi}}
e^{-\frac{d_1^2}{2}}
$$


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
| $\phi(d_1)$ | Standard normal density function |


---

# 4. Main Properties of Vega


## 4.1 Vega is Always Positive


For both Call and Put options:


$$
\nu_{Call}>0
$$


$$
\nu_{Put}>0
$$


Therefore:


| Position | Vega Exposure |
|---|---|
| Long Call | Positive Vega |
| Long Put | Positive Vega |
| Short Call | Negative Vega |
| Short Put | Negative Vega |


Long option positions benefit from increasing volatility.


---

# 5. Vega is Highest for ATM Options


Vega reaches its maximum when:


$$
S\approx K
$$


Therefore:


$$
\boxed{
ATM\ options\ have\ the\ largest\ Vega
}
$$


Reason:

For ATM options:


$$
d_1\approx0
$$


and:


$$
\phi(0)=\frac{1}{\sqrt{2\pi}}
$$


which maximizes Vega.


---

# 6. Vega and Time to Maturity


From the formula:


$$
\nu=
S\phi(d_1)\sqrt{T-t}
$$


Vega increases with maturity:


$$
\nu\propto\sqrt{T-t}
$$


Therefore:


Long-dated options:

- Have larger Vega.
- Are more sensitive to volatility changes.


Short-term options:

- Have smaller Vega.
- Are less sensitive to volatility changes.


---

# 7. Vega and Implied Volatility


When implied volatility increases:


$$
\sigma\uparrow
$$


Option prices generally increase:


$$
V\uparrow
$$


because higher volatility increases the probability of large price movements.


Therefore:


Long Vega:

$$
\nu>0
$$


benefits from:

$$
\sigma\uparrow
$$


---

# 8. Relationship Between Vega and Gamma


Vega and Gamma are closely related:


$$
\nu
\approx
S^2\sigma(T-t)\Gamma
$$


Therefore:


Options with:

- High Gamma
- High Vega

usually occur near:

$$
ATM
$$


---

# 9. Long Vega vs Short Vega


## Long Vega


Examples:

- Long Call
- Long Put


Characteristics:

$$
\nu>0
$$


Benefits from:

- Increasing implied volatility.
- Volatility expansion.


---


## Short Vega


Examples:

- Short Call
- Short Put


Characteristics:


$$
\nu<0
$$


Benefits from:

- Decreasing implied volatility.
- Volatility contraction.


---

# 10. Vega Hedging


A portfolio's total Vega exposure:


$$
\nu_{portfolio}
=
\sum_i w_i\nu_i
$$


A Vega-neutral portfolio requires:


$$
\boxed{
\nu_1+\nu_2+\cdots+\nu_n=0
}
$$


Traders use Vega hedging to manage volatility risk.


---

# 11. Practical Summary


| Feature | Vega Property |
|---|---|
| Definition | Sensitivity to implied volatility |
| Formula | $S\phi(d_1)\sqrt{T-t}$ |
| Call Vega | Positive |
| Put Vega | Positive |
| Maximum | ATM |
| Effect of Time | Increases with maturity |
| Long Option | Long Vega |
| Short Option | Short Vega |
| Volatility Increase | Benefits Long Vega |
| Volatility Decrease | Benefits Short Vega |
| Hedging | Vega-neutral portfolio |

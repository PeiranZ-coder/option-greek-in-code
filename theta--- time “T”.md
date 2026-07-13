# Option Theta (Θ)

## 1. Definition

Theta measures the sensitivity of an option's price with respect to the passage of time.

$$
\Theta=\frac{\partial V}{\partial t}
$$

Theta represents the **time decay** of an option.

It measures how much the option price changes when time moves forward while other variables remain constant.

For long option positions:

$$
\Theta < 0
$$

because options lose time value as expiration approaches.

---

# 2. Black-Scholes Theta Formula

For European options, Theta differs between Call and Put options.

---

## 2.1 European Call Option Theta


$$
\Theta_{Call}
=
-\frac{S e^{-q(T-t)}\phi(d_1)\sigma}
{2\sqrt{T-t}}
-qS e^{-q(T-t)}N(d_1)
-rK e^{-r(T-t)}N(d_2)
$$


---

## 2.2 European Put Option Theta


$$
\Theta_{Put}
=
-\frac{S e^{-q(T-t)}\phi(d_1)\sigma}
{2\sqrt{T-t}}
+qS e^{-q(T-t)}N(-d_1)
+rK e^{-r(T-t)}N(-d_2)
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
\phi(d_1)
=
\frac{1}{\sqrt{2\pi}}
e^{-\frac{d_1^2}{2}}
$$


is the standard normal probability density function.

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
| $\phi(d)$ | Standard normal density function |

---

# 4. Main Properties of Theta


## 4.1 Long Options Usually Have Negative Theta


For long Call and Put positions:


$$
\Theta < 0
$$


Meaning:

- The option loses value as time passes.
- Time decay accelerates near expiration.


Example:


$$
\Theta=-0.05
$$


means the option value decreases approximately:


$$
0.05
$$


per day.

---

# 5. Theta Decay and Time


Theta is not linear.

Option value decays faster as expiration approaches:


$$
T-t\rightarrow0
$$


Therefore:


$$
|\Theta|\uparrow
$$


especially for short-term options.


The time decay effect is called:

**Theta Decay**

---

# 6. Theta is Largest Around ATM Options


Theta magnitude is usually highest when:


$$
S\approx K
$$


Therefore:


$$
ATM\ options\ usually\ have\ the\ largest\ time\ decay
$$


because ATM options contain the largest amount of:

- Extrinsic value
- Gamma exposure
- Vega exposure

---

# 7. Relationship Between Theta and Gamma


The Black-Scholes partial differential equation:


$$
\Theta
+
\frac12\sigma^2S^2\Gamma
+rS\Delta
-rV
=0
$$


Therefore:


$$
\boxed{
\Theta
=
-\frac12\sigma^2S^2\Gamma
-rS\Delta
+rV
}
$$


This shows the trade-off between:

- Gamma
- Theta


A long Gamma position usually requires paying Theta.

This relationship is called:

**Gamma-Theta Trade-off**

---

# 8. Long Theta vs Short Theta


## Long Option Position


Examples:

- Long Call
- Long Put


Characteristics:


$$
\Theta<0
$$


Benefits:

- Large price movements
- Increase in volatility


Costs:

- Time decay


---

## Short Option Position


Examples:

- Short Call
- Short Put


Characteristics:


$$
\Theta>0
$$


Benefits:

- Time decay
- Stable markets


Risks:

- Large price movements
- Volatility increase

---

# 9. Theta and Volatility


Higher implied volatility:


$$
\sigma\uparrow
$$


usually increases option premium.


However, higher volatility also increases the cost of holding long option positions because:


$$
|\Theta|\uparrow
$$


Therefore:

Long Vega positions usually pay more Theta.

---

# 10. Practical Summary


| Feature | Theta Property |
|---|---|
| Definition | Time decay |
| Formula | $\frac{\partial V}{\partial t}$ |
| Long Call | Negative Theta |
| Long Put | Negative Theta |
| Short Option | Positive Theta |
| Maximum | Usually ATM |
| Near Expiration | Faster decay |
| Long Gamma | Usually pays Theta |
| Short Gamma | Usually earns Theta |
| Risk Trade-off | Gamma vs Theta |


# Option Theta (Θ)

## 1. Definition

Theta measures the sensitivity of an option's price with respect to the passage of time.

It represents the time decay of an option:

$$
\Theta=\frac{\partial V}{\partial t}
$$

where:

- Theta measures how much the option value changes as time passes.
- It is also called the **time decay** of an option.

For long option positions, Theta is usually negative because options lose value as expiration approaches.

---

# 2. Black-Scholes Theta Formula

## 2.1 Call Option Theta

For a European Call option:

$$
\Theta_{Call}
=
-\frac{S\phi(d_1)\sigma}{2\sqrt{T-t}}
-rKe^{-r(T-t)}N(d_2)
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
d_2=d_1-\sigma\sqrt{T-t}
$$


---

## 2.2 Put Option Theta

For a European Put option:

$$
\Theta_{Put}
=
-\frac{S\phi(d_1)\sigma}{2\sqrt{T-t}}
+rKe^{-r(T-t)}N(-d_2)
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
| $N(d)$ | Standard normal cumulative distribution function |
| $\phi(d)$ | Standard normal probability density function |

---

# 4. Main Properties of Theta


## 4.1 Theta is Usually Negative for Long Options

For long Call and Put positions:

$$
\Theta < 0
$$


Meaning:

- The option loses value as time passes.
- The loss accelerates near expiration.


Example:

If:

$$
\Theta=-0.05
$$


The option value decreases approximately:

$$
0.05
$$

per day.

---

# 5. Theta Decay and Time


Theta is not linear.

The relationship between option value and time:







As expiration approaches:

$$
T-t\rightarrow0
$$


Theta becomes larger in magnitude:

$$
|\Theta|\uparrow
$$


This effect is called:

**Time Decay Acceleration**

---

# 6. Theta is Largest for ATM Options


Theta reaches its maximum magnitude around:

$$
S\approx K
$$


Therefore:

$$
ATM\ options\ have\ the\ highest\ time\ decay
$$


Reason:

ATM options have the highest:

- Gamma
- Vega
- Extrinsic value


---

# 7. Relationship Between Theta and Gamma


Theta and Gamma have a close relationship.

The Black-Scholes equation gives:

$$
\Theta
+
\frac12\sigma^2S^2\Gamma
+rS\Delta-rV=0
$$


Therefore:

$$
\boxed{
\Theta
=
-\frac12\sigma^2S^2\Gamma
-rS\Delta+rV
}
$$


A high Gamma position usually has a more negative Theta.

This relationship is called:

**Gamma-Theta Trade-off**

---

# 8. Long Theta vs Short Theta


## Long Options

Examples:

- Long Call
- Long Put


Characteristics:

$$
\Theta<0
$$


They:

- Lose money from time decay.
- Benefit from large volatility changes.
- Have positive Gamma.


---

## Short Options


Examples:

- Short Call
- Short Put


Characteristics:

$$
\Theta>0
$$


They:

- Earn time decay.
- Prefer stable markets.
- Have negative Gamma.


---

# 9. Theta and Volatility


Theta is affected by implied volatility:

Higher volatility:

$$
\sigma\uparrow
$$


usually increases:

- Option premium
- Time decay


because more uncertainty increases the value of waiting.


---

# 10. Practical Summary


| Feature | Theta Property |
|---|---|
| Definition | Time decay |
| Formula | $\frac{\partial V}{\partial t}$ |
| Long Call | Negative Theta |
| Long Put | Negative Theta |
| Short Option | Positive Theta |
| Largest | ATM options |
| Near Expiration | Faster decay |
| High Gamma | More negative Theta |
| Market Maker | Usually earns Theta |
| Risk Trade-off | Gamma vs Theta |


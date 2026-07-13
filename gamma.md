# Option Gamma (Γ)

## 1. Definition

Gamma measures the sensitivity of an option's Delta with respect to the underlying asset price.

$$
\Gamma = \frac{\partial \Delta}{\partial S}
= \frac{\partial^2 V}{\partial S^2}
$$

where:

- Delta is the first-order sensitivity of option price to the underlying asset.
- Gamma is the second-order sensitivity and measures the curvature of the option price.

---

# 2. Black-Scholes Gamma Formula

For both European Call and Put options, Gamma is identical:

$$
\Gamma =
\frac{\phi(d_1)}
{S\sigma\sqrt{T-t}}
$$


where:

$$
d_1=
\frac{
\ln(S/K)+(r-q+\frac{1}{2}\sigma^2)(T-t)
}
{\sigma\sqrt{T-t}}
$$


The standard normal probability density function:

$$
\phi(d_1)
=
\frac{1}{\sqrt{2\pi}}
e^{-\frac{d_1^2}{2}}
$$


Therefore:

$$
\Gamma =
\frac{
\frac{1}{\sqrt{2\pi}}
e^{-\frac{d_1^2}{2}}
}
{S\sigma\sqrt{T-t}}
$$


## Parameters

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

# 3. Main Properties of Gamma

## 3.1 Gamma is Always Positive

For European options:

$$
\Gamma_{Call}>0
$$

$$
\Gamma_{Put}>0
$$


Gamma represents the convexity of option value:

$$
\Gamma=
\frac{\partial^2 V}{\partial S^2}>0
$$


Therefore:

| Position | Gamma Exposure |
|---|---|
| Long Call | Positive Gamma |
| Long Put | Positive Gamma |
| Short Call | Negative Gamma |
| Short Put | Negative Gamma |

---

# 4. Gamma is Highest at ATM Options

Gamma reaches its maximum when:

$$
S\approx K
$$


Therefore:

$$
ATM\ options\ have\ the\ largest\ Gamma
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


---

# 5. Gamma and Time to Maturity

Gamma approximately increases as maturity decreases:

$$
\Gamma \propto \frac{1}{\sqrt{T-t}}
$$


As expiration approaches:

$$
T-t \rightarrow 0
$$


Gamma increases:

$$
\Gamma \uparrow
$$


Especially for short-term ATM options:

$$
\Gamma \rightarrow \infty
$$


---

# 6. Relationship Between Delta and Gamma


Delta:

$$
\Delta=N(d_1)
$$


Gamma:

$$
\Gamma=\frac{\partial \Delta}{\partial S}
$$


Therefore:

- Delta measures the slope of the option price curve.
- Gamma measures the change of the slope.

---

# 7. Gamma P&L Approximation

Using Taylor expansion:

$$
dV
\approx
\Delta dS
+
\frac{1}{2}\Gamma(dS)^2
$$


Delta contribution:

$$
\Delta dS
$$


Gamma contribution:

$$
\frac{1}{2}\Gamma(dS)^2
$$


The Gamma term represents the convexity effect.

---

# 8. Long Gamma vs Short Gamma


## Long Gamma

$$
\Gamma>0
$$


Characteristics:

- Benefits from large price movements.
- Benefits from increased volatility.
- Requires continuous Delta hedging.

Examples:

- Long Call
- Long Put


---

## Short Gamma

$$
\Gamma<0
$$


Characteristics:

- Prefers stable markets.
- Loses money during large price movements.
- Requires active risk management.

Examples:

- Option sellers
- Market makers

---

# 9. Gamma Hedging


Delta hedging removes first-order risk:

$$
\Delta=0
$$


However:

$$
\Delta_{new}\neq0
$$


because:

$$
\Gamma=\frac{\partial\Delta}{\partial S}
$$


Gamma-neutral portfolio:

$$
\Gamma_1+\Gamma_2=0
$$


---

# 10. Practical Summary


| Feature | Gamma Property |
|---|---|
| Definition | Change in Delta |
| Formula | $\frac{\phi(d_1)}{S\sigma\sqrt{T-t}}$ |
| Call Gamma | Positive |
| Put Gamma | Positive |
| Maximum | ATM |
| Effect of Time | Increases near expiration |
| Long Option | Long Gamma |
| Short Option | Short Gamma |
| Large Volatility | Benefits Long Gamma |
| Market Maker | Usually Short Gamma |
| Hedging | Requires Gamma management |


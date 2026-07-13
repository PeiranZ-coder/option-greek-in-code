Gamma is the rate of change of the delta of the portfolio with respect to the spot price S of the uderlying assest, the second derivative of the value of the protfolio with resepect to S:

\[
\Gamma = \frac{\partial \Delta}{\partial S}
= \frac{\partial^2 V}{\partial S^2}
\]

where:

- Delta is the first-order sensitivity of option price to the underlying asset.
- Gamma is the second-order sensitivity and measures the curvature of the option price.

---

# 3. Main Properties of Gamma


## 3.1 Gamma is Always Positive

For European options:

\[
\Gamma_{Call}>0
\]

\[
\Gamma_{Put}>0
\]


Gamma represents the convexity of option value:

\[
\Gamma=\frac{\partial^2V}{\partial S^2}>0
\]


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

\[
S\approx K
\]


Therefore:

\[
\boxed{
ATM\ options\ have\ the\ largest\ Gamma
}
\]


Reason:

At-the-money options have:

\[
d_1\approx0
\]


and:

\[
\phi(0)=\frac{1}{\sqrt{2\pi}}
\]

which is the maximum value of the normal density function.

---

# 5. Gamma and Time to Maturity

Gamma is inversely related to time:

\[
\Gamma
\propto
\frac{1}{\sqrt{T-t}}
\]


As expiration approaches:

\[
T-t\rightarrow0
\]


Gamma increases:

\[
\Gamma\uparrow
\]


Especially for ATM options:

\[
\Gamma\rightarrow\infty
\]


Short-term ATM options have:

- Large Delta changes
- High Gamma exposure

---

# 6. Relationship Between Delta and Gamma


Delta:

\[
\Delta=N(d_1)
\]


Gamma:

\[
\Gamma=
\frac{\partial N(d_1)}{\partial S}
\]


Therefore:

- Delta measures the slope of the option price curve.
- Gamma measures the change of the slope.

Mathematically:

\[
\Gamma=\frac{d\Delta}{dS}
\]


---

# 7. Gamma P&L Approximation

Using Taylor expansion:

\[
dV
\approx
\Delta dS
+
\frac12\Gamma(dS)^2
\]


The two components:

### Delta Component

\[
\Delta dS
\]

Represents directional exposure.


### Gamma Component

\[
\frac12\Gamma(dS)^2
\]

Represents convexity benefit.


---

# 8. Long Gamma vs Short Gamma


## Long Gamma

\[
\Gamma>0
\]


A long gamma position benefits from large movements:

\[
(dS)^2\uparrow
\]


Characteristics:

- Likes volatility
- Benefits from large price moves
- Requires continuous delta hedging


Examples:

- Long Call
- Long Put


---

## Short Gamma

\[
\Gamma<0
\]


A short gamma position benefits from stable markets.


Characteristics:

- Prefers low volatility
- Loses money during large moves
- Requires active risk management


Examples:

- Market makers selling options


---

# 9. Gamma Hedging


Delta hedging removes first-order risk:

\[
\Delta=0
\]

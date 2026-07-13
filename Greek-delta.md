Def :
 let V be the value of portfolio of derivative securities on one underlying assest. The rate of change of the value of the portfolio  with respect to various parameters. They change are called
"the greek" of the portfolio, and are denoted by symobols for greek aplhabaet.


 Delta is the rate of change of the value of the portfolio with respect to the spot price S of the underlying asset:

 # Delta (Δ)

## Definition

Let \(V\) denote the value of a derivative security written on a single underlying asset.
The **Delta** of an option measures the sensitivity of the option price to a small change in the underlying asset price.

Mathematically,

$$
\Delta=\frac{\partial V}{\partial S}
$$

where

- \(V\): Option value
- \(S\): Underlying asset price

---

## Black-Scholes Formula

Define

$$
d_1=\frac{\ln\left(\frac{S}{K}\right)+\left(r-q+\frac{1}{2}\sigma^2\right)T}
{\sigma\sqrt{T}}
$$

where

- \(S\) = Underlying asset price
- \(K\) = Strike price
- \(r\) = Risk-free interest rate
- \(q\) = Dividend yield
- \(\sigma\) = Volatility
- \(T\) = Time to maturity
- \(N(\cdot)\) = Standard normal cumulative distribution function

## Call Option Delta

$$
\Delta_{call}=e^{-qT}N(d_1)
$$

## Put Option Delta

$$
\Delta_{put}=e^{-qT}\left(N(d_1)-1\right)
$$
---

## Characteristics

### Call Option

- Range:

$$
0 \le \Delta_{call}\le1
$$

- Deep Out-of-the-Money (OTM):

$$
\Delta\approx0
$$

- At-the-Money (ATM):

$$
\Delta\approx0.5
$$

- Deep In-the-Money (ITM):

$$
\Delta\approx1
$$

---

### Put Option

- Range:

$$
-1\le\Delta_{put}\le0
$$

- Deep OTM:

$$
\Delta\approx0
$$

- ATM:

$$
\Delta\approx-0.5
$$

- Deep ITM:

$$
\Delta\approx-1
$$

<img width="575" height="608" alt="Screenshot 2026-07-13 065252" src="https://github.com/user-attachments/assets/e5abf251-0004-4a68-aa3d-788bf5938834" />


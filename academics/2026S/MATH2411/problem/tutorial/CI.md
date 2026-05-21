---
aliases:
    - CI
    - Confidence interval
tags:
    - flashcard/active/stats
    - MATH2411
---

# Interval estimation
- main ideas and standard formulas for interval estimations
- ## Key questions (concepts) (stuff to learn)
  - what does a confidence interval mean
  - How do we construct a confidence interval for the population mean $\mu$
  - How do we choose between the $z$-distribution, $t$-distribution, and $\chi^{2}$-distribution

- ## Important remark
  >- The most important skill in this topic is to identify:
  >  - The parameter of interest,
  >  - Whether the population is normal
  >  - whether $\sigma^2$ is known or unknown
  >  - the correct pivotal quantity and its distribution. Basically which function to use and the correct distribution to apply on

## Fundamentals concepts
- from point estimation to interval estimation:
  - Definition:
    - A point estimator gives a single number to estimate an unknown parameter. For example, $\bar{X}$ estimates $\mu$ and $S^2$ estimates $\sigma^2$
    - An **interval estimator** gives a {{random interval}} $[L(X), U(X)]$ that is expected to {{contain the true parameter}} with high probability.
<!--SR:!2026-05-21,1,196!2026-05-21,1,196-->

  - Definition:
    - A $100(1 - \alpha)\%$ condifence interval for a parameter $\theta$ is a random interval
    $$
    [L(X_1, \dots, X_n), U(X_1, \dots, X_n)]
    $$
    - such that
    ?
>    $$
>    P(L(X_1, \dots, X_n) \leq \theta \leq U(X_1, \dots, X_n)) = 1 - \alpha
>    $$
<!--SR:!2026-05-21,1,196-->


- Terminologies:
  - $1 - \alpha$: {{confidence level}}
  - $\alpha$: total error probability
  - $L(X)$: lower confidence limit
  - $U(X)$: upper confidence limit
<!--SR:!2026-05-21,1,196-->

- important remark:
  - Correct interpretation:
>    - when we say "we are $95%$ confident that $\theta$ lies in the interval $[l, u]$", it means that {{if we repeated the same sampling procedure 100 times, about $95%$ of the resulting intervals would contain the true parameter.}}
>    - **Important**: the parameter $\theta$ is {{fixed}}, while the interval is {{random before the data are observed}}.
<!--SR:!2026-05-21,1,196!2026-05-21,1,193!2026-05-21,1,190-->

- Symmetric Two-sideed Confidence intervals:
  - For a two-sided confidence interval centered at $\bar{X}$, we often write:
$$
\bar{X} - a, \bar{X} + b
$$
- in the symmetric case, $a = b$, and the two tails each have probability $\alpha/2$. Hence,
?
>$$
>P(-c \leq \text{pivotal quantity} \leq c) = 1 - \alpha
>$$
- This is the standard way to derive two-sided confidence intervals.
<!--SR:!2026-05-21,1,193-->

- ## Sampling Distributions and Pivotal Quantities
  - Definition:
    - A {{pivotal quantity}} is a function of the {{sample and the unknown parameter}} whose {{distribution does not depend on unknown parameters}}
    - To construct a confidence interval, we start with a {{pivotal quantity}}, {{use its knwon distribution}}, and then {{rearrange the inequality to isolate the parameter}}.
<!--SR:!2026-05-21,1,189!2026-05-21,1,193!2026-05-21,1,189!2026-05-21,1,189!2026-05-21,1,189!2026-05-21,1,193-->

- ## Chi-squared Distribution
  - Definition:
    - If $X_1, X_2, \dots, X_n$ are i.i.d. $N(0, 1)$, then
?
>$$
>Y = X_{1}^{2} + X_{2}^{2} + \dots, + X_{n}^{2} \sim \chi^{2}(n)
>$$
<!--SR:!2026-05-21,1,189-->

- the distribution $\chi^2(n)$ is called the chi-squared distribution with $n$ degrees of freedom.
- We denote by $\chi_{n, \alpha}^{2}$ the critical value satisfying:
?
>$$
>P(Y > \chi_{n,\alpha}^2) = \alpha
>$$
<!--SR:!2026-05-21,1,189-->

- ## Student's t-Distribution
  - Definition:
    - If $Z \sim N(0,1)$ and $Y \sim \chi^2(n)$ are independent, then

$$
W = \frac{Z}{\sqrt{Y/n}} \sim t(n)
$$
- The distribution $t(n)$ is called the t-distribution with $n$ degrees of freedom. We denote by $t_{n,\alpha}$ the critical value satisfying:

$$
P(W > t_{n,\alpha}) = \alpha
$$


  - Important remark:
    - key properties of the t-distribution:
      - symmetric around 0,
      - heavier tails than the standard normal distribution,
      - converges to {{$N(0,1)$}} as the degrees of freedom increase.
<!--SR:!2026-05-21,1,190-->

- ## Key Theorems for a normal population
  - Theorem:
    - let $X_1, \dots, X_n$ be i.i.d. $N(\mu, \sigma^2)$. Define:

    $$
    \bar{X} = \frac{1}{n}\sum_{i = 1}^{n}{X_i}, \quad \quad \quad \quad S^2 = \frac{1}{n - 1}\sum_{i = 1}^{n}(X_i - \bar{X})^2
    $$
    - Then:
    - 1. $\bar{X} \sim N(\mu, \frac{\sigma^2}{n})$, so
    $$
    \frac{\bar{X} - \mu}{\sigma/\sqrt{n}} \sim N(0,1)
    $$
    - 2. 

    $$
    \frac{(n - 1)S^2}{\sigma^2} \sim \chi^2(n - 1)
    $$
    - 3. $\bar{X} \text{ and } S^2$ are independent.
    - 4. 
    $$
    \frac{\bar{X} - \mu}{S/\sqrt{n}} \sim t(n - 1)
    $$

  - Important remark:
    - These four results are the foundation for almost all classical confidence intervals for a normal population.

- ## Confidence Intervals for the Mean $\mu$
  - ### Case 1: Population variance $\sigma^2$ is Known
    - Pivot quantity:

    $$
    \frac{\bar{X} - \mu}{\sigma/\sqrt{n}} \sim N(0,1)
    $$
    - For confidence level $1 - \alpha$

    $$
    P(-z_{\alpha/2} \leq \frac{\bar{X} - \mu}{\sigma/\sqrt{n}} \leq z_{\alpha/2}) = 1 - \alpha
    $$
    - Therefore, the $100(1 - \alpha)\%$ confidence interval is:

    $$
    [\bar{x} - z_{\alpha/2}\frac{\sigma}{\sqrt{n}}, \bar{x} + z_{\alpha/2}\frac{\sigma}{\sqrt{n}}]
    $$
    - When to use:
        - The sample comes from a normal population, and
        - the population standard deviation $\sigma$ is known.
  - ### Case 2: Population Variance $\sigma^2$ Unknown
    - Pivotal quantity:

    $$
    \frac{\bar{X} - \mu}{S/\sqrt{n}} \sim t(n - 1)
    $$
    - For confidence level $1 - \alpha$

    $$
    P(-t_{n - 1, \alpha/2} \leq \frac{\bar{X} - \mu}{S/\sqrt{n}} \sim t(n - 1) \leq t_{n - 1, \alpha/2}) = 1 - \alpha
    $$
    - Therefore, the $100(1 - \alpha)\%$ confidence interval is

    $$
    [\bar{x} - t_{n - 1, \alpha/2}\frac{s}{\sqrt{n}}, \bar{x} + t_{n - 1, \alpha/2}\frac{s}{\sqrt{n}}]
    $$
    - When to use:
        - The sample comes from a normal population, and
        - the population standard deviation $\sigma$ is unknown.

    - Important remark:
        - In practice, $\sigma$ is usually unknown, so the t-interval for $\mu$ is used much more often than then z-interval.

- ## Confidence Intervals for the Variance $\sigma^2$
  - ### case 1: population mean $\mu$ known
>    - pivotal quantity:
>
>    $$
>    \sum_{i = 1}^{n}{\frac{(X_i - \mu)^2}{\sigma^2}} \sim \chi^2(n)
>    $$
>
>    - For confidence level $1 - \alpha$
>
>    $$
>    P(\chi_{n, 1 - \alpha/2}^2 \leq \sum_{i = 1}^{n}{\frac{(X_i - \mu)^2}{\sigma^2}} \leq \chi_{n, \alpha/2}^2) = 1 - \alpha
>    $$
>
>    - Hence, the $100(1 - \alpha)\%$ confidence interval is:
>
>    $$
>    [\frac{\sum_{i = 1}^{n}{(x_i - \mu)^2}}{\chi_{n, \alpha/2}^2}, \frac{\sum_{i = 1}^{n}{(x_i - \mu)^2}}{\chi_{n, 1- \alpha/2}^2}]
>    $$

  - ### case 2: population mean $\mu$ unknown
>    - Pivotal quantity:
>
>        $$
>        \frac{(n - 1)S^2}{\sigma^2} \sim \chi^2(n - 1)
>        $$
>    - for confidence level $1 - \alpha$
>
>        $$
>        P(\chi_{n - 1, 1 - \alpha/2}^2 \leq \frac{(n - 1)S^2}{\sigma^2} \leq \chi_{n - 1, \alpha/2}^2) = 1 - \alpha
>        $$
>    - Hence, the $100(1 - \alpha)\%$ confidence interval is
>        $$
>        [\frac{(n - 1)s^2}{\chi_{n - 1, \alpha/2}^2}, \frac{(n - 1)s^2}{\chi_{n - 1, 1- \alpha/2}^2}]
>        $$
  - Important remark:
    - Key difference in degrees of freedom:
      - if $\mu$ is known, use $n$ degrees of freedom.
      - if $\mu$ is unknown, use $n - 1$ derees of freedom.
    - In practice, $\mu$ is usually unknown, so the second formula is the standard one.

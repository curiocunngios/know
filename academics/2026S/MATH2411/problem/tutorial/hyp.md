---
aliases:
    - hypothesis testing
tags:
    - flashcard/active/stats
    - MATH2411
---

# Hypothesis testing
- ## Type I and Type II Errors
  - **Type I error**: {{Reject $H_0$ when $H_0$ is true}}.
<!--SR:!2026-05-21,1,230-->

    $$
    \alpha = P(\text{reject } H_0 \cap H_0 \text{ is true})
    $$
    - we denote the probability of a Type I error by $\alpha$, called the {{*significance level*}} of the test.
  - **Type II error**: {{Not rejecting $H_0$ when $H_0$ is false}}.
<!--SR:!2026-05-21,1,220!2026-05-21,1,228-->

    $$
    \beta = P(\text{fail to reject } H_0 \cap H_0 \text{ is false})
    $$

  - The **power** of a test is the {{probability of correctly rejecting $H_0$ when it is false}}:
<!--SR:!2026-05-21,1,224-->

    $$
    \text{Power } = 1 - \beta = P(\text{reject } H_0 \cap H_0 \text{ is false})
    $$


- ## The $p$-value
  - the decision rule is:
    - if $p \leq \alpha$, {{we reject $H_0$}}
    - if $p > \alpha$, {{we do not reject $H_0$}}
  - smaller $p$-value = {{stronger evidence against $H_0$}}
<!--SR:!2026-05-21,1,220!2026-05-21,1,228!2026-05-21,1,220-->

- ## Decision Rules (Z-test)

  - **Right-tailed**: $H_1 : \mu > \mu_0$
  - Reject $H_0$ if
  ?
  $$
  Z > z_{\alpha}
  $$
<!--SR:!2026-05-21,1,220-->

  - **Left-tailed**: $H_1 : \mu < \mu_0$
  - Reject $H_0$ if
  ?
  $$
  Z < -z_{\alpha}
  $$
<!--SR:!2026-05-21,1,220-->

  - **Two-tailed**: $H_1 : \mu \neq \mu_0$
  - Reject $H_0$ if
  ?
  $$
  |Z| > z_{\alpha/2}
  $$
<!--SR:!2026-05-21,1,220-->

- ## $p$-value (Z-test)
  - $z_{\text{obs}}$ = observed value of $Z$.
  - **Right tailed** ($H_1 : \mu > \mu_0$):
  ?
  $$
  p = P(Z > z_{\text{obs}})
  $$
<!--SR:!2026-05-21,1,220-->

  - **Left tailed** ($H_1 : \mu < \mu_0$):
  ?
  $$
  p = P(Z < z_{\text{obs}})
  $$
<!--SR:!2026-05-21,1,220-->

  - **Two-tailed** ($H_1 : \mu \neq \mu_0$):
  ?
  $$
  p = 2P(Z > |z_{\text{obs}}|)
  $$
<!--SR:!2026-05-21,1,222-->

- ## more
  - **t-test**
  ?
  $$
  T = \frac{\bar{X} - \mu_0}{S/\sqrt{n}}
  $$
    - follws a t-distribution with $n - 1$ degrees of freedom under $H_0$
<!--SR:!2026-05-21,1,220-->

  - **Chi-square test for the variance (with unknown mean)**:
    - $X_1, \dots, X_n$ are i.i.d. from normal distribution

        $$
        X_i \sim N(\mu, \sigma^2),
        $$
      - $\mu$ and $\sigma^2$ are unknown.
      - Target: test

        $$
        \sigma^2 = \sigma_{0}^2
        $$

      - use the test statistic:
        ?
        $$
        \chi^2 = \frac{(n - 1)S^2}{\sigma_{0}^2}
        $$
      - follows a chi-square distribution with {{$n - 1$ degrees of freedom.}}
<!--SR:!2026-05-21,1,220-->

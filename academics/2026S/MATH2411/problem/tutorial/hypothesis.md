---
aliases:
    - hypothesis testing 
tags:
    - MATH2411
---

# Hypothesis testing (original from tutorial)
- In many practical problems we want to make decisions about an unknown population parameter (such as a mean or a variance) using only a sample of data. *Hypothesis testing* provides a formal **framework** for this kind of decision
- ## Null and Alternative Hypotheses
- We start by stating two competing hypotheses:
  - **Null hypothesis $H_0$**: The default or "status quo" claim about the parameter. It is typically written as an equality, such as

$$
H_0: \mu = \mu_0
$$
  - Alternative hypothesis $H_1$ (or $H_a$): the claim we want to find evdence for, usually expressed an as inequality, for example

$$
H_1 : \mu \neq \mu_0, \quad \quad H_1 : \mu > \mu_0 \quad or \quad H_1 : \mu < \mu_0
$$

  - Typically, $H_0$ represents no effect or no difference, and $H_1$ represents the presence of an effect or differnt.
- ## One-sided vs Two-sided tests
- Depending on the scientific question, the alternative hypothesis can take different forms:
  - **Two-sided test:**

$$
H_0 : \mu = \mu_0, \quad \quad H_1 : \mu \neq \mu_0
$$
  - We are interseted in deviations in both directions (either larger or smaller).
- **Right-tailed (upper-tailed) test:**

$$
H_0 : \mu = \mu_0, \quad \quad H_1 : \mu > \mu_0
$$
  - We only care about whether the mean is *larger* than $\mu_0$

- **Left-tailed (lower-tailed) test:**
$$
H_0 : \mu = \mu_0, \quad \quad H_1 : \mu < \mu_0
$$
  - We only care about whether the mean is *smaler* than $\mu_0$

- Unless there is a strong reason to prefer one direction, we usually choose a two-sided test.

- ## Type I and Type II Errors
- In hypothesis testing we may make mistakes, because we base decisions on a random sample:
  - **Type I error**: Reject $H_0$ when $H_0$ is actually true.

$$
\alpha = P(\text{reject } H_0 | H_0 \text{ is true})
$$
  - we denote the probability of a Type I error by $\alpha$, called the *significance level* of the test.
  - **Type II error**: Fail to reject $H_0$ when $H_0$ is false.

$$
\beta = P(\text{fail to reject } H_0 | H_0 \text{ is false})
$$
  - The **power** of a test is the probability of correctly rejecting $H_0$ when it is false:

$$
\text{Power } = 1 - \beta = P(\text{reject } H_0 | H_0 \text{ is false})
$$
  - In practice, we usually fix $\alpha$ at a small value (such as 0.05 or 0.01), to control the risk of rejecting a true null hypothesis. Among all tests with the same $\alpha$, a better test has larger power.
  
- ## Test Statistic, Critical Region, and Decision Rule
- To perform a hypothesis test, we:
  - **Choose a test statistic** $T(X_1, \dots, X_n)$ that summarizes the information in the data relevant to $H_0$ and $H_1$
  - **Find its distribution under** $H_0$. That is, determine the distribution of $T$ assuming $H_0$ is true (for example, standard normal, t-distribution, chi-square, etc.)
  - **Choose the significance level** $\alpha$
  - **Determine the critical region** (rejection region) based on $\alpha$ and the distribution of $T$ under $H_0$. For example, in a right-tailed test we might reject $H_0$ if

$$
T > c
$$
  - where $c$ is a critical value chosen so that

$$
P(T > c | H_0 \text{ true}) = \alpha
$$
  - **compute the observed value** $t_{\text{obs}}$ of the test statistic from the sample.
  - **Make a decision**:
    - if $t_{\text{obs}}$ falls in the critical region, reject $H_0$ 
    - otherwise, do not reject $H_0$
- ## The $p$-value
- An equivalent and widely used approach is based on the p-value:
  - The p-value is the probability, assuming $H_0$ is true, of obtaining a test statistic at least as extreme as the one obsered, in the direction specified by $H_1$
  - Formally,

$$
p = P(\text{test statistic at least as extreme as } t_{obs}| H_0 \text{ is true})
$$
  - the decision rule is:
    - if $p \leq \alpha$, we reject $H_0$
    - if $p > \alpha$, we do not reject $H_0$
  - The smaller the $p$-value, the stronger the evidence against $H_0$

# Z-test for the Mean with Known Variance
- The this section we focus on a common and important case:
  - We have a random sample $X_1, \dots, X_n$ from a normal population

$$
X_i \sim N(\mu, \sigma^2),
$$
  - Where the varaiance $\sigma^2$ is known.
  - We want to test a hypothesis about the mean $\mu$
  - Let $\bar{X}$ denote the sample mean. Then, 

$$
\bar{X} \sim N(\mu, \frac{sigma^2}{n})
$$
  - under $H_0 : \mu = \mu_0$, the standardized test statistic

$$
Z = \frac{\bar{X} - \mu_0}{\sigma/\sqrt{n}}
$$
  - follows the standard normal distribution $N(0,1)$
- ## Decision Rules for different Alternatives
  - Let $z_{\alpha}$ denote the upper $\alpha$ quantile of the standard normal distribution, i.e., 

$$
P(Z > z_{\alpha}) = \alpha
$$
  - **Right-tailed test**: $H_1 : \mu > \mu_0$
  - Reject $H_0$ if 

$$
Z > z_{\alpha}
$$

  - **Left-tailed test**: $H_1 : \mu < \mu_0$
  - Reject $H_0$ if 

$$
Z < -z_{\alpha}
$$

  - **Two-sided test**: $H_1 : \mu \neq \mu_0$
  - Reject $H_0$ if 

$$
|Z| > z_{\alpha/2}
$$

- ## $p$-value for the Z-test
- Let z_{\text{obs}} be the observed value of $Z$.
  - **Right tailed test** ($H_1 : \mu > \mu_0$):

$$
p = P(Z > z_{\text{obs}})
$$

  - **Left tailed test** ($H_1 : \mu < \mu_0$):

$$
p = P(Z < z_{\text{obs}})
$$

  - **Two-sided test** ($H_1 : \mu \neq \mu_0$):

$$
p = 2P(Z > |z_{\text{obs}}|)
$$

- ## Other tests 
- For completeness, it is useful to mention two other classical tests
  - **t-test for the mean** (unknown variance): When $\sigma^2$ is unknown and we estimate it by the sample variance $S^2$, the test statistic

$$
T = \frac{\bar{X} - \mu_0}{S/\sqrt{n}}
$$
  - follws a t-distribution with $n - 1$ degrees of freedom under $H_0$
  - **Chi-square test for the variance (with unknown mean)**: Suppose $X_1, \dots, X_n$ are i.i.d. from a normal distribution

$$
X_i \sim N(\mu, \sigma^2),
$$
  - where both $\mu$ and $sigma^2$ are unknown. To test

$$
\sigma^2 = \sigma_{0}^2
$$

- we use the sample variance:

$$
S^2 = \frac{1}{n - 1}\sum_{i = 1}{n}{(X_i - \bar{X})^2}
$$
- which is computed using the sample mean $\bar{X}$ as an estimate of the unknown $\mu$. Under $H_0$, the test statistic

$$
\chi^2 = \frac{(n - 1)S^2}{\sigma_{0}^2}
$$
- follows a chi-square distribution with $n - 1$ degrees of freedom.

# Power of a Z-test
- consider a right-tailed Z-test:

$$
H_0: \mu = \mu_0 \quad \quad \text{vs.} \quad \quad H_1 : \mu > \mu_0
$$
- with known variance $\sigma^2$.
  - We use the test statistic:

$$
Z = \frac{\bar{X} - \mu_0}{\sigma/\sqrt{n}}
$$
- and reject $H_0$ if $Z > z_{\alpha}$ for a chosen significance level $\alpha$
- ## Definition of Power
  - Suppose the true mean is $\mu_1 > \mu_0$ (so that $H_0$ is false). The **power** at $\mu_1$ is 

$$
\text{Power}(\mu_1) = P(\text{reject } H_0 | \mu = \mu_1) = P(Z > z_{\alpha} | \mu = \mu_1)
$$
  - To compute this, we note that, if the true mean is $\mu_1$, then

$$
\bar{X} \sim N(\mu_1, \frac{sigma^2}{n})
$$

and therefore

$$
Z = \frac{\bar{X} - \mu_0}{\sigma/\sqrt{n}}
$$
- is normal with mean

$$
Z = \frac{\mu_1 - \mu_0}{\sigma/\sqrt{n}}
$$

- and variance 1.

- ## Practical Computation of Power
- An equivalent and often simpler way to compute power is:
  - 1. First, find the critical value in terms of $\bar{X}$ under $H_0$ :

$$
Z > z_{\alpha} \iff \frac{\bar{X} - \mu_0}{\sigma/\sqrt{n}} \iff \bar{X} > \mu_0 + z_{\alpha}\frac{\sigma}{\sqrt{n}}
$$

  - denote this critical value by

$$
c = \mu_0 + z_{\alpha}\frac{\sigma}{\sqrt{n}}
$$
  - 2. then, under the true mean $\mu_1$, compute

$$
\text{Power}(\mu_1) = P(\bar{X} > c | \mu = \mu_1)
$$

  - 3. use the distribution:

$$
\bar{X} \sim N(\mu_1, \frac{\sigma^2}{n})
$$
  - to standardize and evaluate this probability using the standard normal distribution.

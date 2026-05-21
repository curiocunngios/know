---
aliases:
    - estimators
    - point estimation
tags:
    - flashcard/active/stats
    - MATH2411
---

# estimators
- ## bias
  - the bias of an estimator is:
  ?
$$
\text{Bias}(\hat{\theta}) = E(\hat{\theta}) - \theta
$$
<!--SR:!2026-05-21,1,210-->

- If it is 0, it is unbiased.

- ## MSE (Mean squared Error)
  - The MSE is:
?
$$
\text{MSE}(\hat{\theta}) = Var(\hat{\theta}) + [\text{Bias}(\hat{\theta})]^2
$$
<!--SR:!2026-05-21,1,210-->

- ## MME (Method of Moments) procedure
  - The steps of calculating the MME are:
    - 1. for the $n$ targeted unknown parameters to estimate, write first $n$ population moments in terms of those parameters.
    - 2. Solve those equations to make the parameters in terms of the population moments
    - 3. replace the population moments with sample moments. For example, $E(X)$ with $\bar{X}$ and $E(X^2)$ with $\overline{X^2}$
- ## MLE (Maximum likelihood estimator) procedure
  - The steps are:
    - 1. Write down the likelihood function $L(\theta)$. Take the $\prod$ on the pmf or pdf.
    - 2. take log and get $l(\theta)$
    - 3. differentiate with respect to $\theta$
    - 4. solve $\frac{dl(\theta)}{d\theta} = 0$
    - 5. check that that gives a maximum.


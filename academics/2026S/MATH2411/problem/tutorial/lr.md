---
aliases:
    - linear regression
tags:
    - flashcard/active/stats
    - MATH2411
---

# Linear regression
$$
Y_i = \beta_{0} + \beta_{1}x_i + \epsilon_{i}, \quad \epsilon_{1} \sim N(0, \sigma^2), \quad i = 1,2,\dots,n
$$
  - $Y_i$: {{Dependent varaiable (response, regressand)}}
    - type: {{random variable}}
  - $x_i$: {{Independent variable (explanatory variable regressor, predictor)}}
    - type: {{fixed value (in this course)}}
  - $\beta_{1}$: {{Slope}}
  - $\beta_{0}$: {{Intercept}}
    - expected value of $Y$ when $x = 0$
  - $\epsilon_{i}$: {{Random error with mean 0 and constant variance $\sigma^2$}}
- ## Least squares Estimation
  - the least squares estimators minimize $\sum_{i = 1}^{n}{[y_i - (b_0 + b_1x_i)]^2}$:
<!--SR:!2026-05-21,1,228!2026-05-21,1,225!2026-05-21,1,225!2026-05-21,1,230!2026-05-21,1,225!2026-05-21,1,225!2026-05-21,1,225-->

$$
\hat{\beta_{1}} = \frac{\sum_{i = 1}^{n}(x_{i} - \bar{x})(y_{i} - \bar{y})}{\sum_{i = 1}^{n}(x_{i} - \bar{x})^2} = \frac{S_{xy}}{S_{xx}}, \quad \hat{\beta_{0}} = \bar{y} - \hat{\beta_{1}}\bar{x}
$$
- where $S_{xx} = \sum_{i = 1}^{n}(x_{i} - \bar{x})^2$ and $S_{xy} = \sum_{i = 1}^{n}(x_{i} - \bar{x})(y_{i} - \bar{y})$
- **Properties**:
  - Unbiased: $E(\hat{\beta_{1}}) =$ {{$\beta_{1},$}} $E(\hat{\beta_{0}}) =$ {{$\beta_{0}$}}
  - Variance: $Var(\hat{\beta_{1}}) =$ {{$\frac{\sigma^2}{S_{xx}},$}} $Var(\hat{\beta_{0}}) =$ {{$\sigma^2(\frac{1}{n} + \frac{\bar{x}^2}{S_{xx}})$}}
  - Distributions: $\hat{\beta_{1}} \sim$ {{$N(\beta_{1}, \frac{\sigma^2}{S_{xx}}),$}} $\hat{\beta_{0}} \sim$ {{$N(\beta_{0}, \sigma^2(\frac{1}{n} + \frac{\bar{x}^2}{S_{xx}}))$}}

- ## Correlection Analysis
- **Sample correlation coefficient**:
?
$$
r = \frac{\sum(x_i - \bar{x})(y_i - \bar{y})}{\sqrt{\sum(x_i - \bar{x}^2)}\sqrt{\sum(y_i - \bar{y}^2)}} = \frac{S_{xy}}{\sqrt{S_{xx}S_{yy}}}, \quad -1 \leq r \leq 1
$$
<!--SR:!2026-05-21,1,225-->

- ## Confidence Intervals (unknown variance)
  - when $\sigma^2$ is unknown, estimate with $s^2 =$ {{$\frac{SSE}{n - 2}$}} where $SSE =$ {{$\sum_{i = 1}^{n}(y_i - \hat{y_i})^2$}}
  - $\frac{\hat{\beta_{1}} - \beta_{1}}{s/\sqrt{S_{xx}}} \sim t_{n - 2}$
  - $\frac{\hat{\beta_{0}} - \beta_{0}}{s/\sqrt{\frac{1}{n} + \frac{x^2}{S_{xx}}}} \sim t_{n - 2}$
    - **Confidence intervals**:
    ?
    - $\hat{\beta_{1}} \pm t_{n - 2, \alpha/2}\cdot \frac{s}{\sqrt{S_{xx}}}$
    - $\hat{\beta_{0}} \pm t_{n - 2, \alpha/2}\cdot s\sqrt{\frac{1}{n}+ \frac{\bar{x}^2}{S_{xx}}}$
<!--SR:!2026-05-21,1,225-->

- ## Hypothesis testing
  - **Test statistic**
  ? 
$$
T = \frac{\hat{\beta_{1}} - b_1}{s/\sqrt{S_{xx}}} \sim t(n - 2)
$$
$$
T = \frac{\hat{\beta_{0}} - b_0}{s\sqrt{\frac{1}{n}+ \frac{\bar{x}^2}{S_{xx}}}} \sim t(n - 2)
$$

- ## Prediction
- Point prediction: $\hat{Y}_{\text{new}} = \hat{\beta_{0}} + \hat{\beta_{1}}x_{\text{new}}$
- **Confidence interval**
- **mean response** $E(Y_{\text{new}})$:
?
$$
\hat{Y}_{\text{new}} \pm t_{n - 2, \alpha/2} \cdot s\sqrt{\frac{1}{n} + \frac{(x_{\text{new}} - \bar{x})^2}{S_{xx}}}
$$
<!--SR:!2026-05-21,1,225-->

- **individual response** $Y_{\text{new}}$
?
$$
\hat{Y}_{\text{new}} \pm t_{n - 2, \alpha/2} \cdot s\sqrt{1 + \frac{1}{n} + \frac{(x_{\text{new}} - \bar{x})^2}{S_{xx}}}
$$
<!--SR:!2026-05-21,1,225-->

- ## evaluation

    $$
    SST = \sum_{i = 1}^{n}(y_i - \bar{y})^2 \quad (\text{Total}, df = n - 1) 
    $$
    $$
    SSE = \sum_{i = 1}^{n}(y_i - \hat{y}_{i})^2 \quad (\text{Error}, df = n - 2)
    $$
    $$
    SSR = \sum_{i = 1}^{n}(\hat{y}_i - \bar{y})^2 \quad (\text{Regression}, df = 1)
    $$

    - $SST =$ {{$SSR + SSE$}}
    - $MSE =$ {{$s^2 = \frac{SSE}{n - 2}$}}
    - $R^2 =$ {{$\frac{SSR}{SST} = 1 - \frac{SSE}{SST}$}}
<!--SR:!2026-05-21,1,225!2026-05-21,1,225!2026-05-21,1,225-->
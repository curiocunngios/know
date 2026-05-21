
# Linear regression Model (original from the tutorial)
- ## Model specification
  - The simple linear regression model is:

$$
Y_i = \beta_{0} + \beta_{1}x_i + \epsilon_{i}, \quad \epsilon_{1} \sim N(0, \sigma^2), \quad i = 1,2,\dots,n
$$
  - where:
    - $Y_i$: Dependent varaiable (response, regressand) - random variable
    - $x_i$: Independent variable (explanatory variable regressor, predictor) - fixed
    - $\beta_{1}$: Slope - change in $Y$ for unit change in $x$
    - $\beta_{0}$: Intercept - expected value of $Y$ when $x = 0$
    - $\epsilon_{i}$: Random error with mean 0 and constant variance $\sigma^2$
- ## Least squares Estimation
  - the least squares estimators minimize $\sum_{i = 1}^{n}{[y_i - (b_0 + b_1x_i)]^2}$:

$$
\hat{\beta_{1}} = \frac{\sum_{i = 1}^{n}(x_{i} - \bar{x})(y_{i} - \bar{y})}{\sum_{i = 1}^{n}(x_{i} - \bar{x})^2} = \frac{S_{xy}}{S_{xx}}, \quad \hat{\beta_{0}} = \bar{y} - \hat{\beta_{1}}\bar{x}
$$
- where $S_{xx} = \sum_{i = 1}^{n}(x_{i} - \bar{x})^2$ and $S_{xy} = \sum_{i = 1}^{n}(x_{i} - \bar{x})(y_{i} - \bar{y})$
- **Properties**:
  - Unbiased: $E(\hat{\beta_{1}}) = \beta_{1}, E(\hat{\beta_{0}}) = \beta_{0}$
  - Variance: $Var(\hat{\beta_{1}}) = \frac{\sigma^2}{S_{xx}}, Var(\hat{\beta_{0}}) = \sigma^2(\frac{1}{n} + \frac{\bar{x}^2}{S_{xx}})$
  - Distributions: $\hat{\beta_{1}} \sim N(\beta_{1}, \frac{\sigma^2}{S_{xx}}), \hat{\beta_{0}} \sim N(\beta_{0}, \sigma^2(\frac{1}{n} + \frac{\bar{x}^2}{S_{xx}}))$
- ## Correlection Analysis
- **Sample correlation coefficient**:

$$
r = \frac{\sum(x_i - \bar{x})(y_i - \bar{y})}{\sqrt{\sum(x_i - \bar{x}^2)}\sqrt{\sum(y_i - \bar{y}^2)}} = \frac{S_{xy}}{\sqrt{S_{xx}S_{yy}}}, \quad -1 \leq r \leq 1
$$
  - Population correlation: $\rho = \frac{Cov(X,Y)}{\sigma_{X}\sigma_{Y}}$ (?wtf is Cov?)
  - Fisher's Z transformation for CI of $\rho$:
    - 1. Transform: $Z_{\text{Fisher}} = \frac{1}{2}ln(\frac{1 + r}{1 - r})$
    - 2. Distribution: $Z_{\text{Fisher}} \sim N(\frac{1}{2}ln(\frac{1 + \rho}{1 - \rho}), \frac{1}{n - 3})$
    - 3. CI for $Z$: $Z_{\text{Fisher}} \pm z_{\alpha/2}\sqrt{\frac{1}{n - 3}}$
    - 4. Transform back to get CI for $\rho$

# Inference
- ## Confidence Intervals (unknown variance)
- when $\sigma^2$ is unknown, estimate with $s^2 = \frac{SSE}{n - 2}$ where $SSE = \sum_{i = 1}^{n}(y_i - \hat{y_i})^2$
- **Theorem 1.** $\frac{\hat{\beta_{1}} - \beta_{1}}{s/\sqrt{S_{xx}}} \sim t_{n - 2}$ and $\frac{\hat{\beta_{0}} - \beta_{0}}{s/\sqrt{\frac{1}{n} + \frac{x^2}{S_{xx}}}} \sim t_{n - 2}$
  - **Confidence intervals** ($1 - \alpha$ level):
    - for $\beta_{1}: \hat{\beta_{1}} \pm t_{n - 2, \alpha/2}\cdot \frac{s}{\sqrt{S_{xx}}}$
    - for $\beta_{0}: \hat{\beta_{0}} \pm t_{n - 2, \alpha/2}\cdot s\sqrt{\frac{1}{n}+ \frac{\bar{x}^2}{S_{xx}}}$
- ## Hypothesis testing
  - **Test statistic for** $\beta_{1}: T = \frac{\hat{\beta_{1}} - b_1}{s/\sqrt{S_{xx}}} \sim t(n - 2)$
    - **Test statistic for** $\beta_{0}: T = \frac{\hat{\beta_{1}} - b_1}{s\sqrt{\frac{1}{n}+ \frac{\bar{x}^2}{S_{xx}}}} \sim t(n - 2)$

| Alternative ($H_1$)         | Rejection Region                                  | P-value                                   |
| --------------------------- | ------------------------------------------------- | ----------------------------------------- |
| $\beta > b$ (Right-tailed)  | $T_{\text{obs}} > t_{n - 2, \alpha}$              | $P(T_{n - 2} > T_{\text{obs}})$           |
| $\beta < b$ (left-tailed)   | $T_{\text{obs}} < -t_{n - 2, \alpha}$             | $P(T_{n - 2} < T_{\text{obs}})$           |
| $\beta \neq b$ (Two-tailed) | $\mid T_{\text{obs}} \mid > -t_{n - 2, \alpha/2}$ | $2P(T_{n - 2} > \mid T_{\text{obs}}\mid)$ |

- ## Prediction
  - Point prediction: $\hat{Y}_{\text{new}} = \hat{\beta_{0}} + \hat{\beta_{1}}x_{\text{new}}$
    - **Confidence interval for mean response** $E(Y_{\text{new}})$:

$$
\hat{Y}_{\text{new}} \pm t_{n - 2, \alpha/2} \cdot s\sqrt{\frac{1}{n} + \frac{(x_{\text{new}} - \bar{x})^2}{S_{xx}}}
$$
  - **Prediction interval for individual response $Y_{\text{new}}$

$$
\hat{Y}_{\text{new}} \pm t_{n - 2, \alpha/2} \cdot s\sqrt{1 + \frac{1}{n} + \frac{(x_{\text{new}} - \bar{x})^2}{S_{xx}}}
$$
  - Note: Prediction interval is wider (includes the extra "1") to account for individual observation variability.

- ## Model Evaluation
  - **Sum of squares decomposition**:

$$
SST = \sum_{i = 1}^{n}(y_i - \bar{y})^2 \quad (\text{Total}, df = n - 1) 
$$
$$
SSE = \sum_{i = 1}^{n}(y_i - \hat{y}_{i})^2 \quad (\text{Error}, df = n - 2)
$$
$$
SSR = \sum_{i = 1}^{n}(\hat{y}_i - \bar{y})^2 \quad (\text{Regression}, df = 1)
$$

  - **Key relationship**: $SST = SSR + SSE$
  - **Mea squared error:** $MSE = s^2 = \frac{SSE}{n - 2}$ (unbiased estimator of $\sigma^2$)
  - **Coefficient of determination:** $R^2 = \frac{SSR}{SST} = 1 - \frac{SSE}{SST}$ (proportion of variance explained, $0 \leq R^2 \leq 1$)
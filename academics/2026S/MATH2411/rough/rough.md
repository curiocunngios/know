# description
- very rough notes that can be taken by text, no drawing needed
- usually for extraction of key ideas 
- I most likely only mark down key ideas I roughly got from purely reading the material and that I did not know those messages very well beforehand.

# 29//4/2026 math2411 estimators
![alt text](attachments/image.png)
- the message is that:
  - from now on, the course will now use r.v. (random variables) to interpret sample data (haven't observed ones)
- the following is true but the slide did not explicitly says it:
  - the motivation of estimators are to use sample data (data picked from the population) to **guess** the parameter (a *true* number that describes all the data, not just a group of data)

![alt text](attachments/image-1.png)
- this slide bring up some important vocabularies and concepts:
  - if the population is <u>unknown</u>, then we don't know its [distribution](../../../../notes/distribution.md) as well.
  - A sample is a collection of data of the r.v. $X$, if they are observed then we should use the lower case letter $x$ to represent them.
  - A parameter (a numeric value that gives some meaningful information of the population e.g. population mean) should be mathematically represented with symbols like $\mu$ (perhaps to form a concise mathematical sentence that tells a meaning)
  - A statistic (a numeric value that gives some meaningful information about the sample e.g. sample mean) should be mathematically represetned with symbols like $\bar{x}$ (sample mean), $s_{n - 1}^2$ (sample variance with degree of freedom equals to $n - 1$)
  - the motivation of statistic (information from the sample) is to be used to guess the information about the population
- confusion (old): 
  - "A UNKNOWN population: An UNKNOWN distribution of the r.v. 𝑿, A sample: A collection of data of 𝑿. "
  - how does random variable relates with population and sample?
  - my knowledge/assumption: random variable is functions that assigns a number to a probabilistic event
  - my guess: perhaps the relationship is this:
    - treat the data sample or population the "event" and the values that the random variable $X$ takes (or what the r.v. function outputs) are also the exact same data in the sample or population
  - **answer:** more precisely, the relationship is that the r.v. just follows the original definition I stated in "my knowledge/assumption", this time the input is also a random outcome but is also a member from the population, and the output is the data value of that member. For example, chosen could be "student A", output is their score. The motivation for apply r.v. in statistics is to get more information that I would discover later in the grind.
  - a good illustration of that:
    - ![alt text](attachments/image-2.png)

![alt text](attachments/image-3.png)
- tells us that the sample mean in fact varies (by choosing different samples), so the motivation of using r.v. here is exactly this. To record the unobserved state.

![alt text](attachments/image-4.png)
- introduce $\bar{X}$, a random variable defined to be taking all the sample means.
- which its realization, the actual value, is exactly a sample mean of a particular set of sample.

![alt text](attachments/image-5.png)
- confusion: 
  - "Then, the 𝑛 data of 𝑋 now can be interpreted as the data of these 𝑛 copies. "
    - why? why can we just say that they now can be interpreted as the data of the n copies? Doesn't each copy of the random variable $X$, i.e. $X_1, ..., X_n$ has a different mapping? I assume they represents different samples?
    - **answer:** turned out the assumption is wrong. $X_1, ..., X_n$ all have same mapping with $X$ since they are literal copies of $X$. We copy $X$ because we want to represent the fact that we do the experiment many times. For example, $X$ means "lifespan of a randomly chosen light bulb", then $X_n$ means "lifespan of the $n$-th chosen light bulb". The reason of doing so is same as above. Since the experiment is random, we don't know the values until observed (by then we name them $x_1, ..., x_n$). So, they are random and we use random variables to represent them.

![alt text](attachments/image-6.png)
- confusion:
  - earlier $\bar{X}$ was presented as $\bar{x}_1 + ... + \bar{x}_B$  i.e. different sample mean ...
  - **guess:** no...I am literally trolling. Earlier it did not say that, it says: $\bar{x}_1 + ... + \bar{x}_B$ are the **actual values** of $\bar{X}$. Them adding up together (or with additional of dividing by $B$) is an entirely different value. So, there's no contradiction of this current slide with the previous slides. $\bar{X}$ is indeed just another r.v. produced by $\frac{X_1 + ... + X_n}{n}$. And if we do **sampling** $B$ times then $B$ many actual values could be produced 
- message of the slide: Estimator is used to guess and give some additional information about the population. We use r.v. $X_1, ..., X_n$ for all the mathematical calculations involved to present because the sampling selection is a random process. Estimate is just the result of the estimator function when values are observed and applied.

![alt text](attachments/image-7.png)
- confusion (old):
  - why is cdf: $F(x;\theta)$ used here
    - **guess**: most likely nothing special. It just shows an example that the population follows or can be modelled by a specific pdf or cdf with $x$ being the statistic and $\theta$ being a parameter
    - it is probably just trying to **generalize** the case.
  - what is the meaning of a $;$
    - not sure. My **guess** is that it is just a separator like a "," to separate "inputs" or "variables" involved in the function.
  - why does $X \sim$ i.e. "follows the distribution"?  
    - same **guess** as above, it probably is just generalizing the case, saying that $X$ is modelled by that specific function so it follows that specific distribution.
- this is more like a summary slide. There are several key ideas told in this slide that have been told earlier. I do have some small confusions written above. But I am going to delaying research them since I don't have much time right now. They seems trivial and I guess I would know them later after studying the later contents. By that time I might come back and put the answers here. Don't have to worry about these small confusions at the moment I guess.

![alt text](attachments/image-8.png)
- the message is that a statistic is a function that:
  - does not depend on any population parameter.
  - composed of random samples.
- a very clean slide that tells the definition of **statistic** after having given the prior basic fundational ideas. The definition is that statistic is any function **of** r.v. or **random sample** more precisely. It does not depend on unknown parameter.



![alt text](attachments/image-9.png)
- the key takeaway of this slide is to remember that:
  - once we have the following assumptions:
    - $E(X) = \mu$
    - $Var(X) = \sigma^{2}$
  - then, we can conclude:
    - $E(\bar{X}) = \mu$: 
      - implies $\bar{X}$ is an unbiased estimator of $\mu$
    - $Var(\bar{X}) = \frac{\sigma^2}{n}$ 
      - (what does this imply?)
    - $E(S_{n - 1}^2) = \sigma^{2}$
      - (what does this imply?)

![alt text](attachments/image-10.png)
- The continue of the proof of the previous slide.

![alt text](attachments/image-11.png)
- Some supplementary information missing from the slide:
  - $\hat{\theta}$ with a hat refers to the estimator of a particular population parameter $\theta$
  - which is a r.v. (random variable)
- the messages from the slide are:
  - define the accuracy of a specific estimator $\hat{theta}$ to be the expectation: $E(\hat{\theta})$
  - therefore, the bias (basically the "error"), is then defined to be $E(\hat{\theta}) - \theta$
  - if the bias is $0$, the estimator is considered as nonbiased.
- (old me): tells you what biased or unbiased mean: measure of how far it is away from the true parameter: $\theta$ by taking the expected value.

![alt text](attachments/image-12.png)
- The message are that:
  - the precision of an estimator is defined to be: $\sigma^{2}(\hat{\theta})$ or $Var(\hat{\theta})$
    - what does the sentence: "precision = $1/\sigma^{2}$" mean?
  - apart from how far away (expectation), we also want the estimator result to be concentrated around paramter (variance)

![alt text](attachments/image-13.png)
- The message:
  - MSE is a combined measurement of how good an estimator is.
  - by taking both the bias (accuracy) and variance (precision) into the consideration.

![alt text](attachments/image-14.png)
- a very confusing slide with high cognitive load
- several things:
  - the $T$ means transposing the vector to go from being row to column
  - the vector presentation here basically just says that there exists a list of possible parameters, that's it
  - picking one of the possibilities is called the estimation...that's it, I guess

![alt text](attachments/image-15.png)
- the ideas here are very clear, don't think I need to write in my own words lol

# 30/4/2026 estimators MME and MLE
![alt text](attachments/image-16.png)
- state and give exmaples on the fact that population moment is $E(X^r)$



![alt text](attachments/image-17.png)
- summarizes what is MME (method of moments). It just replaces the population moments e.g. $E(X)$ by sample moments $\bar{X}$ in an equation involving for example the population mean $\mu$ (you have got to find ways to write an equation of $E(X)$ in terms of the unknown parameters). There are other restrictions expained in the slide 

![alt text](attachments/image-18.png)
- now it has come to MLE, my guess is that it finds the $\hat{\theta}$ that gives a maximum probability of sample data happening just by telling from this slide

![alt text](attachments/image-19.png)
- a few messages from this slide:
  - use lower case letter $x$ in the calculation of the maximum $\hat{\theta}$ since we want to say that we are optimizing with observed values (in fact it seems like most of the time we don't need to use those values, idk)
  - some new things:
    - arg max($\theta$) chooses the $\theta$ when maximum happens
    - joint pmf is the probability involve multiple r.v. 
    - marginal is just one r.v. involved

# 1/5/2026 Interval estimator CI

![alt text](attachments/image-21.png)
- says that now we have a new target: $a, b$ such that we have can obtain a large probability with the above formula ($C$). Which is the probability that the real parameter $\theta$ falls in the interval created  by $a, b, \hat{\theta}$.
- It's called the Confidence Interval
- We use this to quantify how accurate the estimator is

![alt text](attachments/image-20.png)
![alt text](attachments/image-22.png)
![alt text](attachments/image-23.png)
- says that, for $\bar{X}$. There could be different sampling distribution, the distribution of the estimator across different samples. For example, it could be:
  - Poisson
  - Binomial
  - Normal

![alt text](attachments/image-24.png)
![alt text](attachments/image-25.png)
![alt text](attachments/image-26.png)
- now it says that based on the central limit theorem, for a large sample size $n$, the sampling distribution of the estimator $\bar{X}$ gets close to normal distribution. So, the course and we can basically assume that it follows the normal distribution
![alt text](attachments/image-145.png)
- shows how the standardized normal distribution can be applied.
![alt text](attachments/image-27.png)
- introduce that the common targeted $C$ value is 0.95, 0.90, 0.99
- then we look for $a$ and $b$ to quantify how accurate the estimator is. The likelihood that the real parameter falls in the interval created by $a, b, \hat{\theta}$ is $0.95$
- specifically the interval is $[\bar{X} - 1.96 \times \frac{\sigma}{\sqrt{n}}, \bar{X} + 1.96 \times \frac{\sigma}{\sqrt{n}}]$ where $a = b = 1.96$ 

![alt text](attachments/image-28.png)
- basically the ideas I have stated above. 
- additionally says that there are also the "estimate" version of the CI with lower case letter $\bar{x}$ that presents themselves as giving numercial values instead of analysis(capitalized $\bar{X}$


![alt text](attachments/image-29.png)
![alt text](attachments/image-30.png)
- these two slides now bring a very very important conceptual point I misunderstood:
  - the Confidence Interval is in fact say that: if we repeat the sampling and experiment many times, there would be approximately $95%$ of the intervals containing the true parameter e.g. $\mu$
  - It is not saying that the probability that it falls into the interval is $0.95$
    - For example, if we do the sampling and experiment for only once, than the parameter either falls or not falls into the interval
    - the probability that it falls into that interval in fact either $0$ or $1$
  
# generalize 

![alt text](attachments/image-31.png)
- introduce $\alpha = (1 - C)/2, \quad \mathcal{z}_{\alpha} = \Phi^{-1}(1 - \alpha)$ called the critical value
  - and that $\mathcal{z}_{\alpha} = -\mathcal{z}_{1 - \alpha}$
  - just a more generalized version of the previous calculation
  - mainly used to give the CI when $\sigma^{2}$ is known

![alt text](attachments/image-32.png)
- this slide invoke our thoughts by asking the following questions:
  - Q: How would the width of a confidence interval change when n increases?
    - decrease I guess. Based on the formula since $n$ is the denominator
  - Q: How would the width of a confidence interval change when C increases?
    - I would like to prcrastinate thinking about this one
  - Q: “We calculated the 95% CI of mean to be [ 742.16,  1114.04], which 
  means this interval contains the mean  with probability 0.95.” True or 
  False?
    - probably false
- and then the powerpoint shows some example slides that introduces very simmple application of what we have just learnt

## t
![alt text](attachments/image-33.png)
- says that when the true parameter: $\sigma^2$ is unknown, we also don't know $\sigma$.
- so then we replace it with the sample standard deviation

![alt text](attachments/image-34.png)
- then, the new equation: $\frac{\bar{X} - \mu}{S_{n - 1}/\sqrt{n}} \sim t_{n - 1}$ follows the so called Student's-$t$-distribution
- a more generalized symbol is $t_{\nu}$ where the $\nu$ represents degree of freedom (I don't know what that is lol, seems like the denominator for standard deviation and variance, I guess I would learn more about this later so I am going to procrastinate a little here)
- the $t$ distribution's pdf seems a little more complex than the normal distribution, but that's fine, I guess I can ignore the details here
- let's move on

![alt text](attachments/image-35.png)
- similar to the normal distribution one. But now the critical value is not $z_\alpha$, it is instead this little constant: $t_{\nu, \alpha}$
- I guess it should be generally larger than $z_{a}$ since what I read about the difference between $t$ distribution and normal distribution is that the tail of the bell curve (of $t$) is thicker and that somehow accounts for the small error made by using sample standard deviation, which is a random variable, instead of the constant true parameter: $\sigma$
- and then the powerpoint shows a few example slides

## chi-sq
![alt text](attachments/image-36.png)
- shows very clear definition of the chi-square distribution, basically the the sum of all the random samples being squared (each have to follow the standardized normal distribution), and then that sum follows the chi-sqr distribution
- more importantly, $\frac{(n - 1)S_{n - 1}^2}{\sigma^2}$ allows follows chi-sqr distribution
- the motivation is that we want the CI for $\sigma^2$

![alt text](attachments/image-37.png)
- very important point:
  - different from the normal distribution and the $t$ dsitribution, the curve is not symmetric 
- the denominator are the critical values, I guess we need to calculate them separately in `R`
- then the remaining slides shows some examples to reinforces students' understanding, I would do them later, for sure.

# 2/5/2026 hypothesis testing:
![alt text](attachments/image-38.png)
- from just the examples. It seems to be that the null hypothesis $H_0$ is ass 
- But we don't know much now, they are still not properly introduced

![alt text](attachments/image-39.png)
- never mind. It's just that null hypothesis always assume things to be true and alternative hypothesis is the complement of null hypothesis
- few questions in my mind:
  - what does it even mean by having or not having the '=' sign
  - "it's the hypothesis that represent the underlying research question" 
    - how does "coin is biased" reflect the underlying research question at all
- but at least we got the definition: Hypothesis is a statement about the model 

![alt text](attachments/image-40.png)
![alt text](attachments/image-41.png)
![alt text](attachments/image-42.png)
- a few key messages here:
  - **test statistic**: generally a function to determine which hypothesis to choose
  - **decision rule**: rule to decide which hypothesis to choose based on the test statistic
  - if we can't reject a hypothesis, that doesn't mean we accept it either. 
- the image of hypothesis testing is getting a little bit clearer

![alt text](attachments/image-43.png)
- shows what it was saying about the '=' sign
- shows even more clearly that there are 3 components involved:
  - null/alternative hypothesis
  - test statistic
  - decision rule

![alt text](attachments/image-44.png)
- a little bit more clearer with a high-level overview:
  - first have a hypothesis
  - assume some certain things:
    - e.g. independence
    - e.g. follows normal distribution
  - test the statistic and its distribution (don't know how)
  - see the signifiance level 
  - by using the CI I guess?
  - conclusion: whether reject $H_0$ or not 


![alt text](attachments/image-45.png)
![alt text](attachments/image-46.png)
- says that there is a thing called the "type I error probability" or shortly speaking "type I error" that tells the probability of wrongly rejecting $H_0$ while it being true. Such a probability is $\alpha$
- also there's a thing called the "type II error", which is to not reject $H_0$ while $H_1$ is true $\beta$

![alt text](attachments/image-47.png)
![alt text](attachments/image-48.png)
![alt text](attachments/image-49.png)
![alt text](attachments/image-50.png)
![alt text](attachments/image-51.png)
![alt text](attachments/image-52.png)
- this sequence of slides is basically show that there's a trade-off between minimizing $\alpha$ or $\beta$ so they can't be minimized simultaneously. One go down the other goes up

![alt text](attachments/image-53.png)
![alt text](attachments/image-54.png)
- says that we can choose $c$ by fixing type I error $\alpha$ to be a specific small value e.g. $0.05$ as shown on the slides

![alt text](attachments/image-55.png)
- shows how to "normalize" the $P(\bar{X} > c) = 0.05$ into $P(\frac{\bar{X} - \mu} {\sigma/\sqrt{n}} > \frac{c - \mu}{\sigma/\sqrt{n}}) = 0.05$ and then use the normalize distribution to solve for $c$ given that it's a hypothesis test and $\mu, \sigma, n$ are known 
- here $z_\alpha$ again (learnt from CI) is just a point on the x-axis where the probability (the area under the curve) is exactly $\alpha$


![alt text](attachments/image-56.png)
generalize $c$


![alt text](attachments/image-57.png)
- brings out 3 messages
  - this type of test is called one-sided greater (or right) test
  - with only '=' sign then it's called simple hypothesis
  - with '>' or '<' sign it's called composite hypothesis


![alt text](attachments/image-58.png)
- introduce 4 types of tests, default is two-sided test


![alt text](attachments/image-59.png)
- simply just makes sense by intuition that if the hypothesis is '<' (one-side less test then it makes sense to make the rejection regionn $\bar{x} < \mu_{0} - \mathcal{z}_{\alpha}\frac{\sigma}{\sqrt{n}}$ instead of '>'

![alt text](attachments/image-60.png)
- same idea, this time it's a $\neq$ sign so of course either '>' or '<' would be good

![alt text](attachments/image-61.png)
- for simple test involving $\mu{1}$ as well, we can't say much when we don't know whether it's greater or less than $\mu{0}$. When it is known, just switch it to one-sided test
- and then it gives some examples apply the rejection region of the tests

![alt text](attachments/image-62.png)
![alt text](attachments/image-63.png)
![alt text](attachments/image-64.png)
- introduces the importance of **power:** $1 - \beta$, which we want it to be as large as possible since $\beta$ is the type II error, we don't want type II error to happen when we falls into the conclusion of not rejecting $H_0$. I guess that's what these slides want to say

![alt text](attachments/image-65.png)
![alt text](attachments/image-66.png)
![alt text](attachments/image-67.png)
![alt text](attachments/image-68.png)
- shows how $1 - \beta$ changes when we increase the $\mu_{1}$ for the simple test (simple alternative)
- the conclusion is that it increases 

![alt text](attachments/image-69.png)
![alt text](attachments/image-70.png)
- to deal with (determine the power) on composite alternative 
- we need to make an additional assumption on the value of $\mu$ under $H_1$, call it $\mu_{1}$ effectively turning it into a simple test
- after that we get an formula showing that some of the elements like $\sigma^2$ and $\mu_{1}$ affects the power 

![alt text](attachments/image-71.png)
![alt text](attachments/image-72.png)
- shows that $n$ also affects the power and how to calculate a specific $n$ that gives at least a certain value of power


![alt text](attachments/image-73.png)
![alt text](attachments/image-74.png)
- an excellent example showing how you make the assumption to determine the power under composite alternative

![alt text](attachments/image-75.png)
- a little confusion I had here was that it switch to start with $1 - \beta$ instead of $\beta$
  - to clarify, $\beta$ means: "do not reject $H_0$ when $H_1$ is true"
  - $1 - \beta$ means: "correctly rejecting $H_0$ when $H_1$ is true"
  - so the slide is correct

![alt text](attachments/image-76.png)
![alt text](attachments/image-77.png)
- summary slides with some sentences I don't entirely understand, I guess I would come back later

![alt text](attachments/image-78.png)
![alt text](attachments/image-79.png)
- message: when $\sigma$ is unknown, then simply uses the $t$ distribution again lmao. Just like previously how it was done during the CI on $\mu$

![alt text](attachments/image-80.png)
- just giving new names : t-statistic and t-value to the new things introduced lol 

![alt text](attachments/image-81.png)
- same as when $\sigma$ was known


![alt text](attachments/image-82.png)
- introduces the p-value, which I only have a very high-level idea of what it is:
  - I think it is the area to the right of the observed t-value

![alt text](attachments/image-84.png)
- don't entirely get it

![alt text](attachments/image-83.png)
- it seemed like the significance is not used at all, so it doesn't matter at all in determining whether to reject $H_0$ using p-value I guess
  - correction: the significance it indeed used for comparison with the p-value
  - because the rule here is that we reject $H_0$ for a p-value smaller than $\alpha$
![alt text](attachments/image-85.png)
- confusion:
  - why t < but not >:
    - probably because that is a one-sided less test


![alt text](attachments/image-86.png)
- don't get it. Come back later

![alt text](attachments/image-87.png)
- oh god now it comes to vari-fucking-ance

![alt text](attachments/image-88.png)
- oh here we go, chi-square with variance related stuff


# 3/5/2026 two-sample hypothesis testing
![alt text](attachments/image-90.png)
![alt text](attachments/image-89.png)
- now we want to compare some sampling results with other sampling result to give some more meaningful information
- here it comes the two sample hypothesis testing 
- I guess the base idea is the same but just a little bit more complicated

![alt text](attachments/image-91.png)
- confusion:
  - why is it '-' for the population mean but + for the variance part
  - I would ignore this detail and think about this later

![alt text](attachments/image-92.png)
- confusions:
  - why $\alpha/2$
  - why $\bar{X} - \bar{Y} - 0$
  - how did it solve $c$ 
- I think these can all be answers and linked in my mind once I have sufficient foundation on the previous lecture slides because I do recall seeing similar things
- so my plan is:
  - continue speedrunning the lecture progress up to almost finishing linear regression (lecture progress)
  - get all the high level ideas at minimum
  - go back to do exercises while re-reading the slides
  - get all the sufficient foundation and confidence 
  - come back to clear the confusion points marked

![alt text](attachments/image-93.png)
- so considering the testing when it comes to unknown variance and standard deviation
- we have two variance for 2 sampling pool 
- pick which one?
- the answer is combine them together with that formula above

![alt text](attachments/image-94.png)
- and lastly...we make use of t-distribution again 

![alt text](attachments/image-95.png)
- confusion:
  - why considering whether $0 \in \text{CI}$
    - perhaps because 0 is the result of $\mu_{X} - \mu_{Y} = 0$, it's like the $\mu_0$ in one-sample test maybe, not certain

- just forgot, one very important thing is that the variance are actually equal:

![alt text](attachments/image-96.png)
- earlier we had the question of whether choosing $\S^2_{n - 1, X}$ or $\S^2_{m - 1, Y}$ was because that is not population variance. They are sampling variance and could be different.
- So we decided to combine them (why combining like that would work?)

![alt text](attachments/image-97.png)
- now it comes to unknown variance
- the idea is that we don't use the combined one: $s^2_{p}$
- we use both sampling variance and it would approximately follows the t-distribution 
- and make sure that both sample sizes are $\geq 5$ to be accurate

![alt text](attachments/image-98.png)
![alt text](attachments/image-99.png)
- I don't get these two slides at all lule

# 4/5/2026 ANOVA
![alt text](attachments/image-100.png)
- introduce new vocabularies:
  - factor: categorical variable denoting the groups
  - dependent variable: the main numeric variables of interest 
  - level: possible values of factor

# 5/5/2026 ANOVA

![alt text](attachments/image-101.png)
- just a little recap on median

![alt text](attachments/image-102.png)
- quantiles (learnt in comp3711 homework) is a generalization of the median 

![alt text](attachments/image-103.png)
- just showing how `R` format and display the factor and levels for a certain pool of data?

![alt text](attachments/image-104.png)
- don't get the symbol below, like what the hell is that $\epsilon$ thingy lol 

![alt text](attachments/image-105.png)
- still don't know what is the meaning of the $\epsilon$ symbol here. But at least we know that it follows the normal distribution with mean = 0 and variance equals the all the variance of the normal distribution that all the random samples follow
  - I am just going to remember this information and see if keep reading would make sense
- "Not the alternative is not "all the means are different"" is a great call
  - I guess "not the alternative" means that we do not reject $H_0$? lol, so what does that mean lol?


![alt text](attachments/image-106.png)
- the definition of total variance ($SST$)

![alt text](attachments/image-107.png)
- the definition of between variance ($SS_{Treat}$)

![alt text](attachments/image-108.png)
- the definition of Within variance ($SSE$)

![alt text](attachments/image-109.png)
- don't know what the $\bar{y}_{i\cdot}$ is (oh does that mean the sample mean of group $i$? Just my small guess after reading future slides)

![alt text](attachments/image-110.png)
- give the ways to solve the problem: whether all the mean are the same
  - this can be tell if the F statistic (a test statistic) is large

![alt text](attachments/image-111.png)
- says that the denominator like $k - 1$, $n - k$ and their sum: $n - 1$ is called the degree of freedom (df)
- introduces a new theorem: $E(MS_{Treat}) = E(MSE) = E(MST) \quad \text{what does T stand for here} = \sigma^2$ somehow

![alt text](attachments/image-112.png)
- alright a new distribution called the F-distribution, that's it
- I don't get it of course but I can observe from the given graph that larger dfs give bell curved shape (approximate to normal distribution perhaps?)

![alt text](attachments/image-113.png)
- again there's a critical value: $F_{k - 1, n - k, \alpha}$ under the F-distribution. Just like t-distribution and standardized normal distribution, nice.
- and then it shows some examples of calculating the F and using R

![alt text](attachments/image-114.png)
- when the equal variance assumption does not hold, use Welch's variance ANOVA (hmm Welch seems familiar)

![alt text](attachments/image-115.png)
- bring up an important fact that when the group numbers $k = 2$, both tests can be used. So which one? let's read on

![alt text](attachments/image-116.png)
- where is even the calculation lmao

![alt text](attachments/image-117.png)
- ok so they are completely equivalent

![alt text](attachments/image-118.png)
- asks a very specific question (exactly what pair of mean is different) and I don't get the problem of performing two sample t test $k(k - 1)/2$ (how does this number come from) times
- and a very specific distribution and values form a CI to solve this problem
- and here it comes an example again

# 6/5/2026 linear regression
![alt text](attachments/image-119.png)
- very nicely set the "problem" of what linear regression is probably going to "solve". Which is, basically, probably, the relation between two variables in a specific context 

![alt text](attachments/image-120.png)
- introduce an example of a graphical analysis of the relation of 2 variables

![alt text](attachments/image-121.png)
- introduced new vocabularies:
  - regressand: $Y$, the dependent variable (why dependent? what does it do?)
  - regressor: $x$, the independent variable (why independent? what does it do?)
  - $\beta_1$ being the slope and $\beta_0$ being the intercept (what is an intercept?)
  - for this course, $Y$ is an r.v. but $x$ is not an r.v. for simplicity
  - how about that fucking $\epsilon_i$ still? what the hell is that I still don't know. Perhaps just another r.v. that happens to follow the normal distribution?
  - also what is $x$? fixed sample point values?

![alt text](attachments/image-122.png)
- so I guess the target is that we want to find the parameters $\beta_0, \beta_1$ (but why?)
  - and to find these 2 parameters, we use estimators 
  - and the idea seems to be that we draw a straight line such that the deviations of sample points from that straight line is the smallest
  - but I don't know what is $y_i$ in that equation involving the summation? Perhaps that is the sample points?
  - 

![alt text](attachments/image-123.png)
- this slides show what exactly the values of $\beta_1$ and $\beta_0$ would be
- what the hell is a $S_{xy}$ and what is a $S_{xx}$ ??

![alt text](attachments/image-124.png)
- don't get the proof at all, like what is a $\partial$ in the equations lol. It's literally my first time seeing all these
- then it shows some examples of using `R` to find that straight line for some scenarios

![alt text](attachments/image-125.png)
- now I really am starting to realize I don't get a single one of these variables or symbols. Like what does $Y_i$ even represent, what $x_i$ represents. All I know is that the $\beta$s are slope and intercept but I still don't know specifically what do they do, contribute in the equations

![alt text](attachments/image-126.png)
- basically showing and proofing how good and unbiased the estimators are

![alt text](attachments/image-127.png)
- information:
  - both estimators have the specific variance value shown in the picture
  - both estimators follow the normal distribution with their weird Var value and mean ($E()$)

![alt text](attachments/image-128.png)
- here it comes the CI as well LULE

![alt text](attachments/image-129.png)
- what is a $p(y_i)$ and why is $\sigma^2$ involved in the $f(\beta_0, \beta_1, \sigma^2)$ lol

![alt text](attachments/image-130.png)
- what the fuck is going on 
- why are we suddenly interested in $\hat{\sigma}_{MLE}^2$
- so turns out $\epsilon_i$ is the noise? what is a noise lol 

![alt text](attachments/image-131.png)
- just the CI i guess...

![alt text](attachments/image-132.png)
- things has become a little clearer with this example
- $x_i$ father's height seems to be an ordinary fixed sample point
- $Y_i$ is actually son's height, I remember they call $Y_i$ the dependent variable. Which yes, makes a lot of sense in this case
- testing whether $\beta_1 = 0$ or not also makes ton of sense since it's the variable (slope) attached to father's height $x$ the independent variable that the $Y$ (dependent variable) might depends on
- still don't know exactly what is $\epsilon$

# 8/5/2026 linear regression (cont.)
![alt text](attachments/image-133.png)
- so the answer of "which number gives the strength of the linear relation" is given on the slide
  - it's $|\beta_1|$

![alt text](attachments/image-134.png)
- but what is "the average" tho?
- it most probably means the average height of a specific group of data e.g. the sons height group or the father's height group
- but why is it equivalent to $\beta_1 < 1$? idk.
- and here it comes the examples

![alt text](attachments/image-135.png)
![alt text](attachments/image-136.png)
- no idea what that whole thing is
- but basically I guess to predict it's all about taking the expected value $E()$ and using estimators that's the big idea.

![alt text](attachments/image-137.png)
- no idea what the bottom two line means

![alt text](attachments/image-138.png)
- two new vocabs:
  - interpolation: $x_{new}$ is within the range of the samples
  - extrapolation: not within, even the linear relation may not hold

![alt text](attachments/image-139.png)
![alt text](attachments/image-140.png)
- yet another formula, this time on determining whether variable explains $y$ better


![alt text](attachments/image-141.png)
- no idea what the hell is going on 

![alt text](attachments/image-142.png)
![alt text](attachments/image-143.png)
- another new symbol lol, what?

![alt text](attachments/image-144.png)
- this example seems quite good, let's try this later


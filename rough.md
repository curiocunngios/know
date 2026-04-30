# description
- very rough notes that can be taken by text, no drawing needed
- usually for extraction of key ideas 

# 29//4/2026 math2411 estimators
![alt text](attachments/image.png)
- basically says that the motivation of estimators are to use sample data (data picked from the population) to **guess** the parameter (a *true* number that describes all the data, not just a group of data)

![alt text](attachments/image-1.png)
- confusion: 
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
- introduce $\overline{X}$, a random variable defined to be taking all the sample means.

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
- confusion:
  - why is cdf: $F(x;\theta)$ used here
  - what is the meaning of a $;$
  - why does $X ~$ i.e. "follows the distribution"?  
- this is more like a summary slide. There are several key ideas told in this slide that have been told earlier. I do have some small confusions written above. But I am going to delaying research them since I don't have much time right now. They seems trivial and I guess I would know them later after studying the later contents. By that time I might come back and put the answers here. Don't have to worry about these small confusions at the moment I guess.

![alt text](attachments/image-8.png)
- a very clean slide that tells the definition of **statistic** after having given the prior basic fundational ideas. The definition is that statistic is any function **of** r.v. or **random sample** more precisely. It does not depend on unknown parameter.


![alt text](attachments/image-9.png)
![alt text](attachments/image-10.png)
- the message is just that $E(\bar{X}) = \mu,\quad Var(\bar{X}) = \frac{\omega}{n}, \quad E(s_{n - 1}^2) = (\omega)^2$
- and for their implications, I don't know at this moment.


![alt text](attachments/image-11.png)
- tells you what biased or unbiased mean: measure of how far it is away from the true parameter: $\theta$ by taking the expected value.

![alt text](attachments/image-12.png)
- apart from how far away, we also want the estimator result to be concentrated around paramter

![alt text](attachments/image-13.png)
- so MSE is like a combined measurement of how good an estimator is

![alt text](attachments/image-14.png)
- a very confusing slide with high cognitive load
- several things:
  - the $T$ means transposing the vector to go from being row to column
  - the vector presentation here basically just says that there exists a list of possible parameters, that's it
  - picking one of the possibilities is called the estimation...that's it, I guess

![alt text](attachments/image-15.png)
- the ideas here are very clear, don't think I need to write in my own words lol

# 30/4/2026
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


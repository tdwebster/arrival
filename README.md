# Arrival
A C++ library for exploring the ARRIVAL problem. The Library was made as part of my PhD Thesis ``Variants of the Arrival Problem'' and allows one to simulate large runs on ARRIVAL graphs - as well as several new modifications introduced in my thesis and other work. Included are also some algorithms for deciding ARRIVAL.

ARRIVAL is a simple to describe decision problem defined by Dohrau et al.. In simplistic terms, it asks whether a train moving along a directed graph with n vertices will eventually reach its destination. At each vertex the train moves deterministically based on a given ordering over outgoing edges, taking the first edge, then the second and so on, as it revisits that vertex. This process is known as “switching” and can be viewed as a deterministic simulation of a random walk on the directed graph.

# References
The following is a (non-exhaustive) list of reference papers which contain the original definitions of Arrival, it's variants and key algorithms:

- [Arrival A Zero Player Graph Game in NP cap coNP - Dohrau et al.](http://arxiv.org/abs/1605.03546)
- [Reachability Switching Games - Fearnley et al.](https://lmcs.episciences.org/7392)
- [Arrival Next Stop CLS - Gartner et al.](https://doi.org/10.4230/LIPIcs.ICALP.2018.60)
- [A Subexponential Algorithm For Arrival - Gartner et al.](https://doi.org/10.4230/LIPIcs.ICALP.2021.69)
- [The Recursive Arrival Problem - Webster](https://arxiv.org/abs/2310.01004)
- [The Stochastic Arrival Problem - Webster](https://arxiv.org/abs/2211.12982)

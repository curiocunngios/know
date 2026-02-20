---
aliases:
  - Laws of Boolean Algebra
tags:
  - flashcard/active/ass
  - COMP2611
---

# Laws of boolean algebra:
|Name|AND form|OR form|
|----|--------|-------|
|Identity law|$1A = A$|$0 + A = A$|
|Null law (when the expression can be directly transformed to true or false)|$0A = 0$|$1 + A = 1$|
|Idempotent law (behaviour with itself)|$AA = A$|$A + A = A$|
|Inverse law (behaviour with inverse)|$A\overline{A} = 0$|$A + \overline{A} = 1$|
|Commutative law (can change ordering of terms)|$AB = BA$|$A + B = B + A$|
|Associative law (doesn't matter which operations is done first)|$(AB)C = A(BC)$|$(A + B) + C = A + (B + C)$|
|Distributive law (How AND/OR distributes just like multiplication)|$A + BC = (A + B)(A + C)$|$A(B + C) = AB + AC$|
|Absorption law (find which dominates)|$A(A + B) = A$|$A + AB = A$ (independent from $B$)|
|De Morgan's law (How negate sign distributes. Spoiler: it inverses AND/OR)|$\overline{AB} = \overline{A} + \overline{B}$|$\overline{(A + B)} = \overline{A} \cdot \overline{B}$|

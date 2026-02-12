---
aliases:
  - canonical form
tags:
  - flashcard/active/ass
  - COMP2611
---

# Canonical Form
- Any Boolean function can be expressed as
  - a sum (`OR`) of its 1-[minterms](./minterm.md)
  - a product (`AND`) of its 0-[maxterms](./maxterm.md)

- Any Boolean function that is expressed as a sum of minterms or as a product of maxterms is said to be in its **canonical form**

## Example
- Canonical form of majority vote:
  
| X   | Y   | Z   | D   (output) |
| --- | --- | --- | ------------ |
| 0   | 0   | 0   | 0            |
| 0   | 0   | 1   | 0            |
| 0   | 1   | 0   | 0            |
| 0   | 1   | 1   | 1            |
| 1   | 0   | 0   | 0            |
| 1   | 0   | 1   | 1            |
| 1   | 1   | 0   | 1            |
| 1   | 1   | 1   | 1            |

- Canonical form:
  - $D = m_3 + m_5 + m_6 + m_7 = \overline{A}BC + A\overline{B}C + AB\overline{C} + ABC$
  - $D = M_0M_1M_2M_3 = (A + B + C)(A + B + \overline{C})(A + \overline{B} + C)(\overline{A} + B + C)$
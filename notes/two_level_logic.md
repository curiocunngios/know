---
aliases:
  - two level logic 
tags:
  - flashcard/active/ass
  - COMP2611
---

# two level logic
- refers to any logic function that can be expressed in [canonical form](./canonical_form.md) as **two-level representation**:
  - every input is in either its original form or negated form
  - One level consists of [`AND` gates](./AND_gate.md) only
  - The other level consists of [`OR` gates](./OR_gate.md) only
Here is the content from the image converted into Markdown:

- **Sum-of-products (SOP) form:**
  - E.g., $E = (A \cdot B \cdot \overline{C}) + (A \cdot C \cdot \overline{B}) + (B \cdot C \cdot \overline{A})$
  - More commonly used than product-of-sums representation.

- **Product-of-sums (POS) form:**
  - E.g., $E = (\overline{A} + \overline{B} + C) \cdot (\overline{A} + \overline{C} + B) \cdot (\overline{B} + \overline{C} + A)$

- **Logic function with only `AND`, `OR`, `NOT` can express all possible truth tables**
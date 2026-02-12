---
aliases:
  - Example 3 person majority vote
tags:
  - flashcard/active/ass
  - COMP2611
---

# 3 person majority vote
- Problem: 3 person vote for a motion, if 2 or more says YES, the motion is approved
- ## Step 1: truth table

| X   | Y   | Z   | D   (output)|  
| --- | --- | --- | --- |
| 0   | 0   | 0   | 0   |
| 0   | 0   | 1   | 0   |
| 0   | 1   | 0   | 0   |
| 0   | 1   | 1   | 1   |
| 1   | 0   | 0   | 0   |
| 1   | 0   | 1   | 1   |
| 1   | 1   | 0   | 1   |
| 1   | 1   | 1   | 1   |
- ## Step 2: derive the logic function according to the truth table
  - here we use [Canonical Forms](./canonical_form.md) with [minterm](./minterm.md) and [maxterm](./maxterm.md)
---
aliases:
    - pipeline
    - pipeline processor
    - pipeline approach
tags:
    - flashcard/active/ass
    - COMP2611
---

# Pipeline processor
- idea:
  - for single-cycle datapath, many components are idle at a specific stage (e.g. fetch) 
  - the pipeline approach is to get the components working together at the same time if possible. For example, when on 2nd stage which is decoding, we can already start using the components for fetching instructions to start fetching another new instructions.
  - This maximizes the use of resources
![alt text](attachments/image-28.png)
- implementation:
  - It is implemented using "pipeline registers" to isolate the stages:
    - They are D-flip-flops that stores the information of states of different stages and supply them to the following stage.
    - For example, the pipeline register `IF/ID` provides information of fetched instructions and saved them there and supply them to the decode state so that the information of an entirely new next instruction fetched won't be supplied (isolation)
  - similarly, it saves and isolate the control signals
![alt text](attachments/image-29.png)

# Hazards
- the following could slow down the pipeline process:
  - **strutural**:
    - sometimes different stages uses the exact same resource e.g. memory unit, register file
    - ![alt text](attachments/image-30.png)
    - then, it causes a conflict
    - fix: divide the block `WB` into 2 halves, one for `WB` and the other halve for `ID` because the operation is pretty fast and no conflict after the split
  - **data** (dependency issue):
    - sometimes we need the data from the previous instruction, and that the "write back to register" stage is very late (the last stage)
    - so we likely need to wait for that instruction to finish
    - fix 1: **fowarding**:
      - the idea is that the exact data we need could be calculated way earlier in the ALU during the execution stage so we just forward that data to the next instructions immediately and not wait for the register overwrite
      - ![alt text](attachments/image-31.png)
      - this is very complicated and tedious to implement, involving more control signal and circuits 
      - still have to wait 1 more clock cycle
    - fix 2: **rearrange the instructions**
      - imagining while waiting for that 1 or 2 clock cycle, we "insert" and execute an instruction that later would have to be executed but does not have any data dependency issue
      - this is a software approach, a compiler optimization
  - **control**
    - don't know whether to branch or not
    - fix: do prediction and prefetch the predicted instructions
      - once the ALU result is out and if it is known that the prediction failed, flush the fetch instruction with nearly no cost 
 
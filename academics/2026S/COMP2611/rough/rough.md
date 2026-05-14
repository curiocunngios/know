# rough
- this is a rough document to "find the holes" on my current knowledge on comp2611 and fill them up later

# content after midterm but before ALU
- already typed them out

![alt text](attachments/image.png)
- no overflow when x and y are of different signs because they becomes a subtraction
- similar for subtraction, no overflow for same sign because they would be a pure subtraction.

![alt text](attachments/image-1.png)
- tricky stuff here. The instructions are not so honest. They sign-extend those unsigned operations (potentially make them bigger than what they originally were) 
- especially `sltiu`, they specifically perform unsigned comparison after sign extending the immediate, which is very weird
- most unsigned operation like `addu`, `subu` basically just don't trigger the overflow error or exception. That's it
- so basically the `u` instructions are mostly not unsigned operation. They don't treat the value in the registers as unsigned number but signed and the result are in 2's complement form as well. Most of what they do is that they don't give the overflow exception.

![alt text](attachments/image-2.png)
- this slide tells more about overflow (arithmetic calculation overflow) and mentioned about a special register called the EPC which I didn't know 

![alt text](attachments/image-3.png)
- didn't really know that the logical operations are mostly zero-extended (are there ways to get a sign-extended result of them? perhaps?)

![alt text](attachments/image-4.png)
- not entirely sure how was the circuit simplified and how did we get the XOR gates

![alt text](attachments/image-5.png)
![alt text](attachments/image-6.png)
- i can pretty much say I understand these two slides entirely but I am a strong feeling that they might be tested so I am marking it down here as revision

![alt text](attachments/image-7.png)
![alt text](attachments/image-8.png)
- final version where the multiplier is placed on the right half of the 64-bit product register.
![alt text](attachments/image-9.png)

![alt text](attachments/image-10.png)
- did not entirely understand what does "disagree" mean. I guess it mean that they are not the same

# processor 2 (pipeline approach)
![alt text](attachments/image-11.png)
- did not know the speed up logic very well. Why does the speed up equal to the number of stages.

![alt text](attachments/image-12.png)
- do not understand these bullet points very well.

![alt text](attachments/image-13.png)
- did not know the short term very well.

![alt text](attachments/image-14.png)
- no control signal at stage 2?! Don't you need the RegDst to choose whether to repeat `$rt` (for I type) right before decoding?

![alt text](attachments/image-15.png)

![alt text](attachments/image-16.png)
- ok I get it now. It is because unlike the single cycle datapath, the destination register is provided to the register file from the **WB pipeline register**. Not right after the decoding stage.
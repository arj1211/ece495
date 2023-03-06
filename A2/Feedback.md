Overall Feedback
loss_3 (Backward pass: compute gradients) in the .py file does not contain necessary explanations in comments on how the gradients are calculated (-5 * 0.15)


Except '# ReLU derivative is step-function'

Overall Feedback:
'''
5: Best
4: Mostly correct

3: Somewhat correct, moderate understanding

2: mostly incorrect, justifications, false understanding
1: mostly incorrect, no understanding

0: no submission
'''
----------------------------------------------------------------
Total: out of 50 -> transferred to 5.0
**x** means x/50 or 0.x/5

.IPYNB
    **4** 
    # Forward pass: compute scores 
        3.68e-08 # scores diff: < 1e-7 

    **5** 
    # Forward pass: compute loss
        1.79e-13 # loss diff: < 1e-12

    **5** 
    # Backward pass
        e-9, e-9, e-9, e-11
        # Max relative scores: < 1e-8 # (-9, -11) [4 of them]

.PY 
(Half of each mark is for comment and the other half is for the code itself)

loss_1
    **3**
    ## FIRST WEIGHT

    **3**
    ## RELU 

    **3**
    ## SECOND WEIGHT 

loss_2
    **3**
    ## CE LOSS 

    **3**
    ## REG LOSS 

    ## SUM 

loss_3 
(It should be explained in the comments how the gradient is calculated from a mathematical perspective)
    # Score gradient 
    
    **3**
    # W2 gradient (w/o reg term) 
    
    **3**
    # b2 gradient 
    
    **3**
    # RELU gradient 
    
    **3**
    # W1 gradient (w/o reg term) 
    
    **3**
    # b1 gradient 
    
    **6**
    # Regularizations gradients 

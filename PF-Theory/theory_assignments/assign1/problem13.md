# Problem 13: The general N-M size die hard jug problem

Design a solution to solve the general form M-NL jugs of the above problem.
So instead of having just 3-5L jugs you can be given 3-9L jugs or 7-9L jugs. Can you extract any number of liters of water less than the larger jug or only some quantities. Is there a formula for this? What amounts of water can be extracted from M-NL jugs?

- the general process is to first make sure if the smaller jug is not divisible in size to the larger jug
- Otherwise the smaller jug will perfectly fill the larger and not create an `offset`
- The larger jug will be repeatedly filled with the larger jug until condition `4 ltr remaining` is not met, the larger jug will be emptied it has no free space left
- the `offset` created in the smaller jug will be used to utilized to reach the goal, as it will disrupt the symmetry of the repeated process, eventually the offset will 4 and the goal is attained


```python

# ---------- ATTEMPT IN SOLVING IN PYTHON ----------
# n IS GREATER THAN m ALWAYS
n = 8
m = 3
r = 4 # desired water level MUST BE B/W n & m
i=0
jug1 = n # space available in jug
jug2 = m # space available in jug

# end goal is water level = 4 in any container
# this can be represented by n-4 where n is the space available in any container
# in context of space available

# do not use // or % as looping will be used



# all this can only be performed if n & m are not divisble
if m%n!=0 and n>m:
    # 
    while jug1!=(n-r) and jug1>0:
        jug1 = jug1-jug2 # space from jug1 is taken away with jug2
        print("1 jug1: ",jug1)
        print("1 jug2: ",jug2)
        i = i + 1 # to keep count
    
    
    # now jug1 will be in negatives but -jug1<jug2 
    # place overflow in jug2
    jug2 = jug2 + jug1
    print("2 jug1: ",jug1)
    print("2 jug2: ",jug2)
    i+=1
    
    # empty jug1
    jug1 = n
    i+=1
    print("3 jug1: ",jug1)
    print("3 jug2: ",jug2)
    
    jug1 = jug1-jug2 # place the offsetted water in jug1
    i+=1
    print("4 jug1: ",jug1)
    print("4 jug2: ",jug2)    
    
    while jug1!=(n-r) and jug1>0:
        jug1 = jug1-jug2 # space from jug1 is taken away with jug2
        i = i + 1 # to keep count
        # now jug2 is empty
        print("5 jug1: ",jug1)
        print("5 jug2: ",jug2)

print("6 jug1: ",jug1)
print("6 jug2: ",jug2)

if n-jug1 == r or n-jug2 == r:
    print("success")
else:
    print("not success")

print("steps repeated: ",i)



```
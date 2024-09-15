# Problem 12: Die Hard 3: Defuse the bomb… Quick

You've got to defuse a bomb by placing exactly 4 liters of water on a sensor. And you have to be quick! The problem is, you only have a 5L jug and a 3L jug on hand!
See the video clip here: <https://youtu.be/BVtQNK_ZUJg>
You have an unlimited water source, and if needed you can also empty the water in the jugs to get rid of it.
How could 4 liters be measured?

## LOGIC

- fill 5L_jug with 3L_jug 2 times,
- 5L_jug is full and 1L is remaining in 3L_jug
- empty 5L_jug
- pour 1L in 5L_jug from 3L_jug
- fill 3L_jug
- empty it in 5L_jug
- now 5L_jug has 4L

3+3 = 6
6-5 = 1
1+3 = 4

operations on 5L_jug: +3, -3, +5, -5
operations on 3L_jug: +3, -3

```pseudocode

5L_jug = 0
3L_jug = 0
source = infinite

3L_jug = 3

//5L_jug =0,3L_jug=3
5L_jug = 5L_jug+3L_jug

//5L_jug =3,3L_jug=3
5L_jug = 5L_jug+3L_jug

//5L_jug =5,3L_jug=1
//5L_jug =0,3L_jug=1

5L_jug = 0

```

## some logic in python

```python
#

n = 5
m = 3
i=0
jug1 = n # space available in jug
jug2 = m # space available in jug

# end goal is water level = 4 in any container
# this can be represented by n-4 where n is the space available in any container
# in context of space available
# do not use // or % as looping will be used


# all this can only be performed if n & m are not divisble
if m%n!=0: 
    while jug1!=(n-4) and jug1>0:
        jug1 = jug1-jug2 # space from jug1 is taken away with jug2
        print(jug1)
        print(jug2)
        i = i + 1 # to keep count
    
    # now jug1 will be in negatives but -jug1<jug2 
    # place overflow in jug2
    
    jug2 = jug2 + jug1
    print(jug1)
    print(jug2)
    i+=1
    
    # empty jug1
    jug1 = n
    i+=1
    
    jug1 = jug1-jug2 # place the offsetted water in jug1
    i+=1
    
    while jug1!=(n-4) and jug1>0:
        jug1 = jug1-jug2 # space from jug1 is taken away with jug2
        i = i + 1 # to keep count

print(i)

'''
fiveL_jug = fiveL_jug % threeL_jug # filled once space left is 2
print("five1: ", fiveL_jug) 
print("three1: ", threeL_jug)

fiveL_jug = fiveL_jug - threeL_jug # filled again, the jug has overflown and space left is considered -1
print("five2: ", fiveL_jug)
print("three2: ", threeL_jug)

if fiveL_jug<0:
    threeL_jug = threeL_jug + fiveL_jug # over flown space is given to three now three has space 2
    fiveL_jug = n # jug 5 is now considered empty
    print("five3: ", fiveL_jug)
    print("three3: ", threeL_jug)

fiveL_jug = fiveL_jug - threeL_jug # jug 3 emptied in jug 5 now jug 5 has space 4
print("five4: ", fiveL_jug)
print("three4: ", threeL_jug)

fiveL_jug = fiveL_jug // threeL_jug #now jug 3 is emptied

if fiveL_jug == n - 4:
    print("five5: ", fiveL_jug)
''' 


```
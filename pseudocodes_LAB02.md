
## Exponentials with multiplication
<img src="https://github.com/user-attachments/assets/b1848026-cae1-40de-b8f9-a94917389702" width="500" />

## largest of 3
``` python
input num[1], num[2], num[3]
max = 0


for i = 1 to 3
	if num[i] > max
		max = num[i]
```

``` python
# largest of 3
num = [0,0,0,0]
for i in range(0,3):
    num[i] = int(input('enter num'))

max = 0


for i in range(0,3):
	if num[i] > max:
		max = num[i]

print(max)
```



## addition of 3 without '+'

```
input num[1], num[2], num[3]

res = num[1] -- num[2] -- num[3]
```

>Implement an algorithm for determining if an Nth is a divisor of an n Number (i.e. 2 is a divisor of 6). If so, determine if it’s an even number or odd number as well.

```
input m,n
if m % n == 0:
	print('divisor')
	if n % 2 == 0:
		print('even')
	else:
		print('odd')
else:
	print('not divisor')
```


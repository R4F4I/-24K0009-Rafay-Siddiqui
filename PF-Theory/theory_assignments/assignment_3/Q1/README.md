# 2nd Smallest

![alt text](image.png)
### Program Description
This C program finds the second smallest element in a predefined array of integers. Given an array of elements, the program first identifies the smallest element, then finds the smallest value greater than that element, which is the second smallest.

### Program Logic

1. **Array Initialization**: The array `arr` is initialized with a set of integers.
2. **Smallest and Second Smallest Variables**: Two integer variables, `j` and `k`, are initialized with a large value (`1000`) to store the smallest and second smallest elements.
3. **Finding the Smallest Element**: The first loop iterates over the array, assigning `j` with the smallest value found.
4. **Finding the Second Smallest Element**: The second loop assigns `k` with the smallest value greater than `j`, which represents the second smallest element.
5. **Output**: The second smallest element is printed.

### Challenges Faced
One main challenge was ensuring the program correctly updates the smallest and second smallest values within two separate loops. This structure required careful initial value setting for `j` and `k`, ensuring they get replaced correctly by array elements. Additionally, the code needed adjustments to handle cases where the array lacks a distinct second smallest element, which could lead to incorrect results if not managed properly. This required robust conditional logic to avoid misinterpretations of the array values.
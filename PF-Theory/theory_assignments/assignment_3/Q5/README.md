# Histogram Generation Program

This program provides a visual representation of a set of integer values in the form of both horizontal and vertical histograms. The user enters values, and the program generates histograms using asterisks (`*`) to denote the size of each value.

### Features

1. **Input Handling**: 
   - The program accepts a series of integer values and counts the entries to prepare for histogram generation.

2. **Horizontal Histogram**:
   - Each integer value is represented by a row with asterisks equivalent to the integer’s value. This provides a straightforward horizontal representation.

3. **Vertical Histogram**:
   - The vertical histogram starts by displaying the highest value at the top, aligning all columns to create an inverted effect, with the value at each position represented by asterisks in a column format.

### Program Workflow

1. **Input Collection**:
   - The user is prompted to enter the number of values, followed by each integer in the array.

2. **Horizontal Histogram Generation**:
   - The program iterates through each value, printing a corresponding line of asterisks to reflect the magnitude of each integer.

3. **Vertical Histogram Generation**:
   - The program finds the maximum value to determine the histogram’s height.
   - It then prints each level from top to bottom, checking each integer’s value to decide whether to place an asterisk in that position or leave it blank.

### Example Output

For an input of `values[] = {7, 5, 8, 2, 6}`, the output is as follows:

**Histograms**:

![Vertical Histogram Example](image-1.png)

### Challenges Faced

Creating the vertical histogram was challenging due to the need to handle alignment and spacing dynamically based on the maximum value. Ensuring each column aligned correctly, regardless of the value, required carefully managing spaces to retain the correct format, especially when multiple values varied significantly.
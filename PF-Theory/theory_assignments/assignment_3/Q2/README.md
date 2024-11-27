## Character Frequency Analysis for Marketing Slogans

### Program Overview
The goal of this program is to analyze character frequency in a set of promotional slogans to help a beverage company optimize their marketing campaigns. By examining the frequency of each character in the slogans, the company can identify trends in language usage, which may inform their marketing strategies to target specific demographics more effectively. 

### Input and Expected Output

**Input**: A set of promotional slogans, such as:
- "buy now"
- "save big"
- "limited offer"

**Expected Output**: A frequency count of each character in the slogans, displayed as:
- For `"buy now"`: `{ 'b': 1, 'u': 1, 'y': 1, ' ': 1, 'n': 1, 'o': 1, 'w': 1 }`
- For `"save big"`: `{ 's': 1, 'a': 1, 'v': 1, 'e': 1, ' ': 1, 'b': 1, 'i': 1, 'g': 1 }`
- For `"limited offer"`: `{ 'l': 1, 'i': 1, 'm': 1, 't': 1, 'e': 2, 'd': 1, ' ': 1, 'o': 1, 'f': 1, 'r': 1 }`

### Logic Explanation
The program follows these steps:

1. **Initialize Frequency Array**: A frequency array of size 128 is used to store the count of each ASCII character.
2. **Character Analysis Loop**: For each slogan, the program converts each character to its ASCII value, which is then used as an index in the frequency array. The value at that index is incremented to reflect the frequency of that character.
3. **Output Results**: Only characters with non-zero counts are printed for each slogan to show the frequency of each unique character.

### Challenges Faced
One of the primary challenges was handling the ASCII character set efficiently. The program uses an array of 128 elements, corresponding to ASCII values, to track character frequencies, which required careful setup to ensure accurate indexing. Managing special characters and spaces alongside letters required precise handling to prevent miscounts or incorrect array access. Additionally, achieving a clean output format for each slogan’s frequency table involved formatting adjustments for readability.

![alt text](image.png)
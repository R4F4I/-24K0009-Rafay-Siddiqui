#include <stdio.h>
#include <string.h>

void reverse_string(char string [],int start,int end){
    int n = strlen(string);
    char temp;
    if (start >= end) {
        return;
    }
    
    temp = string[start];
    string[start] = string[end];
    string[end] = temp;
    
    // Recursively reverse the substring excluding the swapped characters
    reverse_string(string, start + 1, end - 1);
}

void main(){
    char string[100];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';
    int n = strlen(string);
    reverse_string(string,0,n);
    printf("Reversed string: %s\n", string);
}

/*
#include <stdio.h>
#include <string.h>

// Function to reverse a string recursively
void reverse_string(char str[], int start, int end) {
    // Base case: if start is greater than or equal to end, return
    if (start >= end) {
        return;
    }
    
    // Swap characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    // Recursively reverse the substring excluding the swapped characters
    reverse_string(str, start + 1, end - 1);
}

int main() {
    char str[100];  // To store the input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input string (including spaces)
    
    // Remove newline character if it's read by fgets
    str[strcspn(str, "\n")] = '\0'; 

    // Get the length of the string
    int length = strlen(str);

    // Reverse the string using recursion
    reverse_string(str, 0, length - 1);

    // Print the reversed string
    printf("Reversed string: %s\n", str);
    
    return 0;
}

*/
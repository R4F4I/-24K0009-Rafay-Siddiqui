/*
? | You are working for a text-processing company that optimizes storage for large amounts of written
? | data. The company has identified a recurring issue: words in documents are often unnecessarily
? | lengthy due to repeated consecutive characters. Your task is to minimize these words by reducing
? | consecutive duplicate characters to a single instance of the character.
? | Operations:
? | Compress a Word: Write a function that takes a string (a word) as input and returns a minimized
? | version of the word, where all consecutive duplicate letters are reduced to one.
? | Multiple Word Compression: You will then apply this function to a list of words and return the
? | minimized version for each word.
? | Add a feature to calculate how many characters were removed during the compression process.
? | Input: words = [“booooook”, “coooool”, “heeeey”]
? | Output: [“bok”, “col”, “hey”]

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

//header
#include <stdio.h>

// if a string has a recurring character AKA a char which is same as the prev. char, do not pass it and increment the char removed count
void perform_compression(char string[]){
    char curr_char='a';
    char prev_char='a';
    int i=0,j=0;
    

    while (curr_char != '\0')
    {
        curr_char = string[i+1];
        prev_char = string[i];
        if (curr_char == prev_char){
            j++;
        } else {
            printf("%c",prev_char);
        }
        i++;
    }
    printf("\ncharacter removed: %d\n",j);
}

//start main function
int main (){
    
    // declaration
    int i,j;
    char words[][100] = {"booooook", "coooool", "heeeey","haaaaaaaaaaaahhhhhhhaaaaaaa"};
    int n = sizeof(words) / sizeof(words[0]);
    

    for (i = 0; i < n; i++){
        perform_compression(words[i]);
    }
    


    return 0;

} // end main
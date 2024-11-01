/*

? |You are working as a software engineer at a company that manages a large database of customer
? |transactions. Each transaction is stored as a string that contains encoded information about the
? |customer. However, some transactions may have been duplicated due to system errors, and these
? |duplicates appear in scrambled order. Your task is to identify and group these "scrambled"
? |transactions together, as they represent the same customer activity. Two transactions are considered
? |scrambled if they contain the same letters but in a different order (anagrams). You are provided with
? |a list of transaction strings. You need to write a program that groups these scrambled transactions
? |into separate categories, returning each group of related transactions together.
? |Example
? |Input transactions = ["eat", "tea", "tan", "ate", "nat", "bat"]
? |Expected Output: [['bat'], ['nat', 'tan'], ['ate', 'eat', 'tea']]

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

/*
MAIN IDEA

* check each string in the array with all strings after it
* we will check for whether the next string will have the same set of char as it does
* to check for whether two strings have the same number of char we will use [a function] => anagram_checker()
* anagram_checker():
    `> one way is sort all char in both strings, then compare them by index
    `> if they differ they are not anagrams
* the anagram_checker() will return a 1 for anagram or 0 otherwise
* another array of size n will store these checks //check_array
* after the end of the array of strings is reached, reset the check_array
*/


#include <stdio.h>
#include <string.h>

void sort_arr(char string[],int m){
    int i=0,j=0;
    char temp;
    for (i = 0; i < m-1; i++){
        for (j = 0; j < m-i-1; j++){
            if ((int)string[j]>(int)string[j+1]){
                temp = string[j];
                string[j] = string[j+1];
                string[j+1] = temp;
            }
        }
    }
}

// checks whether the strings are anagrams by first sorting them then comparing them
int anagram_checker(char string_1[],char string_2[],int len_1,int len_2){

    int is_anagram = 1;
    int i;
    char temp_str[20];
    char temp_str_2[20];

    // to prevent the strings from being permanently changed in main
    strcpy(temp_str,string_1);
    strcpy(temp_str_2,string_2);


    if (len_1!=len_2){
        is_anagram = 0;
    } else{
        sort_arr(temp_str,len_1);
        sort_arr(temp_str_2,len_2);

        for (i = 0; i < len_1; i++){
            if (temp_str[i]!=temp_str_2[i]){
                is_anagram = 0;
            }
        }
    }
    return is_anagram;
}

int str_len(char string[]){
    int i=0;
    while (string[i]!='\0'){i++;}
    return i;
}

int main(){

    char arr[][20] = {"eat", "tea", "tan", "ate", "tab", "nat", "bat"};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i,j,k;
    int anagram_stamp[20] = {0};
    char temp_arr_val[20]; // to temporarily hold value as anagram_checker will alter the strings
    
    printf("[");
    for (i = 0; i < n; i++)
    {
        // skip if anagram_stamp is 1
        if (anagram_stamp[i]) continue;
        printf("[");
        for (j = 0; j < n; j++)
        {
            // if anagram_stamp[j] == 0 and  anagram_checker() ==1
            
            if (!anagram_stamp[j] && anagram_checker(arr[i],arr[j],str_len(arr[i]),str_len(arr[j])))
            {
                printf(",\'%s\' ",arr[j]);
                anagram_stamp[j] = 1;
            }
        }
        printf("],");

    }
     printf("]");
    return 0;
}

/*
? | A popular beverage company is looking to optimize their marketing campaigns by understanding the
? | frequency of characters used in their promotional slogans. They believe that analyzing these patterns
? | can help them tailor their messaging to specific demographics and improve brand recall. You've been
? | tasked with creating a C code function to analyze the character frequency in a list of slogans provided
? | by the marketing team. This analysis will help identify the most common letters used in their slogans,
? | which can inform future marketing strategies.
? | Input:
? | slogans = ["buy now", "save big", "limited offer"]
? | Expected Output:
? | - For "buy now": {'b': 1, 'u': 1, 'y': 1, ' ': 1, 'n': 1, 'o': 1, 'w': 1}
? | - For "save big": {'s': 1, 'a': 1, 'v': 1, 'e': 1, ' ': 1, 'b': 1, 'i': 1, 'g': 1}
? | - For "limited offer": {'l': 1, 'i': 1, 'm': 1, 't': 1, 'e': 2, 'd': 1, ' ': 1, 'o': 1, 'f': 1, 'r': 1}

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

//header
#include <stdio.h>

/*
LOGIC
take one string from array
create an array of size 128
use loop to extract char
convert that char into ascii val, use that ascii val to increment freq value at that index e.g: 'a' -> freq[97]++


afterwards print all of it
*/

// analyze frequency of char in a given string
void analyze_char_freq(char slogan[]){

    int freq[128] = {0}; // Initialize all counts to 0
    // above array stores freq of each char,
    

    int i;
    // loop to analyze individual char in phrase
    for (i = 0; slogan[i]!='\0'; i++)
    {
        
       freq[(int)slogan[i]]++;
       // (int)slogan[i] converts the present char into an ascii value
       // if above array encounters 'a' it ascii = 97, hence now freq[97]=1
       // if it encounters another 'a' freq[97]=2
       // then we will only print freq[i]>0
    }

    printf("For \"%s\":\n", slogan);
    for (int i = 0; i < 128; i++) {
        if (freq[i] > 0) {
            // i is an int however the format specifier '%c' will take as an ascii char and output respective ascii char
            printf("'%c': %d\n", i, freq[i]);
        }
    }
    printf("\n");
    
} // end analyze_char_freq



//start main function
int main (){
    
    // declaration
    //             V``dont change this 
    char slogans[][20] = {"buy now", "save big", "limited offer", " free prizes"};
    int n = sizeof(slogans) / sizeof(slogans[0]);
    int i;
    

    // processing

    // main loop to loop through 'slogans' array
    for ( i = 0; i < n; i++){
        analyze_char_freq(slogans[i]);
    }


    return 0;

} // end main
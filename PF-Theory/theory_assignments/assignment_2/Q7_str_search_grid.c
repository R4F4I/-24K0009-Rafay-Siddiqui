/*

?| One of the master coders designed a subscript block that stores random characters in a
?| multidimensional array. You are asked to design a program that will find a given string in a
?| multidimensional array of characters. The search for characters can be present and operational from
?| left to right and top to down only. The program should create a 6 x 5 2D array and populate it with
?| random alphabet characters. After that, the program should print it in a tabular form as shown below.
?| Search the user-entered string in the 2D array, if it is present then add a point to the score, if it is not
?| available then subtract one. Print the score at every input. The program stops asking and re-populates
?| the 2D array with new random characters when the user enters “END” as the string.

?| [NOTE: After generating random numbers, the last row should have your student ID’s last four digits]

    E D D F R
    A F V A Q
    T E B S T
    L J G T T
    1 2 3 4 Q

Search Str= "FAST"
Output:
FAST is present Score 1
Search Str= "EAT"
EAT is present Score 2
Search Str= "GREAT"
GREAT is not present Score 1


* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A



*/

#include <stdio.h>
#include <string.h>
// #include <stdlib.h>
// #include <time.h>



int main({
    // char grid[5][5] = {' '};
    // for (i = 0; i < 5; i++)
    // {
    //     for (j = 0; j < 4; j++)
    //     {
    //         srand(time(0));
    //         number1 = (rand()%6)+1;
    //     }
        
    // }
    


    char grid[5][5] = {
        {'E', 'D', 'D', 'F', 'R'},
        {'A', 'F', 'V', 'A', 'Q'},
        {'T', 'E', 'B', 'S', 'T'},
        {'L', 'J', 'G', 'T', 'T'},
        {'0', '0', '0', '9', 'K'}
    }



    int score = 0;
    int first_val, sec_val;

    char player_input[10] = {' '};

    // ! play game
    while (player_input!="END")
    {
        printf("Enter a string to find: ");
        scanf("%s",&player_input);

        // find first instance of the input's first char

        for (i = 0; i < 5; i++){
            for (j = 0; j < 4; j++){
                if (player_input[0]==grid[i][j]){
                    // if it is found break out the loop 
                    first_val = i;
                    sec_val = j;
                }
            }
        }

        // now try to circle around the found val to check for second char

        

    }
    


    return 0;
})

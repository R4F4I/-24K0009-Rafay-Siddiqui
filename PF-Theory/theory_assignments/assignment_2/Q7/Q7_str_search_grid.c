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

/*
controls for the game

* print grid
* generate a new grid
* search for string through grid
    `> to implement this, 
    `> first go through all rows 
    `> convert the row into a string and search through this string
* 

*/



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 6
#define COLS 5

void generate_grid(char array[ROWS][COLS],char st_id[]){
    int i,j;
    // add the rand val only to the first rows-1 values
    for (i = 0; i < ROWS-1; i++){
        for (j = 0; j < COLS; j++){
            array[i][j] = 'A'+ (rand() % 26);
        }
        
    }
    // add the student id numbers
    for (j = 0; j < COLS; j++)
    {
        array[ROWS-1][j] = st_id[j];
    }
}

void print_array(char grid[ROWS][COLS]){
    int i,j;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%c ",grid[i][j]);
    }
        printf("\n");
    }
}

int search_string(char grid[ROWS][COLS], char input[]){
    int i,j,k,match=1;
    int n = strlen(input);
    //printf("\nstrlen: %d",n);

    // check each row

    // i,j loops traverse trough the entire grid to find the first value of input
    for (i = 0; i < ROWS; i++){
        for (j = 0; j <= COLS-n; j++){
            // k loop then checks through the remaining characters of the grid and the input string
            for (k = 0; k < n; k++){
                if (grid[i][j+k]!=input[k]){
                    break;
                }
            }
            if(n==k){
                return 1; // string found
            }
        }
    }
    // check each column
    for (i = 0; i < COLS; i++){
        for (j = 0; j < ROWS-n; j++){
            for (k = 0; k < n; k++){
                // j is in the y index because we checking the columns which are the y index
                if (grid[j+k][i]!=input[k]){
                    break;
                }
            }
            if(n==k){
                return 1; // string found
            }
        }
    }
    return 0; // string not found
}




int main(){

    char grid[ROWS][COLS];
    char st_id[5] = {'0', '0', '0', '9', 'K'};


    int score = 0;

    char player_input[50];

    srand(time(NULL));

    // generate array
    generate_grid(grid, st_id);

    // ! play game
    while (strcmp(player_input,"END")) {
        // show array
        print_array(grid);
        printf("\nEnter a string to find: ");
        scanf("%s",player_input);

        if (search_string(grid,player_input)){
            score++;
            printf("%s is present. Score: %d\n", player_input, score);
        } else if (!strcmp(player_input,"END")){
            break;
        }
        else{
            score--;
            printf("%s is not present. Score: %d\n", player_input, score);
        }
        

    }
    
	printf("Final score: %d",score);

    return 0;
}

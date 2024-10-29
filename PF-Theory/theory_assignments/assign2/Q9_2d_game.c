/*

? | Write a C program to simulate a simple grid-based adventure game using a 2D array.
? | Game Description:
? | - The game consists of a 5x5 grid.
? | - Each cell can contain:
? |     - An empty space (' ').
? |     - An item ('I') that the player can collect.
? |     - An obstacle ('X') that the player cannot pass through.
? |     - The player's position, represented by 'P'.


? | Example Input:
? | char grid[5][5] = {
? |     {' ', ' ', 'I', 'X', ' '},
? |     {' ', 'X', ' ', ' ', ' '},
? |     {'I', ' ', 'X', 'X', ' '},
? |     {' ', ' ', ' ', 'I', 'X'},
? |     {' ', 'X', ' ', ' ', 'P'}
? | };


? | Requirements:
? | 1. Display the grid and prompt the player for a move (W: up, S: down, A: left, D: right, Q: quit).
? | 2. Update the player's position based on valid moves.
? | 3. Collect items when the player moves to a cell containing an item (remove item from grid).
? | 4. Prevent movement into obstacles ('X').
? | 5. Continue until the player chooses to quit.
? | 6. The grid is fixed at 5x5.
? | 7. Only valid moves are allowed.
? | 8. Handle invalid input gracefully.


* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/


/*
a struct to handle position of all entities
an arr of pos struct to handle all obstacles 'X'
an arr of pos struct to handle all items 'I'
*/

#include <stdio.h>

typedef struct pos{
    int x;
    int y;
} position;

void print_scene(char grid[]){
    
    

}

int main(){


    char grid[5][5] = {
        {' ', ' ', 'I', 'X', ' '},
        {' ', 'X', ' ', ' ', ' '},
        {'I', ' ', 'X', 'X', ' '},
        {' ', ' ', ' ', 'I', 'X'},
        {' ', 'X', ' ', ' ', 'P'}
    };

    position player_pos;
    position obstacle_pos[6];
    position item_pos[2];
    
    char obstacle = 'X';
    char item = 'I';
    char player = 'P';
    
    int score = 0;


    int i,j;

    for (i = 0; i < 7; i++)
    {
        printf("# ");
    }
    printf("\n");
    
    for (i = 0; i < 5; i++)
    {
        printf("# ");
        for (j = 0; j < 5; j++)
        {
            printf("%c ",grid[i][j]);
        }
        printf("#");
        printf("\n");
        
    } 

    for (i = 0; i < 7; i++)
    {
        printf("# ");
    }

}
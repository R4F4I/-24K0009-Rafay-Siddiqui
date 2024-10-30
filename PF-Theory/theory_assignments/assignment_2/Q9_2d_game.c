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

// contains entity detail
typedef struct{
    //char sprite;
    int x;
    int y;
} entity;


void print_horizontal_border(){
    int i;
    for (i = 0; i < 7; i++){
        printf("# ");
    }
    printf("\n");
}


void print_arr(char grid[]){
    int j;
    for (j = 0; j < 5; j++){
        printf("%c ",grid[j]);
    }
}

/*the input is the grid, we will automatically determine where all the obstacles and items are, 
and the player position from the given grid
 */ 


int main(){
    int i,j,k=0,l;

    /*
    ! WARNING

    GRID OF ARRAYS BEHAVE WEIRDLY

    for some reason player_move[0] is y-axis and
                    player_move[1] is x-axis
 
    */

    char grid[5][5] = {
    //    0    1    2    3    4
        {' ', ' ', 'I', 'X', ' '}, // 0
        {' ', 'X', ' ', ' ', ' '}, // 1
        {'I', ' ', 'X', 'X', ' '}, // 2
        {' ', ' ', ' ', 'I', 'X'}, // 3
        {' ', 'X', ' ', ' ', 'P'}  // 4
    };
    entity obstacle[6];
    entity item[3];
    entity player;

    char player_input; // supposed to be 'w' 'a' 's' 'd'

    int score = 0;
    // move to be applied to the player
    int player_move[2] = {0};
    int next_move[2] = {0};

    //! DEFINE ENTITIES
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (grid[i][j]=='X')
            {
                obstacle[k].x = i;
                obstacle[k].y = j;
                k++;
            } 
            else if (grid[i][j]=='I')
            {
                item[l].x = i;
                item[l].y = j;
                l++;
            } else if (grid[i][j]=='P')
            {
                player.x = i;
                player.y = j;
            }
        }
    }


    //! RUN GAME

    printf("\n\n<--- Score: %d --->\n\n",score);
    //* ===PRINT SCENE===
    print_horizontal_border();
    for (i = 0; i < 5; i++)
    {
        printf("# ");
        // abstracted printing of array
        print_arr(grid[i]);
        printf("#\n");
    } 
    print_horizontal_border();

    // the game will end when the score is 3
    while (score != 3 && player_input!= 'q') 
    {
        //* ===GET INPUT===
        
        printf("\n\nEnter a position(or q to quit): ");
        scanf("%c",&player_input);
        getchar();


        //* ===APPLY INPUT===
        switch (player_input)
        {
        case 'w':
            // decrease the y val, as y-val increase from top to bottom
            // up
            player_move[0] = -1;  // y-axis   // decreased
            player_move[1] = 0;   // x-axis
            break;
        case 'a':
            // left
            player_move[0] =  0;   // y-axis
            player_move[1] =  -1;  // x-axis  // decreased
            break;
        case 's':
            // down
            player_move[0] =  1;   // y-axis  // increased
            player_move[1] =  0;   // x-axis
            break;
        case 'd':
             // right
            player_move[0] =  0;   // y-axis
            player_move[1] =  1;   // x-axis  // increased
            break;
        case 'q':
            break;
        
        default:
            printf("WRONG MOVE\n");
            break;
        }

        // first create the move, next_move
        // verify next_move, if it is a legal move (not out of bounds, not 'X') then we can apply it

        next_move[0] = player.x + player_move[0];
        next_move[1] = player.y + player_move[1];
        //printf("%d %d  ",next_move[0],next_move[1]);

        if (grid[next_move[0]][next_move[1]]=='X'|| 
                                  next_move[0]>4 || 
                                  next_move[1]>4 || 
                                  next_move[0]<0 || 
                                  next_move[1]<0){
            printf("\nWRONG MOVE!\n");
        } else
        {   
            grid[player.x][player.y] = ' '; // remove P to old position
            player.x = next_move[0];
            player.y = next_move[1];
            // reward player before removing item
            if (grid[player.x][player.y]=='I')
            {
                score++;
            }
            grid[player.x][player.y] = 'P'; // update P to new position
        }

        //* ===PRINT SCENE===
        print_horizontal_border();
        for (i = 0; i < 5; i++)
        {
            printf("# ");
            // abstracted printing of array
            print_arr(grid[i]);
            printf("#\n");
        } 
        print_horizontal_border();
    }


    return 0;

}
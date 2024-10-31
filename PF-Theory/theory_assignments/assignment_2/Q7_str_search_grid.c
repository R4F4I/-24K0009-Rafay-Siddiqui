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



int main(){
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
    };
	char end[3] = "END";


    int score = 0;
    int index_i, index_j,match=1,i,j,k=0;

    char player_input[10] = {' '};

	// show game
	
	for (i = 0; i < 5; i++){
            for (j = 0; j < 5; j++){
                printf("%c ",grid[i][j]);
            }
            printf("\n");
        }



    // ! play game
    while (strcmp(player_input,end)!=0)
    {
    	match = 1;
        printf("\nEnter a string to find: ");
        scanf("%s",&player_input);
//        if (strcmp(player_input,"END")){
//        	break;
//        }

        // find first instance of the input's first char

        for (i = 0; i < 4; i++){
            for (j = 0; j < 5; j++){
                if (player_input[0]==grid[j][i]){
                    // if it is found break out the loop 
                    index_j = j; // y axis
                    index_i = i; // x axis


                    // now try to circle around the found val to check for second char
                    if(grid[index_i+1][index_j] == player_input[1] ) // check down
                    {
                        // if the second char is found at the upper side, traverse the entire upper side
                        while(player_input[k]!='\0' ){ //|| grid[index_i+k][index_j]==player_input[k]
                            k++;
                            if(grid[index_i+k][index_j]!=player_input[k]){
                                match = 0;
                                printf("\n%c ",grid[index_i+k][index_j]);
                                break;
                            }
                        }
                    }
                    else if(grid[index_i-1][index_j] == player_input[1] ) // check up
                    {
                        while(player_input[k]!='\0' ){ 
                            k++;
                            if(grid[index_i-k][index_j]!=player_input[k]){
                                match = 0;
                                printf("\n%c ",grid[index_i+k][index_j]);
                                break;
                            }
                        }
                    } 
                    else if(grid[index_i][index_j-1] == player_input[1] ) // check left
                    {
                        while(player_input[k]!='\0' ){ 
                            k++;
                            if(grid[index_i][index_j-k]!=player_input[k]){
                                match = 0;
                                printf("\n%c ",grid[index_i+k][index_j]);
                                break;
                            }
                        }
                    } 
                    else if(grid[index_i][index_j+1] == player_input[1] ) // check right
                    {
                        while(player_input[k]!='\0' ){ 
                            k++;
                            if(grid[index_i][index_j+k]!=player_input[k]){
                                match = 0;
                                printf("\n%c ",grid[index_i+k][index_j]);
                                break;
                            }
                        }
                    } 
                }
                printf("\nindex_i: %d, index_j: %d",index_i,index_j);
            }
        }

        

        if (match == 1){
            printf("\n%c ",grid[index_i+k][index_j]);
        	score++;
            printf("%s is present, score: %d\n",player_input,score);
        } else{
        	score--;
        	printf("%s is not present, score: %d\n",player_input,score);
        }

    }
    
	printf("Final score: %d",score);

    return 0;
}

/*

? | Two friends, A and B, are playing the game of matchsticks. In this game, a group of N matchsticks is
? | placed on the table. The players can pick any number of matchsticks from 1 to 4 (both inclusive)
? | during their chance. The player who takes the last matchstick wins the game. If A starts first, how
? | many matchsticks should he pick on his 1st turn such that he is guaranteed to win the game or
? | determine if it’s impossible for him to win? Write a function which returns -1 if it’s impossible for A to
? | win the game, else return the number of matchsticks he should pick on his 1st turn such that he is
? | guaranteed to win.


* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

// since the max matchsticks to pick is 4, we must make sure not leave the last few match to be less than 5,
/*
15 -> player a take 4 (max)
11 -> player b take 4 (max)
7  -> player a take 4 (max)
3  

.
.

5 -> player b take 4 (max)
1 -> player a takes (win)


*/

// if it is 

// in the end 



int play_game(int n, int m){
    int player_A = 0;
    int player_B = 0;
    int i;

    while (n!=0)
    {
        player_A += 4;
        n-= 4;

        player_B += 4;
        n-= 4;
    }
    
    

}


#include <stdio.h>

int main(){

    int n = 10; // number of matchsticks
    int max = 4; // max sticks possible to collect

    




}
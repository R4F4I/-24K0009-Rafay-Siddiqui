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


/*

// LOSE condition

since the max matchsticks to pick is 4, we must make sure not leave the last few match to be less than 5,
hence if there 5 match stick for A to chose from it has lost [else win]

we can see this as, 
whoever chooses from 5 loses
the same as
whoever chooses from 0 loses (because the other one has chosen the last matchsticks)

meaning the if the n is a multiple of 5 (n%5==0) it is a guaranteed loss for A

// win Strat

if n%5!=0 then A must for B to receive a multiple of 5 in it's move

hence A will take divide n by 5 and take the remainder (n%5) as (n-(n%5))%5==0
                                                                    ^
                                                                    ; > suppose n = 17, 17 % 5 = 2(remainder) A
                                                                      > 17 -2 =15 (15%5=0)


=======
15 -> player A takes 4 (max)
11 -> player B takes 4 (max)
6  -> player A takes 4 (max)
6  -> player B takes 1 
5  -> player A takes 1 
4  -> player B takes 4 (Win) 

=======

*/
 
#include <stdio.h>
int play_game(int n, int max){    

    return (n%(max+1)==0) 
        ? -1 
        : n%(max+1);
}

int main(){
    int n = 201; // number of matchsticks
    int max = 4; // max sticks possible to collect
    printf("For A: %d",play_game(n,max));
    return 0;
}
/*


? | Write a program that organizes a digital cricket match, "Cricket Showdown," where two players,
? | Player 1 and Player 2, compete over 12 balls. Each player takes turns to score runs on each ball.
? | Players can enter scores between 0 and 6 for each ball, and if a score outside this range is entered,
? | it will be disregarded, but the ball will still be marked.
? |     1. Define a structure Player with the following members:
? |         a. ballScores[12]: An array to store the score for each ball.
? |         b. playerName: A string to hold the player's name.
? |         c. totalScore: An integer to store the total score for each player.
? |     2. Define functions:
? |         a. playGame(struct Player player): This function prompts each player to enter their
? |             score for each of the 12 balls.
? |         b. validateScore(int score): This function checks if the score is between 0 and 6
? |             (inclusive). If it’s not, the score is disregarded, but the ball is still marked.
? |         c. findWinner(struct Player player1,struct Player player2): Determines the winner based
? |             on the total score.
? |         d. displayMatchScoreboard(struct Player player1,struct Player player2): Displays a
? |             summary of each player’s performance, including each ball’s score, the average
? |             score, and total score.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>

struct Player
{
    int ballScores[12];
    char playerName[20];
    int totalScore;

};

int validateScore(int score){
    //  if valid return the score else mark it as played
    return (score >= 0 && score <= 6) ? score : -99;
}

// used pointer as structs are passed byval
void playGame(struct Player *player,int i){
    printf("%s's turn to enter score: ",player->playerName);
    scanf("%d",&player->ballScores[i]);
    player->ballScores[i] = validateScore(player->ballScores[i]);
}



void findWinner(struct Player player1,struct Player player2){
    if(player1.totalScore > player2.totalScore)       printf("%s wins the match by %d runs!(total: %d)\n",player1.playerName,player1.totalScore-player2.totalScore,player1.totalScore);
    else if (player1.totalScore < player2.totalScore) printf("%s wins the match by %d runs!(total: %d)\n",player2.playerName,player2.totalScore-player1.totalScore,player2.totalScore);
    else {printf("Game ended in Tie :(\n");}
    
}


void displayMatchScoreboard(struct Player player1,struct Player player2){
        printf("        %s            %s  \n",player1.playerName,player2.playerName);
    for (size_t i = 0; i < 12; i++)
    {
        if (player1.ballScores[i]==-99)
        {
            printf("    .      |      %d  \n",player2.ballScores[i]);
        }
        else if (player2.ballScores[i]==-99)
        {
            printf("    %d      |     .  \n",player1.ballScores[i]);
        }
        else
        {
            printf("    %d      |     %d  \n",player1.ballScores[i],player2.ballScores[i]);
        }

    }
}


int main(){

    struct Player p1,p2;

    // init runs on each ball
    for (size_t i = 0; i < 12; i++)
    {
        p1.ballScores[i]=-1;
        p2.ballScores[i]=-1;
    }
    // init total scores
    p1.totalScore = 0;
    p2.totalScore = 0;

    // get player names
    printf("Enter Player 1 name: ");
    scanf("%s", p1.playerName);
    
    printf("Enter Player 2 name: ");
    scanf("%s", p2.playerName);

    // play game
    for (size_t i = 0; i < 12; i++)
    {
        printf("\n%d balls left\n------\n",12-i);
        playGame(&p1,i);
        // only add to totalscore if valid
        if (p1.ballScores[i]!=-99)
        {
            p1.totalScore += p1.ballScores[i];
            // printf("%d tot\n",p1.totalScore);
        }
        
        playGame(&p2,i);
        if (p2.ballScores[i]!=-99)
        {
            p2.totalScore += p2.ballScores[i];
        }
    }

    // after game results

    findWinner(p1,p2);

    displayMatchScoreboard(p1,p2);

 return 0;
}
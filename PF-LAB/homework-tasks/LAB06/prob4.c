/*
? | You are tasked with developing a Messaging Streak Tracker for a social media app (similar to Snapchat streaks). 
? | The app tracks how many consecutive days two users send messages to each other.
? |     * Each day, the user must send a message to their friend to maintain the streak.
? |     * If the user fails to send a message on any day, the streak is reset to 0.
? |     * The system should track the streak and update it based on whether the user sent a message that day.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

//header
#include <stdio.h>

//start main function
int main (){
    
    // declaration
    int streak=0;
    int day;
    int limit=0;
    int sent_message;

    // taking inputs
    printf("Range of days to keep track of streak : ");
    scanf("%d",&day);

    // processing 

    while (limit<day)
    {
        printf("\nday: %d",limit);
        printf("\n-------\n\n");
        printf("\nstreak: %d",streak);
        printf("\n-------\n\n");

        printf("sent a message today? (any number for YES or 0 for no) :");
        scanf("%d",&sent_message);

        streak +=1;

        if (sent_message == 0){streak = 0;}

        limit +=1;
    }


    // output
    printf("\nstreak: %d",streak);

    return 0;

}
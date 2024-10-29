#include <stdio.h>
#include <string.h>

int main (){

    char first_name[4][30];
    char last_name[4][30];
    char complete_name[4][30];
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("Enter a first name: ");
        scanf("%s",&first_name[i]);
        printf("Enter a last name: ");
        scanf("%s",&last_name[i]);

        strcpy(complete_name[i] , strcat(first_name[i],last_name[i]));
    }

    for (i = 0; i < 4; i++)
    {
        printf("%s\n",complete_name[i]);
    }
        



    return 0;
}
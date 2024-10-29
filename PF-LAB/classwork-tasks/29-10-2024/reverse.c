#include <stdio.h>
#include <string.h>



int main(){


    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    int length = strlen(str);
    if (str[length] == '\0')
    {
        str[length] = '\n';
    }
    

    for (i = length; i > -1; i--)
    {
        putchar(str[i]);
    }
    
    printf("\n");
    


}
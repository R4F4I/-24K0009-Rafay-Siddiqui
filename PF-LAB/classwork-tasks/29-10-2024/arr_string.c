#include <stdio.h>
//#include <string.h>


int main(){
    char arr_string[4][30],name[30];
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("Enter name:");
        scanf("%s",&name);
        getchar();
        arr_string[i][30]=name;
    }
    
    for (i = 0; i < 4; i++)
    {
        printf("%s \n",arr_string[i]);
    }
    
}

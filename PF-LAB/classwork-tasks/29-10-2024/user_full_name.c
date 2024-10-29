#include <stdio.h>

/*
For reading a string value with spaces, we can use either gets() or fgets() in C programming language. Here, we will see what is the difference between gets() and fgets().
*/


int main(){
    char full_name[30];

    printf("Enter a complete name: ");
    gets(full_name);

    printf("%s ",full_name);

}

/*

// C program to illustrate fgets()
#include <stdio.h>
#define MAX 15

int main()
{
    // defining buffer
    char buf[MAX];

    // using fgets to take input from stdin
    fgets(buf, MAX, stdin);
    printf("string is: %s\n", buf);

    return 0;
}
*/
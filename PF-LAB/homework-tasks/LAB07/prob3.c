#include <stdio.h>

 int main() {
 char str[100];

 // Scanset example: accepts only alphabetic
characters (A-Z, a-z)
 printf("Enter a string: ");
 scanf("%[A-Za-z]", str);

printf("You entered: %s\n", str);
    return 0;
}
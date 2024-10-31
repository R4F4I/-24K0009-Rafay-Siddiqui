/*

n the figures below, a star pattern is illustrated for the values N = 3 and N = 5. Your task is to create
a C program that can print this pattern for odd values of N. Your solution should include the following
components:
1. Include meaningful, properly written English comments that explain the steps of your
program. (Worth 2 points)
2. In the header of the file, describe the pattern. Include information about the length of sides,
the position of the center, and any other relevant details. (Worth 1 points)
3. Prompt the user to enter the value of N. (Worth 1 points)
4. Run your program with an input value of 7. Capture a screenshot and save it as
'K23xxxx_Q01a.png.' (Worth 1 points)
5. Run your program again with an input value of 21. Capture a screenshot and save it as
'K23xxxx_Q01b.png.' (Worth 1 points)
6. For this question, submit only three files, 2 png image files and 1 .c file containing your code,
and there's no need to create a separate folder for Q01. (Worth 1 point)
The remaining marks will be based on the correctness, completeness, and the approach you take in
implementing the program.

     *
    * *
 ***   ***
  *     *
   *   *
  * * * *
*         *

       *
      *  *
* *
* *
***** *****
* *
* *
* *
* *
* * * *
* * * *
* * * *
* *

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A



*/

/*
PROPOSAL

* 3 main parts of the star,
  `> TOP -->  will start out like a typical centered triangle only offset due to the star shoulders
  `> MID --> 
  `> BOTTOM




*/

#include <stdio.h>

void star_top(int n){
    int i,j;
    for (i = 0; i < n; i++)
    {
        // outer spaces + star shoulder's space
        for (j = 0; j <(2*n)-i ; j++){printf(" ");}

        // 1st *
        printf("* ");

        // inner spaces
        if (i>0){for (j = 1; j < ((2*i)-1); j++){printf(" ");}}

        // 2nd *
        if (i!=0){printf("* ");}
        
        // newline
        printf("\n");
    }

}

void star_mid(int n){
    int i,j;

    // print the widest portion
    for (i = 0; i < n; i++)
    {
        printf("*");
    }
    for (i = 0; i < n+2; i++)
    {
        printf(" ");
    }
    for (i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");

    // print the descending portion
    // this portion will be centered hollowed  decreasing triangle, with an offset for space
    // 2n for the spaces of shoulders +n for the space in middle hence 3n
    /*
       *         *
        *       *
         *     *
          *   *
           * *
            * 
    */
    
    for (i = 0; i < n; i++)
    {
        printf("*");
        for (j = 3*i; j >1; j--)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }

}

void star_bottom(int n){

}

#include <stdio.h>


int main(){

    int n=0;
    while (n%2==0){
        printf("Enter an odd num: ");
        scanf("%d",&n);
    }


    star_top(n-1);
    star_mid(n);
    star_bottom(n);

    return 0;
}

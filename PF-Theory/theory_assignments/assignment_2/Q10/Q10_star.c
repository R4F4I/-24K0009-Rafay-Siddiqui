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



* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

/*
PROPOSAL

* 3 main parts of the star,
  `> TOP         -->  will start out like a typical centered triangle only offset due to the star shoulders
  `> MID         -->  will print the widest portion, then print the the hollow triangle but reversed AND with extra constant number of spaces (dependant on the input) to match the stars wideness
  `> BOTTOM      -->  will print 4 hollow triangles with decreasing spaces, along with a middle space increasing with the increments of 4 to give the right leg of the star an increasing motion, the space inside the stars, space 2 and space 3 will however keep decreasing like the outer spaces,
  `> ADJUSTMENTS --> the entire star will depend mostly on fine-tuning beyond the above criteria to achieve the desired results




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
    int i,j,k;

    // print the widest portion
    for (i = 0; i < n; i++)
    {
        printf("*");
    }
    // the space required for the inner portion HAS to be twice the input n, as the width is 2n
    printf(" ");
    for (i = 0; i < 2*(n-2); i++)
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

    */
    
    for (i = 1; i < n; i++)
    {
        // outside spaces
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        
        printf("*");
        // inside spaces
        for (j = 2*(n-i); j >1; j--)
        {
            
           
            printf(" ");
        }
        printf(" ");
        // print the mandatory n spaces
        for (j = 0; j < 2*(n-2)-1; j++)
        {
            printf(" ");
        }
            
        printf("*");
        printf("\n");
    }

}

// abstracted due to repetition
// spaces are decreasing as 3 2 1 0 for n=5, 1 0 for n = 3
void decreasing_odd_spaces(int i,int n){
    int j;

    for (j = (n-i)-2; j >0; j--)
    {
        printf(" ");
    }
}

void star_bottom(int n){
    int i,j;
    // this is two triangles with different spaces
    for (i = 0; i < n; i++)
    {
        
        // spaces 1
        // spaces are decreasing as 3 2 1 0 for n=5, 1 0 for n = 3
        decreasing_odd_spaces(i,n);
        
        // star 1
        if (i<n-1)
        {
            printf("*");
        }
        
        // spaces 2
        // same as space 1
        decreasing_odd_spaces(i,n);
        // star 2
        if (i<n-2)
        {
            printf("*");
        }
        
        
        // spaces 3
        // spaces will increase with increments of 4 for n = 5 until it is the last line then with additional two spaces to compensate for the missing stars
        for (j = 0; j<=4*(i); j++)
        {
            printf(" ");
            
            
        }
        
            // if the last line is reached add 2 additional spaces, n-3 was reached though adjustments
            if (i>n-3)
            {
                printf("  ");
            }

        // star 3
         if (i<n-2)
        {
            printf("*");
        }
        // spaces 4
        // same as space 1
        decreasing_odd_spaces(i,n);
        // star 4
        if (i<n-1)
        {
            printf("*");
        }
        

        printf("\n");
    }
    
    
}

#include <stdio.h>


int main(){

    int n=0;
    while (n%2==0 || n<3){
        printf("Enter an odd num: ");
        scanf("%d",&n);
    }


    star_top(n-1);
    star_mid(n);
    star_bottom(n);

    return 0;
}

/*
RESULTS:

Enter an odd num: 3
    *
   * *
***   ***
 *     *
  *   *
 * * * *
*       *


Enter an odd num: 5
        *
       * *
      *   *
     *     *
*****       *****
 *             *
  *           *
   *         *
    *       *
   *   * *   *
  *  *     *  *
 * *         * *
*               *


Enter an odd num: 7
            *
           * *
          *   *
         *     *
        *       *
       *         *
*******           *******
 *                     *
  *                   *
   *                 *
    *               *
     *             *
      *           *
     *     * *     *
    *    *     *    *
   *   *         *   *
  *  *             *  *
 * *                 * *
*                       *

Enter an odd num: 21
                                        *
                                       * *
                                      *   *
                                     *     *
                                    *       *
                                   *         *
                                  *           *
                                 *             *
                                *               *
                               *                 *
                              *                   *
                             *                     *
                            *                       *
                           *                         *
                          *                           *
                         *                             *
                        *                               *
                       *                                 *
                      *                                   * 
                     *                                     *
*********************                                       *********************
 *                                                                             *
  *                                                                           *
   *                                                                         *
    *                                                                       *
     *                                                                     *
      *                                                                   *
       *                                                                 *
        *                                                               *
         *                                                             *
          *                                                           *
           *                                                         *
            *                                                       *
             *                                                     *
              *                                                   *
               *                                                 *
                *                                               *
                 *                                             *
                  *                                           *
                   *                                         *
                    *                                       *
                   *                   * *                   *
                  *                  *     *                  *
                 *                 *         *                 *
                *                *             *                *
               *               *                 *               *
              *              *                     *              *
             *             *                         *             *
            *            *                             *            *
           *           *                                 *           *
          *          *                                     *          *
         *         *                                         *         *
        *        *                                             *        *
       *       *                                                 *       *
      *      *                                                     *      *
     *     *                                                         *     *
    *    *                                                             *    *
   *   *                                                                 *   *
  *  *                                                                     *  *
 * *                                                                         * *
*                                                                               *


*/
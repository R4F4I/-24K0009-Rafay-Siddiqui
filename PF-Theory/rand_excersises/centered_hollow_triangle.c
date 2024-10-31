/*

centered hollow triangle

......*
....*   *
..*       *
* * * * * * *

Enter an odd num: 19
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
* * * * * * * * * * * * * * * * * * * *


*/

#include <stdio.h>


int main(){

    int n=0;
    int i,j;

    while (n%2==0)
    {
        printf("Enter an odd num: ");
        scanf("%d",&n);
    }

    for (i = 0; i < n; i++)
    {
        // outer spaces
        for (j = 0; j <n-i ; j++){printf(" ");}

        // 1st *
        printf("* ");

        // inner spaces
        if (i>0){for (j = 1; j < ((2*i)-1); j++){printf(" ");}}

        // 2nd *
        if (i!=0){printf("* ");}
        
        // newline
        printf("\n");
    }

    for (i = 0; i <= n; i++){printf("* ");}

    return 0;
}
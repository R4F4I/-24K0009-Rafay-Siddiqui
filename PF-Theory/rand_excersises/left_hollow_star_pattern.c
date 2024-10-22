

# include <stdio.h>

int main(){
    int n = 5;
    int i = 1;
    int j = 0;
    int k = 0;
    int space = 0;

    if (i==1){
        printf("*\n");
        i++;
    }

    while (i!=n){

        j = 0;
        space = i-2;
        if (space<0){space = 0;} // to prevent -ve spaces

        // print 1st `*`
        printf("* ");

        // keep printing spaces
        while (j!=space)
        {
            printf("  ");
            j++;
        }

        // print 2nd `*`
        printf("* ");
        // newline
        printf("\n");
        i++;
    }
    // print final streak of stars
    if (i == n){
        while (k!=n)
        {
            printf("* ");
            k++;
        }
        
    }
    
}
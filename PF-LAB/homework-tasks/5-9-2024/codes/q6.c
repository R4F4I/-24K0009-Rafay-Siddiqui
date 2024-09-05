//start

// adding lib
#include <stdio.h>

// start main code
int main(){
    
    // declaration
    int x1, x2, y1,y2;
    float m;

    // taking input

    // x1
    printf("enter x1:\n");
    scanf("%d",&x1);
    
    // x2
    printf("enter x2:\n");
    scanf("%d",&x2);
    
    // y1
    printf("enter y1:\n");
    scanf("%d",&y1);
    
    // y2
    printf("enter y2:\n");
    scanf("%d",&y2);

    m = (x2-x1)/(y2-y1);
    printf("slope is: %.3f",m);
    
    return 0;
}
//end

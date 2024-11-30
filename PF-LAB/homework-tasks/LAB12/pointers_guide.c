/*

? dealing with basic logic behind pointers such as:
    * referencing   '    = %a'
    * dereferencing '    = *a'
    * pointing      ' *p =   '


* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>

int main(){

    int x = 40;
    int y = 20;
    int z = 30;
    int *p, *q;
    
    //? correct as p is of type int*, p is pointing to z
    p = &z;

    // !wrong as *p is of type int not int*
   //` *p = &x;

    //? since p has address of z, value in x is given to z
    *p = x; 
    printf("%d\n",z);

    // !wrong as p is of type int* and x is of type int
    // p = x; 
    
    //? now q points wherever p points, p point to z so now q also points to z 
    q = p;
    printf("%d\n",*q);

    // !wrong as *p is of type int and q is of type int*
    // q = *p;

    // resetting q pointer for next demo
    q = &y;

    //? correct, value where p was pointing is now assigned to the address where q is pointing
    *q = *p;
    printf("%d\n",y);

    // TODO ------------- difference b/w 'pointing' and 'dereferencing' ------------- TODO //

    int a=50,b=70;
 
    //? p is now pointing at a
    p = &a;
    *p = b; //? now a is 70
    //? now p is being dereferenced and the value is assigned to b
    b = *p;
    printf("%d",b);

 return 0;
}
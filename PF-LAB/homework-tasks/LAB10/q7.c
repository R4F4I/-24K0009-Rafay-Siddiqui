/*

? |Create a C program that defines a constant for the conversion factor of meters to
? |kilometers. Use a static variable in a function to count how many times the function is
? |called.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>
#include <math.h>

float m_to_km(float m){
    static int called=0;

    called++;
    printf("function called %d time(s)\n",called);
    return m/1000;
}

int main(){

    printf("%dm = %.3fkm\n",5, m_to_km(5));
    printf("%dm = %.3fkm\n",2, m_to_km(2));
    printf("%dm = %.3fkm\n",3, m_to_km(3));
    printf("%dm = %.3fkm\n",10, m_to_km(10));

 return 0;
}
/*

? | Write a C program that contains the following functions for different numerical conversions:
? |     1. int BinaryToDecimal(int number); Converts a binary number to its decimal equivalent.
? |     2. int DecimalToBinary(int number); Converts a decimal number to its binary equivalent.
? |     3. void DecimalToHexadecimal(int number); Converts a decimal number to its hexadecimal
? |     equivalent and prints it.
? |     4. void HexadecimalToDecimal(string hexNumber); Converts a hexadecimal number to its
? |     decimal equivalent and prints it.
? |     5. void BinaryToHexadecimal(int number); Converts a binary number to its hexadecimal
? |     equivalent and prints it.
? |     6. void HexadecimalToBinary(string hexNumber); Converts a hexadecimal number to its binary
? |     equivalent and prints it.
? | Each function should take an appropriate input and return or display the converted value. Ensure that
? | the program handles invalid inputs gracefully. Your program must display the menu which function
? | the user wants to call.


* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/


#include <stdio.h>



int BinaryToDecimal(int number);
int DecimalToBinary(int number);
void DecimalToHexadecimal(int number);
void HexadecimalToDecimal(char hexNumber[]);
void BinaryToHexadecimal(int number);
void HexadecimalToBinary(char hexNumber[]);
int expo(int num1,int num2);

int main(){

    int num=10;

    printf("%d ",BinaryToDecimal(100101));

    printf("%d ",DecimalToBinary());
    printf("%d ",DecimalToHexadecimal());
    printf("%d ",HexadecimalToDecimal());
    printf("%d ",BinaryToHexadecimal());
    printf("%d ",HexadecimalToBinary());


}

int expo(int num1,int num2){
    int i,res=1;
    for (i = 0; i < num2; i++)
    {
        res *= num1;
    }
    return res;
}

int BinaryToDecimal(int number){
    // extract last digit with number %10
    int i=0,out=0;
    while (number !=0)
    {
        if (number%10 == 1)
        {
            out += expo(2,i);
        }
        number /= 10; // remove last digit
        i++;
    }
    return out;


}
int DecimalToBinary(int number){

    


}
void DecimalToHexadecimal(int number){

}
void HexadecimalToDecimal(char hexNumber[]){

};
void BinaryToHexadecimal(int number){

}
void HexadecimalToBinary(char hexNumber[]){

}
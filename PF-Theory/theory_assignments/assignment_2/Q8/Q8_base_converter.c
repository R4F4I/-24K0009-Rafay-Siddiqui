/*

? | Write a C program that contains the following functions for different numerical conversions:
? |     1. int bin_to_dec(int number); Converts a binary number to its decimal equivalent.
? |     2. int dec_to_bin(int number); Converts a decimal number to its binary equivalent.
? |     3. void dec_to_hex(int number); Converts a decimal number to its hexadecimal
? |     equivalent and prints it.
? |     4. void hex_to_dec(string hexNumber); Converts a hexadecimal number to its
? |     decimal equivalent and prints it.
? |     5. void bin_to_hex(int number); Converts a binary number to its hexadecimal
? |     equivalent and prints it.
? |     6. void hex_to_bin_2(string hexNumber); Converts a hexadecimal number to its binary
? |     equivalent and prints it.
? | Each function should take an appropriate input and return or display the converted value. Ensure that
? | the program handles invalid inputs gracefully. Your program must display the menu which function
? | the user wants to call.


* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/


#include <stdio.h>



int bin_to_dec(int number);
int dec_to_bin(int number);

void dec_to_hex(int number);
int hex_to_dec(char hexNumber[]); 

int hex_to_bin(char hexNumber[]);
void bin_to_hex(int number);

int expo(int num1,int num2);
// converts a single num from 0-15 to its equivalent 0-F
char dec_to_hex_num(int dec_num);
int hex_to_dec_num(char hex_val);

int main(){


    int dec_num;
    char hex_str[20];

    printf("Enter a decimal number: ");
    scanf("%d",&dec_num);

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex_str);  // Get the hexadecimal input from the user

    int bin_num =0;
    int hex_num =0;

    int bin_result;
    int dec_result;


// ==== Decimal to Binary ====
    printf("Decimal to Binary Conversion:\n");
    bin_num = dec_to_bin(dec_num);
    printf("Decimal %d to Binary: %d\n\n", dec_num, bin_num);

    // ==== Binary to Decimal ====
    printf("Binary to Decimal Conversion:\n");
    dec_result = bin_to_dec(bin_num);
    printf("Binary %d to Decimal: %d\n\n", bin_num, dec_result);

    // ==== Decimal to Hexadecimal ====
    printf("Decimal to Hexadecimal Conversion:\n");
    printf("Decimal %d to Hexadecimal: ", dec_num);
    dec_to_hex(dec_num);
    printf("\n\n");

    // ==== Hexadecimal to Decimal ====
    printf("Hexadecimal to Decimal Conversion:\n");
    dec_result = hex_to_dec(hex_str);
    printf("Hexadecimal %s to Decimal: %d\n\n", hex_str, dec_result);

    // ==== Binary to Hexadecimal ====
    printf("Binary to Hexadecimal Conversion:\n");
    printf("Binary %d to Hexadecimal: ", bin_num);
    bin_to_hex(bin_num);
    printf("\n\n");

    // ==== Hexadecimal to Binary ====
    printf("Hexadecimal to Binary Conversion:\n");
    printf("Hexadecimal %s to Binary: %d\n", hex_str, hex_to_bin(hex_str));

}


// simple power function
int expo(int num1,int num2){
    int i,res=1;
    for (i = 0; i < num2; i++)
    {
        res *= num1;
    }
    return res;
}




// converts dec to hex
char dec_to_hex_num(int dec_num){
    char out;
    switch (dec_num)
        {
            case  0:out = '0';break;
            case  1:out = '1';break;
            case  2:out = '2';break;
            case  3:out = '3';break;
            case  4:out = '4';break;
            case  5:out = '5';break;
            case  6:out = '6';break;
            case  7:out = '7';break;
            case  8:out = '8';break;
            case  9:out = '9';break;
            case 10:out = 'A';break;
            case 11:out = 'B';break;
            case 12:out = 'C';break;
            case 13:out = 'D';break;
            case 14:out = 'E';break;
            case 15:out = 'F';break;
            default:break;
        }
    return out;
}

int hex_to_dec_num(char hex_val){
    int out;
    switch (hex_val)
        {
            case '0':out =  0;break;
            case '1':out =  1;break;
            case '2':out =  2;break;
            case '3':out =  3;break;
            case '4':out =  4;break;
            case '5':out =  5;break;
            case '6':out =  6;break;
            case '7':out =  7;break;
            case '8':out =  8;break;
            case '9':out =  9;break;
            case 'A':out = 10;break;
            case 'B':out = 11;break;
            case 'C':out = 12;break;
            case 'D':out = 13;break;
            case 'E':out = 14;break;
            case 'F':out = 15;break;
            default:break;
        }
    return out;
}

int bin_to_dec(int number){
    // extract last digit with number %10
    int i=0,res=0;
    while (number !=0){
        if (number%10 == 1){
            res += expo(2,i);
        }
        number /= 10; // remove last digit
        i++;
    }
    return res;
}




int dec_to_bin(int number){

    if (number == 0){
        return 0;
    }
    // perform the function 
    return ((dec_to_bin(number/2)*10)+(number%2));

}




void dec_to_hex(int number){
    
    // convert dec -> bin -> hex
    int bin_num =  dec_to_bin(number);
    bin_to_hex(bin_num);
}

// THE MOST DIFFICULT IMPLEMENTATION, AS IT DEALT WITH A LOT OF INDEXING
int hex_to_dec(char hexNumber[]){

    int i=0,arr_num[100]={0},max;
    long res=0;
    // convert hex number to an array of integers
    while (hexNumber[i]!='\0')
    {
        arr_num[i] = hex_to_dec_num(hexNumber[i]);
        i++;
    }
    //printf("value of at cah: %d\n",i);
    max=i-1;
    i=0;
    // convert the arr of integers into a single decimal
    while (max!=-1)
    {
        // arr x 16^i
        res += (arr_num[i])*(expo(16,max));
        max--;
        i++;
    }
    return res;
}



void bin_to_hex(int number){
    int temp,i=0,dec_num;
    char out,string[100];

    // extract 4 digits from beginning
    while (number!=0)
    {
        temp = number % 10000;
        dec_num = bin_to_dec(temp);
        out = dec_to_hex_num(dec_num);
        string[i] = out;
        i++;
        number /= 10000;
    }
    string[i+1] = '0';

    // print string in reverse
    while (i>0)
    {
        printf("%c",string[i-1]);
        i--;
    }
    printf("\n");
}




int hex_to_bin(char hexNumber[]){
    // hex to dec to bin
    return dec_to_bin(hex_to_dec(hexNumber));
}

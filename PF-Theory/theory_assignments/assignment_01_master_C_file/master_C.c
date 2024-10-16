/*

'||    ||'                  .                          ..|'''.|
 |||  |||   ....    ....  .||.    ....  ... ..       .|'     '
 |'|..'||  '' .||  ||. '   ||   .|...||  ||' ''      ||
 | '|' ||  .|' ||  . '|..  ||   ||       ||          '|.      .
.|. | .||. '|..'|' |'..|'  '|.'  '|...' .||.          ''|....'


By:             Rafay Siddiqui
Roll No:        24K 0009
Class section:  BAI-1A


*/

#include <stdio.h>

// simple function written to simply taking inputs
int input_num(char string[]){

	int value;

	printf("\n%s: ",string);
	scanf("%d",&value);
	
	return value;
}

char input_char(char string[]){

	int value;

	printf("\n%s",string);
	scanf("%d",&value);
	
	return value;
}

void display_header(){
    printf("\n\n\n");
    printf("'||    ||'                  .                          ..|'''.|\n");
    printf(" |||  |||   ....    ....  .||.    ....  ... ..       .|'     '\n");
    printf(" |'|..'||  '' .||  ||. '   ||   .|...||  ||' ''      ||\n");
    printf(" | '|' ||  .|' ||  . '|..  ||   ||       ||          '|.      .\n");
    printf(".|. | .||. '|..'|' |'..|'  '|.'  '|...' .||.          ''|....'\n");

    printf("\n\n\n");
    printf("By:             Rafay Siddiqui\n");
    printf("Roll No:        24K 0009\n");
    printf("Class section:  BAI-1A\n");

    printf("\n\n\n");
}
void display_main_options(){
    printf("1.  kilometers per sec to mph\n");
    printf("2.  even to odd\n");
    printf("3.  Legal marriage in Pakistan\n");
    printf("4.  Grocery Calculator\n");
    printf("5.  Irrigation manager\n");
    printf("6.  Amusement Park eligibility checker\n");
    printf("7.  Binary code to digit in elevator\n");
    printf("8.  Sum of All digits\n");
    printf("9.  Exact Age\n");
    printf("10. Replace all 90s with 9\n");
    printf("11. Co prime Detector\n");
    printf("12. Die hard jug problem\n");
    printf("0.  Exit\n");
}

int main(){

    int choice;


   // OUTPUTS
   /*
    1. kilometers per sec to mph
        input speed_1
        speed_2 = speed_1*0.62*3600
        output speed_2
   */

   /*
   2. EVEN / ODD WITH ERROR HANDLING

        input num1

        while num<1:
            print "error wrong input, try again"
            print num1

        if num%2==0:
            print "even"
        else:
            print "odd"

   */


    /*
    3. LEGAL MARRIAGE

        input province, gender, age

            if province <> "sindh":
                if gender == "F":
                    if age <16:
                        print "marriage not allowed"
                    else:
                        print " marriage allowed"
                else:
                    if age<18:
                        print "marriage not allowed"
                    else:
                        print " marriage allowed"
            else:
                if age<18:
                    print "marriage not allowed"

    */


   /*
   4. GROCERY CALCULATOR

        input budget
        input item1, item2, item3
        input item1_price, item2_price, item3_price
        input item1_amt, item2_amt, item3_amt

        total_cost = item1_price*item1_amt + item2_price*item2_amt + item3_price*item3_amt

        change = budget - total_cost


        print "total cost is: ", total_cost
        if change<0:
            print "shopping price exceeds budget"

        else:
            print "amount remaining is: ", change

   */

  /*
  5. IRRIGATION

        input crop, soil_moisture, rainfall_time

        switch(crop){
            case wheat:
                if soil_moisture < 30 && rainfall_time>24:
                perform_irrigation()
            case corn:
                if soil_moisture < 40:
                perform_irrigation()
            case rice:
                if soil_moisture < 25 && rainfall_time>24:
                perform_irrigation()
        }


  */

 /*
 6. AMUSEMENT PARK ELIGIBILITY

    input ride, height, age

    switch(ride){

        case "The Dragon Roller Coaster":
            if height >=48 && age>=10:
                print "you meet the criteria for The Dragon Roller Coaster"
            else:
                print "Sorry, you do not meet the criteria for The Dragon Roller Coaster"
        case "The Sky Swing":
            if height >=54 :
                print "you meet the criteria for The Sky Swing"
            else:
                print "Sorry, you do not meet the criteria for The Sky Swing"
        case "The Carousel":
            if age>=5:
                print "you meet the criteria for The Carousel"
            else:
                print "Sorry, you do not meet the criteria for The Carousel"
        default:
            print "incorrect input"
    }

 */

 /*
    7. WHICH FLOOR...

    input code

    switch (code){
        case 1111110:
            print "0"
            break
        case 110000:
            print "1"
            break
        case 1101101:
            print "2"
            break
        case 1111001:
            print "3"
            break
        case 110011:
            print "4"
            break
        case 1011011:
            print "5"
            break
        case 1011111:
            print "6"
            break
        case 1110000:
            print "7"
            break
        case 1111111:
            print "8"
            break
        case 1110011:
            print "9"
            break
        default:
            print "error"
            break
        
    }

 */

 /*
 8. DIGITS SUM

    ? code 
    input num

    while num != 0:
        mod_num = num % 10
        res = res + mod_num
        num = num // 10

    endwhile

    print(res)

 */
 /*
 9. Exact Age in days, months, and years from DOB (WITH LEAP YEAR)

    ? HELPFUL LOGIC
    * (we can use arrays to make this easier)

    1:  jan = 31    days
    2:  feb = 28/29 days
    3:  mar = 31    days
    4:  apr = 30    days
    5:  may = 31    days
    6:  jun = 30    days
    7:  jul = 31    days
    8:  aug = 31    days
    9:  sep = 30    days
    10: oct = 31    days
    11: nov = 30    days
    12: dec = 31    days

    ! validation for months
    while month > 12:
        print "incorrect month"
        input month


    ! validation for months with only 30 days
    if month == 2 || month == 4 || month == 6 || month == 9 || month == 11:
        while day>30:
            print "incorrect day"
            input day
    ! validation for all months
    while day>31:
            print "incorrect day"
            input day

    ! Leap year offset
    is_leap_year = 0
    while (is_leap_year != today_year){
        is_leap_year = birth_year + i
        if (is_leap_year % 400 == 0){
            offset = offset + 1
        }
        else if (is_leap_year % 4 == 0 && is_leap_year % 100 != 0){
            offset = offset + 1
        }
        i = i + 1
    }


 */
 /*
 10. FAULTY KEYBOARD
  ? replace all 90s with 9 (IN A NUMBER)
  ! LOGIC
  * use mod 100 to get the last 2 digits of number
  * if not 90, then mod 10 to get the last digit
  * collect the last digit in a new_num with increasing powers to ten

    input num
    new_num = 0

    i=1

    while num != 0:
        if num % 100 == 90:
            new_num = new_num + 9*i
            num = num // 100
        else:
            new_num = new_num + (num%10)*i
            num = num // 10
        i = i * 10


 */
 /*
 11. COPRIMES 

    input num1
    input num2

    i=1
    lim = 0

    GCD = 0

    if num1>num2:
        lim = num2
    else:
        lim = num1

    while i != lim:
        if num1 % i == 0 && num2 % i == 0:
            GCD = i
        endif
        i = i + 1
    endwhile

    if GCD>1:
        print "not co primes"

 */

 /*
 12. 5L JUG and 3L JUG

    n=5
    m=3

    jug1 = n  // space available
    jug2 = m  // space available

    while jug1 != n-4: // all the operations below will be performed iteratively until the space in jug1 is not n-4 where n = space in jug1 i.e 5
        while jug1>0:
            jug1 = jug1 - jug 2 
            // jug1 = 5-3 =2 -> space available in jug1

        // jug1 = 2-3 = -1 -> space available in jug1 as in overflow

        if jug1 < 0: 
            jug2=jug1+jug2 // 2=-1+3

        jug1 = n // jug1 is now emptied, space is now back to default
 */


    // UI
    
    // display main header
    display_header();
    // show options
    display_main_options();
    // take user input for choice
    choice = input_num("Please one of the above options");
    // perform on choice
    //perform_on_choice(choice);
  
    

    switch (choice)
    {
    case 0:
        printf("\nThank You for your visit!");
        break;
    case 1:
        //speed_converter();
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    case 5:
        /* code */
        break;
    case 6:
        /* code */
        break;
    case 7:
        /* code */
        break;
    case 8:
        /* code */
        break;
    case 9:
        /* code */
        break;
    case 10:
        /* code */
        break;
    case 11:
        /* code */
        break;
    case 12:
        /* code */
        break;
    case 13:
        /* code */
        break;
    
    default:
        break;
    }

    return 0;
}
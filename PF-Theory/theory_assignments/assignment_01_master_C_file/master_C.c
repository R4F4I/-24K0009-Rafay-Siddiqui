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

/*


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

#include <stdio.h>

// simple function written to simply taking inputs
int input_num(char string[]){
	int value;
	printf("%s: ",string);
	scanf("%d",&value);	
	return value;
}

char input_char(char string[]){
	char value;
	printf("\n%s",string);
	scanf("%c",&value);
	return value;
}
void print_border(char string[]){
    printf("\n\n\n<=====  %s  =====>\n\n\n",string);
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

// TASK 1
float kmps_to_mph(int kmps){return kmps*0.62*3600;}
void speed_converter(){
    print_border("KMPS TO MPH CONVERTOR");
    float speed_1, speed_2;
    speed_1 = input_num("\nEnter your speed in km per second");
    speed_2 = kmps_to_mph(speed_1);
    printf("\n\n%.2f mph",speed_2);
}

// TASK 2

void even_odd(){
    print_border("EVEN OR ODD");
    int num=0;
    while (num<1){num = input_num("\nEnter a positive Number");}
    if (num%2==0){
        printf("\neven");}
    else{
        printf("\nodd");}
}

// TASK 3

void legal_marriage(){
    print_border("LEGAL MARRIAGE");
    char province[10], gender;
    int age;
    age = input_num("\nEnter age");
    gender = input_char("Enter gender (M / F): ");
    getchar();
    printf("\nEnter province: ");
    scanf("%s",&province);
    
    /*
    if (province != "sindh"){
        if (gender == "F"){
            if (age <16){
                printf("\nmarriage not allowed")
            }
            else {
            printf("\nmarriage allowed")
            }
        }
        else if (gender == "M"){
            if (age<18)
                {printf("\nmarriage not allowed")}
            else
                {printf("\nmarriage allowed")}
        }
            
    }
    else if (age<18){printf("\nmarriage not allowed")}
    */

    printf("\nmarriage %s", 
        (province != "sindh") 
        ? (
            (gender == 'F' && age < 16) || 
            (gender == 'M' && age < 18) 
                ? "not allowed" 
                : "allowed") 
        : (
            age < 18 
            ? "not allowed" 
            : "allowed")
    );
}



// TASK 4

void grocery_calc(){
    /*
   4. GROCERY CALCULATOR
     */
        print_border("GROCERY CALCULATOR");
        int budget, total_cost,change,i=0,items_price[3],items_count[3];
        char items[10][3];
        
        printf("===BUDGET===\n");
        budget = input_num("\nEnter budget");
        printf("===ITEMS===\n");
        while (i<3)
        {
            printf("Enter the price for item number %d",i+1);
            items_price[i] = input_num("");

            printf("Enter the quantity for item number %d",i+1);
            items_count[i] = input_num("");

            total_cost += items_price[i]*items_count[i];
            i++;
        }

        change = budget - total_cost;

        printf( "total cost is: %d", total_cost);
        if (change<0){
            printf ("shopping price exceeds budget");
        }else{
            printf ("\namount remaining is: %d", change);
        };
}

// TASK 5

void perform_irrigation(){
    printf("\n\n\nperforming irrigation...\n\n\n");
} // perform_irrigation

void irrigation_manager(){
    int crop=0,soil_moisture, rainfall_time;

    print_border("IRRIGATION");

    print_border("CROP");
    // *INPUTS
    // crop must be on of the options available
    while (crop>3 || crop<1){crop = input_num("\n(1 for wheat)\n(2 for corn)\n(3 for rice)\nEnter crop");}
    // soil_moisture INPUT
    soil_moisture = input_num("Enter soil moisture");
    // rainfall_time INPUTS
    rainfall_time = input_num("Enter hours since last rainfall");

    switch(crop){
        case 1:
            if (soil_moisture < 30 && rainfall_time>24){perform_irrigation();}
            break;
        case 2:
            if (soil_moisture < 40){perform_irrigation();}
            break;
        case 3:
            if (soil_moisture < 25 && rainfall_time>24){perform_irrigation();}
            break;
        default:
            break;
    }
}

// TASK 6
// TASK 7
// TASK 8
// TASK 9
// TASK 10
// TASK 11
// TASK 12

int main(){

    int choice;



    // UI
    
    // display main header
    display_header();
    // show options
    display_main_options();
    // take user input for choice
    choice = input_num("\nPlease one of the above options");
    // perform on choice
    //perform_on_choice(choice);
  
    

    switch (choice)
    {
    case 0:
        printf("\nThank You for your visit!");
        break;
    case 1:
        speed_converter();
        break;
    case 2:
        even_odd();
        break;
    case 3:
        legal_marriage();
        break;
    case 4:
        grocery_calc();
        break;
    case 5:
        irrigation_manager();
        break;
    case 6:
        // park_eligibility();
        break;
    case 7:
        // elevator();
        break;
    case 8:
        // digit_sum();
        break;
    case 9:
        // exact_age();
        break;
    case 10:
        // ninety_to_nine();
        break;
    case 11:
        // co_prime_detector();
        break;
    case 12:
        // die_hard_jug();
        break;
    case 13:
        /* code */
        break;
    
    default:
        break;
    }

    return 0;
}
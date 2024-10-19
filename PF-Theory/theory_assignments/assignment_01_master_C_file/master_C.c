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
#include <time.h>

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
void park_eligibility(){
    /*
 6. AMUSEMENT PARK ELIGIBILITY
    */
    print_border("AMUSEMENT PARK ELIGIBILITY");
    int ride, height, age;
    ride = input_num("1: The Dragon Roller Coaster\n2: The Sky Swing\n3: The Carousel\n Enter your preferred ride");
    height = input_num("Enter height");
    age = input_num("Enter age");
    

    switch(ride){

        case 1:
            if (height >=48 && age>=10){
                printf("Enjoy Your Ride!");
            }
            else{
                printf("Sorry, you do not meet the criteria for The Dragon Roller Coaster");
            }
            break;
        case 2:
            if (height >=54){
                printf("Enjoy Your Ride!");
            }
            else{
                printf("Sorry, you do not meet the criteria for The Sky Swing");
            }
            break;
        case 3:
            if (age>=5){
                printf("Enjoy Your Ride!");
            }
            else{
                printf("Sorry, you do not meet the criteria for The Carousel");
            }
            break;
        default:
            printf("incorrect input");
            break;
    }

 
}
// TASK 7

void print_numbers(){
    printf(" _   \n");
    printf("  |  \n");
    printf("  +   = 110000\n");
    printf("  |  \n");
    printf(" --- \n");

    printf("\n\n\n");

    printf("  ___ \n");
    printf("     |\n");
    printf("  -+-  = 1101101\n");
    printf(" |    \n");
    printf("  --- \n");
    printf("\n\n\n");
    printf(" ___ \n");
    printf("    |\n");
    printf(" -+-  = 1111001\n");
    printf("    |\n");
    printf(" --- \n");

    printf("\n\n\n");
    
    printf(" | |  \n");
    printf("  -+- = 110011\n");
    printf("   |  \n");
    
    printf("\n\n\n");

    printf("  ___ \n");
    printf(" |    \n");
    printf("  -+- = 1011011\n");
    printf("     |\n");
    printf("  --- \n");

    printf("\n\n\n");

    printf("  ___ \n");
    printf(" |    \n");
    printf(" |-+- = 1011111\n");
    printf(" |   |\n");
    printf("  --- \n");

    printf("\n\n\n");

    printf("  ___ \n");
    printf("    / \n");
    printf("   +  = 1110000\n");
    printf("  /   \n");

    printf("\n\n\n");

    printf("  ___ \n");
    printf(" |   |\n");
    printf("  -+- = 1111111\n");
    printf(" |   |\n");
    printf("  --- \n");

    printf("\n\n\n");

    printf("  ___ \n");
    printf(" |   |\n");
    printf("  -+-| = 1110011\n");
    printf("     |\n");
    printf("  --- \n");

    printf("\n\n\n");

    printf("  ___  \n");
    printf(" |  /| \n");
    printf(" | + | =1111110\n");
    printf(" |/  | \n");
    printf("  ---  \n");
}

void elevator(){
    print_border("elevator");
    print_numbers();
    int code = input_num("Enter your code");



    switch (code){
        case 1111110:
            printf("0");
            break;
        case 110000:
            printf("1");
            break;
        case 1101101:
            printf("2");
            break;
        case 1111001:
            printf("3");
            break;
        case 110011:
            printf("4");
            break;
        case 1011011:
            printf("5");
            break;
        case 1011111:
            printf("6");
            break;
        case 1110000:
            printf("7");
            break;
        case 1111111:
            printf("8");
            break;
        case 1110011:
            printf("9");
            break;
        default:
            printf("error");
            break;
        
    }
}
// TASK 8

void digit_sum(){
    print_border("DIGIT SUM");
    int num,res=0;
    num = input_num("Enter num");

    while (num != 0){
        res += num % 10;
        num /= 10;
    }
    printf("result is %d",res);
}

// TASK 9

// Function to check if a year is a leap year
int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to calculate the day, month, and year from the number of days since the Unix Epoch
void timestamp_to_date(long timestamp, int date[]) {
    int days_in_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days_in_leap_months[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    long days = timestamp / 86400;  // Convert seconds to days (1 day = 86400 seconds)
    int year = 1970;

    // Calculate the year
    while (days >= 365) {
        if (is_leap_year(year)) {
            if (days >= 366) {
                days -= 366;
                year++;
            }
        } else {
            days -= 365;
            year++;
        }
    }

    // Set the year in the date array
    date[2] = year;

    // Check if the current year is a leap year
    int *month_days = is_leap_year(year) ? days_in_leap_months : days_in_months;

    // Calculate the month and day
    int month = 0;
    while (days >= month_days[month]) {
        days -= month_days[month];
        month++;
    }

    // Set the month and day in the date array
    date[1] = month + 1;  // Months are 1-based, so add 1
    date[0] = days + 1;   // Days are 1-based, so add 1
}

void exact_age(){
    int max_date[13]   = {0,31,28,31,30,31,30,31,31,30,31,30,31};
                        // 0  1  2
    int birth_date[3] =   {0, 0, 0}; 
    int current_date[3];  // Array to hold the [day, month, year]
    int diff[3];
    int leap_count = 0;
    time_t timestamp = time(NULL); // Unix timestamp

    // !<----INPUTS---->
    // current date input
    timestamp_to_date(timestamp, current_date);
    
    // birth month input
    while (birth_date[1]>12||birth_date[1]<1){
            birth_date[1] = input_num("Enter a correct birth month");
    }
    // month adjustment
    if (current_date[1] < birth_date[1]) {
        current_date[1] += 12; // Borrow 12 months from the year
        current_date[2]--; // Borrow one year
    } else if (current_date[1] == birth_date[1])
    {
        
    }
    // birth date input
    // in this comparision the month is chosen first and max_date of that month is checked for validation
    while (birth_date[0]>max_date[birth_date[1]] || birth_date[0]<1){
        birth_date[0] = input_num("Enter a correct birth date");
    }

    // day adjustment
    if (current_date[0] < birth_date[0]) {
        current_date[0] += 30; // Assume the previous month has 30 days
        current_date[1]--; // Borrow one month
    }

     // days must be less than their month max
     // todo: fix bug for when birth month and current are same and current date is less than birth date
    while (current_date[0]>birth_date[0] &&)
    {
        diff[0] %= current_date[1];
        diff[1]++;
    }

    // birth year input
    // in this comparision, the birth year must be less than current month
    while (birth_date[2]>current_date[2] || birth_date[2]<1){
        birth_date[2] = input_num("Enter a correct birth year");
    }
    
    

    
    // temp year
    int temp = birth_date[2];

    // !leap year 
    while (temp<=current_date[2])
    {
        if (is_leap_year(temp))
        {
            leap_count++;
        }
        temp++;
    }
    
    // !DIFF
    diff[0] = (current_date[0] - birth_date[0])+leap_count;
    diff[1] = current_date[1] - birth_date[1];

   

    diff[2] = current_date[2] - birth_date[2];
    
    printf("\n%d years %d months and %d days",diff[2],diff[1],diff[0]);
}

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
        park_eligibility();
        break;
    case 7:
        elevator();
        break;
    case 8:
        digit_sum();
        break;
    case 9:
        exact_age();
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
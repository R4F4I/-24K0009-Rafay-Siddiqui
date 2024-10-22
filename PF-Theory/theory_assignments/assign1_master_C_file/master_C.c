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




   // OUTPUTS
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

long input_long(char string[]){
	int value;
	printf("%s: ",string);
	scanf("%ld",&value);	
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

// ?<--- different implementation--->
// another method

// current date -> total days since 0/0/0000
// birth   date -> total days since 0/0/0000

//diff in days  -> current date(in total days)-  birth date(in total days)
// reconvert the diff in days  into a diff array which will be age

// Function to calculate total days in years up to given year
int count_days_in_years(int year) {
    int days = 0;
    for (int i = 0; i < year; i++) {
        days += is_leap_year(i) ? 366 : 365;
    }
    return days;
}

// Function to calculate the number of days in the months of a given year
int count_days_in_months(int month, int year) {
    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Adjust for leap year
    if (is_leap_year(year)) {
        days_in_month[1] = 29;
    }

    int days = 0;
    for (int i = 0; i < month; i++) {
        days += days_in_month[i];
    }
    return days;
}

// Function to convert a date [dd, mm, yyyy] into total days since [0, 0, 0000]
int date_to_days(int dd, int mm, int yyyy) {
    int total_days = 0;

    // Add days for the years
    // Add days for the months in the current year
    // Add the days in the current month
    total_days = count_days_in_years(yyyy)+count_days_in_months(mm - 1, yyyy)+dd;
    return total_days;
}

// Function to get the number of days in a year
int days_in_year(int year) {
    return is_leap_year(year) ? 366 : 365;
}

// Function to get the number of days in a month of a given year
int days_in_month(int month, int year) {
    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Adjust for leap year
    if (is_leap_year(year)) {
        days_in_month[1] = 29;
    }

    return days_in_month[month];
}


void days_to_date(int total_days, int result[3]) {
    int year = 0;

    // Subtract days year by year
    while (total_days >= days_in_year(year)) {
        total_days -= days_in_year(year);
        year++;
    }

    int month = 0;
    // Subtract days month by month
    while (total_days >= days_in_month(month, year)) {
        total_days -= days_in_month(month, year);
        month++;
    }

    // Now, total_days holds the remaining days in the current month
    int day = total_days + 1;  // Add 1 because days are 0-indexed

    // Store the result in the result array [dd, mm, yyyy]
    result[0] = day;
    result[1] = month;  // Keep the month as 0-based index
    result[2] = year;
}


void exact_age(){
    print_border("exact_age");
    int max_date[13]   = {0,31,28,31,30,31,30,31,31,30,31,30,31};
                        // 0  1  2
    int birth_date[3] =   {0, 0, 0}; //[dd,mm,yyyy]
    int current_date[3];  // current day
    int diff[3];
    int birth_days = 0;
    int current_days = 0;
    int diff_in_days = 0;
    time_t timestamp = time(NULL); // Unix timestamp

    // !<----INPUTS---->
    // current date input
    timestamp_to_date(timestamp, current_date);
    
    // birth month input
    while (birth_date[1]>12||birth_date[1]<1){
            birth_date[1] = input_num("Enter a correct birth month");
    }

    // birth date input
    // in this comparision the month is chosen first and max_date of that month is checked for validation
    while (birth_date[0]>max_date[birth_date[1]] || birth_date[0]<1){
        birth_date[0] = input_num("Enter a correct birth date");
    }

    
    // birth year input
    // in this comparision, the birth year must be less than current month
    while (birth_date[2]>current_date[2] || birth_date[2]<1){
        birth_date[2] = input_num("Enter a correct birth year");
    }
    // 
    birth_days = date_to_days(birth_date[0],birth_date[1],birth_date[2]);
    current_days = date_to_days(current_date[0],current_date[1],current_date[2]);

    // ? THE FINAL ACTUAL DIFFERENCE A.K.A AGE
    diff_in_days = current_days - birth_days;

    days_to_date(diff_in_days,diff);
    printf("\n%d years %d months and %d days",diff[2],diff[1],diff[0]);

}

// TASK 10

void ninety_to_nine(){
    print_border(" 90 TO 9");
    long num,new_num = 0;
    int i=1;
    num = input_long("\nEnter the faulty number") ;

    while (num != 0){
        if (num % 100 == 90){
            new_num = new_num + 9*i;
            num /= 100;
        } else {
            new_num += ((num%10)*i);
            num /= 10;
        }
        i *= 10;
    }
    printf("Corrected number: %ld",new_num);
}

// TASK 11

void co_prime_detector(){

    int num1,num2,i=1,lim=0,GCD=0;
    num1 = input_num("Enter num 1");
    num2 = input_num("Enter num 2");

    if (num1 > num2){
        lim = num2;
    }else{
        lim = num1;
    }
    for (i = 1; i < lim; i++){
        if (num1 % i == num2 % i){ // 'num1 % i == num2 % i' is also valid logic as this only when happens when both =0, otherwise num1 == num2 (prev. 'num1 % i == 0 && num2 % i == 0' )
            GCD = i;
        }
    }
    
    if (GCD > 1){
        printf("not co primes");
    }
}

// TASK 12

/*

[23:48, 9/14/2024] +92 332 8225743: Try calculating the greatest common divisor of M and N
[23:49, 9/14/2024] +92 332 8225743: If the GCD isn't 1, check if the amount you're wanting to output is a multiple of the GCD
[23:50, 9/14/2024] +92 332 8225743: If the GCD is 1, Check if the amount is less than or equal to the maximum of M and N
[23:50, 9/14/2024] +92 332 8225743: Only those are the cases where its possible to output any amount
[23:54, 9/14/2024] +92 315 1097780: *The target volume (X) is not a multiple of the greatest common divisor (GCD) of M and N: This is because the only volumes that can be obtained by pouring from one jug to another are multiples of the GCD.
 * The target volume (X) is greater than the sum of the capacities of the two jugs (M + N): It's impossible to have more than M + N liters of water in total.
[23:54, 9/14/2024] +92 315 1097780: first check these two cases then 
think for a genral solution to get X by using if else statements

[23:55, 9/14/2024] +92 326 9955645: Basically this uses the concepts of extended euclidean algorithm

Which you will study in discrete structures in third semester 

Iski basically bohat zyada long working hoti hai jo shyd app logon ko abhi smjh naa aye(try krlo wese smjh ajaye toh good hai)

Refer to youtube for this algo

Baki 3-9 walay combination se possible nhi hai becuz hamesha mod 0 ayega

[00:00, 9/15/2024] +92 315 1097780: 
Input:

M: Capacity of Jug A
N: Capacity of Jug B
X: Target amount to measure
Output:

True if X liters can be measured in Jug A, False otherwise
Steps:

Validate input:

If M, N, or X are less than or equal to 0, return False and print an error message.
Check if X is within the possible range:

If X is greater than the maximum capacity of both jugs (M + N), return False.
Initialize jugs:

Set A (Jug A) to 0.
Set B (Jug B) to 0.
Iterative process:

While A is not equal to X:
If A is empty (0):
Fill A completely to its capacity (M).
If B is full (N):
Empty B completely (0).
If A is not empty and B is not full:
Pour water from A to B until either A is empty or B is full.
Check result:

If A is equal to X, return True as the target amount has been measured in Jug A.
Otherwise, return False as it's impossible to measure X liters in Jug A with the given jugs.
Explanation:

Input validation: Ensures that all input values are positive.
Range check: Verifies that X is within the possible range of M + N.
Iterative process: Similar to the previous approach, it iteratively fills, empties, and pours water between the jugs.
Result check: Determines if A has reached the target amount X.



*/

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
        ninety_to_nine();
        break;
    case 11:
        co_prime_detector();
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
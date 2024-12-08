/*

? |

? | You are creating a system to track employee performance ratings over multiple evaluation periods.
? | The system will dynamically allocate memory to store ratings and perform various analysis tasks,
? | including finding the top-performing employee and the best-rated evaluation period.
? | 
? | Define the Employee Structure:
? | 
? | Create a structure called Employee with the following fields:
? |     + ratings: A dynamically allocated array to store the ratings for each evaluation period.
? |     + totalScore: An integer to store the employee's total score across all evaluation periods.
? | 
? | Define the following function:
? |     1. Input Ratings Function:
? |         ○ Implement a function void inputEmployees(int** ratings, int numEmployees, int
? |           numPeriods) to allow the user to enter ratings for each employee across all
? |           evaluation periods.
? |         ○ Each rating should be between 1 and 10 (inclusive). Input validation should be
? |           implemented to enforce this.
? | 
? |     2. Display Performance Function:
? |         ○ Implement a function void displayPerformance(int** ratings, int numEmployees,
? |           int numPeriods) that displays the performance ratings for each employee across all
? |           evaluation periods.
? | 
? |     3. Find Employee of the Year Function:
? |         ○ Implement a function int findEmployeeOfTheYear(int** ratings, int
? |           numEmployees, int numPeriods) to calculate and return the index of the employee
? |           with the highest average rating.
? | 
? |     4. Find Highest Rated Period Function:
? |         ○ Implement a function int findHighestRatedPeriod(int** ratings, int
? |           numEmployees, int numPeriods) to calculate and return the evaluation period with
? |           the highest average rating across all employees.
? | 
? |     5. Find Worst Performing Employee Function:
? |         ○ Implement a function int findWorstPerformingEmployee(int** ratings, int
? |           numEmployees, int numPeriods) to calculate and return the index of the employee
? |           with the lowest average rating.
? | 
? | Memory Management:
? |     + Dynamically allocate memory for each employee's ratings based on the number of
? |       evaluation periods.
? |     + After completing all tasks, ensure that the dynamically allocated memory is properly freed to
? |       prevent memory leaks.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>
#include <stdlib.h>

struct employees
{
    int **ratings, totalScore;
};

void inputEmployees(int **ratings, int numEmployees, int numPeriods);
void displayPerformance(int **ratings, int numEmployees,int numPeriods);
void findEmployeeOfTheYear(int **ratings, int numEmployees, int numPeriods);
void findHighestRatedPeriod(int **ratings, int numEmployees, int numPeriods);
void findWorstPerformingEmployee(int **ratings, int numEmployees, int numPeriods);
void freeRatings(int **ratings, int numEmployees);

int mat_el(int **arr,int i,int j ){
    return *(*(arr+i)+j);
}

/* Each rating should be between 1 and 10 (inclusive). Input validation should be
implemented to enforce this. */

void inputEmployees(int **ratings, int numEmployees, int numPeriods){
    int i,j;
    for (i = 0; i < numEmployees; i++){
        for (j = 0; j < numPeriods; j++){
            printf("Enter rating for employee %d in period %d: ", i + 1,j + 1);
            // scanf("%d",((ratings+j)+i*numEmployees));
            scanf("%d",&ratings[i][j]);
            if (mat_el(ratings,i,j) < 1 || mat_el(ratings,i,j) > 10){
                printf("Invalid rating. Please enter a rating between 1 and 10.\n");
                j--;
            }
        }
    }
}

/* displays the performance ratings for each employee across all
evaluation periods. */

void displayPerformance(int **ratings, int numEmployees,int numPeriods){
    int i,j;
    for (i = 0; i < numEmployees; i++)
    {
        printf("Employee %d:\n", i + 1);
        for (j = 0; j < numPeriods; j++)
        {
            printf("    Period %d: %d\n", j + 1, ratings[i][j]);
        }
    }
}

/* calculate and return the index of the employee
with the highest average rating. */


void findEmployeeOfTheYear(int **ratings, int numEmployees, int numPeriods){
    // dynamically create temp arr to store all the employee's average ratings
    double *temp = malloc(numEmployees * sizeof(double));
    int i,j;
    // store average ratings in temp array of all employees
    for (i = 0; i < numEmployees; i++)
    {
        for (j = 0; j < numPeriods; j++)
        {
            temp[i]+=mat_el(ratings,i,j);
        }
        temp[i]/=numPeriods;
    }
    // find max average rating
    int max = 0;
    for (i = 0; i < numEmployees; i++)
    {
        if (temp[i] > temp[max])
            max = i;
    }
    // print the employee with the highest average rating
    printf("Employee of the year: %d\n", max + 1);

}

/* calculate and return the evaluation period with
the highest average rating across all employees. */

void findHighestRatedPeriod(int **ratings, int numEmployees, int numPeriods){
    // dynamically create temp arr to store all the employee's average ratings
    double *temp = malloc(numEmployees * sizeof(double));
    int i,j;
    // sum ratings of all employees of a certain period
    for (i = 0; i < numEmployees; i++)
    {
        for (j = 0; j < numPeriods; j++)
        {
            temp[i]+=mat_el(ratings,j,i);
        }
    }

    // find the highest rated period
    int max = 0;
    for (i = 0; i < numPeriods; i++)
    {
        if (temp[i] > temp[max])
            max = i;
    }
    // print the employee with the highest average rating
    printf("highest rated period: %d\n", max+1);
    
}

/* calculate and return the index of the employee
with the lowest average rating. */

void findWorstPerformingEmployee(int **ratings, int numEmployees, int numPeriods){
    // SAME AS findHighestRatedEmployee, just return the index of the employee with the lowest average rating

    // dynamically create temp arr to store all the employee's average ratings
    double *temp = malloc(numEmployees * sizeof(double));
    int i,j;
    // store average ratings in temp array of all employees
    for (i = 0; i < numEmployees; i++)
    {
        for (j = 0; j < numPeriods; j++)
        {
            temp[i]+=mat_el(ratings,i,j);
        }
        temp[i]/=numPeriods;
    }
    // find max average rating
    int min = 999;
    for (i = 0; i < numEmployees; i++)
    {
        if (temp[i] < temp[min])
            min = i;
    }
    // print the employee with the highest average rating
    printf("worst Employee: %d\n", min + 1);
}


// Function to free allocated memory for ratings
void freeRatings(int **ratings, int numEmployees) {
    for (int i = 0; i < numEmployees; i++) {
        free(ratings[i]); // Free each row
    }
    free(ratings); // Free the array of pointers
}

int strLen(char *str){
    int len = 0;
    while (*(str+len) != '\0'){
        len++;
    } return len;
}

void fancyPrint(char *str) {
    int len = strLen(str),i=0;
    printf("\n\n\n");
    while (i!=(len+4))
    {
        printf("*"); i++;
    }i=0;
    printf("\n");
    printf("* %s *\n",str);
    while (i!=(len+4))
    {
        printf("*");i++;
    }i=0;
    printf("\n\n\n");
}

int main(){

    struct employees emp;

    int numEmployees = 5;
    int numPeriods = 3;
    int i,j;
    
    // allocate memory for the ratings array
    // done by first creating an array of pointers, then each pointer points to an array of integers also allocated with memory
    emp.ratings = malloc(numEmployees * sizeof(int *));
    for (i = 0; i < numEmployees; i++) {
        emp.ratings[i] = malloc(numPeriods * sizeof(int));
    }

    fancyPrint("Input employees");
    inputEmployees(emp.ratings,numEmployees,numPeriods);

    fancyPrint("display Performance");
    displayPerformance(emp.ratings,numEmployees,numPeriods);

    fancyPrint(" employee of the year");
    findEmployeeOfTheYear(emp.ratings,numEmployees,numPeriods);
    
    fancyPrint(" highest rated period");
    findHighestRatedPeriod(emp.ratings,numEmployees,numPeriods);
    
    fancyPrint("Worst Performing Employee");
    findWorstPerformingEmployee(emp.ratings,numEmployees,numPeriods);
    



    freeRatings(emp.ratings,numEmployees);

 return 0;
}
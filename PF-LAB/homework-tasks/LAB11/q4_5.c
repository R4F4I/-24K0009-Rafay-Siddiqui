/*

? |Titanic Survival Analysis (Using Titanic CSV Dataset)
? |     * Download the Titanic dataset from Kaggle (CSV format). The dataset contains information about
? |     passengers, such as:
? |         o PassengerId, Pclass, Name, Sex, Age, SibSp, Parch, Ticket, Fare, Cabin, Embarked.
? |     * https://www.kaggle.com/datasets/yasserh/titanic-dataset?resource=download
? |
? |You are tasked with creating a C program to perform the following:
? |
? |     2. Load the Titanic dataset into a Data structure (e.g., a structure for passengers).
? |     3. Calculate the average age of all passengers.
? |     4. Find the survival rate based on sex (male vs female).
? |     
? |     5. Display the list of passengers who survived, along with their names, ages, and class.
? |     6. Display the list of passengers with missing cabin details.
? |
? |File Handling:
? |     * Input: Titanic data will be loaded from a CSV file.
? |     * Output: Write the results of the queries into a new CSV file or display them on the screen.
? |Steps:
? |     * Define a Passenger structure with appropriate fields to match the columns of the Titanic dataset.
? |     * Parse the CSV file using fopen() and fscanf() (or use string handling to manually parse rows).
? |     * Write functions to calculate statistics (average age, survival rate, etc.).
? |     * Store results or display them using the printf() function.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>
#include <string.h>

#define DATASET "Titanic-Dataset.csv"

struct Person
{
    int   PassengerId;
    int   Survived;
    int   Pclass;
    char  Name[95];
    char  Sex[50];
    int   Age;
    int   SibSp;
    int   Parch;
    char  Ticket[50];
    float Fare;
    char  Cabin[50];
    char  Embarked;
};

struct Person titanic_data[900];

int text_file_read(struct Person titanic_data){
    char line[100];
    FILE *fptr;
    fptr = fopen(DATASET,"r");

    if (fptr == NULL)
    {
        return -1;
    }

    //                                      V`` keep reading until EOF
    while (fgets(line,sizeof(line),fptr)!=NULL)
    {

    }
    



    fclose(fptr);
    return 0;
}


int main(){

    struct Person titanic_data;

    /* if (text_file_read(titanic_data)==-1){
        return 1;
    } */


   char test[50] = " helo , word,im,being,cutt";

   char *token[20];
   for (size_t i = 0; i < 4; i++)
   {
        *token = strtok(test,",");
        printf("%s-%s",token,test);
   }
   


 return 0;
}
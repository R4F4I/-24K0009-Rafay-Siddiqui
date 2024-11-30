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
    float Age;
    int   SibSp;
    int   Parch;
    char  Ticket[100];
    float Fare;
    char  Cabin[100];
    char  Embarked;
};


struct Person passenger[900];

int text_file_read(struct Person passenger[]){
    int i=0;
    char line[1024];
    FILE *fptr;
    fptr = fopen(DATASET,"r");

    if (fptr == NULL)
    {
        return -1;
    }

    // to skip header
    fgets(line, sizeof(line), fptr);

    while (fgets(line, sizeof(line), fptr)){
        if (
            fscanf(fptr,"%d,%d,%d,%[^,],%[^,],%f,%d,%d,%[^,],%f,%[^,],%c\n",
            &passenger[i].PassengerId,
            &passenger[i].Survived,
            &passenger[i].Pclass,
            passenger[i].Name,
            passenger[i].Sex,
            &passenger[i].Age,
            &passenger[i].SibSp,
            &passenger[i].Parch,
            passenger[i].Ticket,
            &passenger[i].Fare,
            passenger[i].Cabin,
            passenger[i].Embarked
            ) != EOF
        )
        {
            /* if (!(passenger[i].PassengerId > 0)) {passenger[i].PassengerId  = -1;}
            if (!(passenger[i].Survived    > 0)) {passenger[i].Survived     = -1;}
            if (!(passenger[i].Pclass      > 0)) {passenger[i].Pclass       = -1;}
            if (!(passenger[i].Age         > 0)) {passenger[i].Age          = -1;}
            if (!(passenger[i].SibSp       > 0)) {passenger[i].SibSp        = -1;}
            if (!(passenger[i].Parch       > 0)) {passenger[i].Parch        = -1;}
            if (!(passenger[i].Fare        > 0)) {passenger[i].Fare         = -1;}


            if (strlen(passenger[i].Name)    ==    0) {strcpy (passenger[i].Name,"unknown");}
            if (strlen(passenger[i].Sex)     ==    0) {strcpy (passenger[i].Sex,"unknown");}
            if (strlen(passenger[i].Ticket)  ==    0) {strcpy (passenger[i].Ticket,"unknown");}
            if (strlen(passenger[i].Cabin)   ==    0) {strcpy(passenger[i].Cabin,"unknown");}
            if (passenger[i].Embarked        == '\0') {passenger[i].Embarked='X';} */

            i++;
        }
        
       
    }

    printf("i is : %d\n",i);

    fclose(fptr);
    return i;
}


int main(){
    int count,i;
    //struct Person passenger[900];

    /* if (text_file_read(passenger)==-1){
        return 1;
    } */


   
   /*char test[50] = " helo , word,im,being,cutt";
 char *token[20];
   for (size_t i = 0; i < 4; i++)
   {
        *token = strtok(test,",");
        printf("%s-%s",token,test);
   }
    */

   printf("getting values into memory...\n");

   // getting values into memory
   count = text_file_read(passenger);
   printf("done...\n");
   if (count==-1)
   {
    return 1;
   } 

   
   printf("successful!, count = %d\n",count);

   // validating data transfer

    printf("validating data transfer...\n");
   for (i = 0; i < count; i++)
   {
        //printf("star\n");
        printf("%d,%d,%d,%s,%s,%d,%d,%d,%s,%f,%s,%c \n",
            passenger[i].PassengerId,
            passenger[i].Survived,
            passenger[i].Pclass,
            passenger[i].Name,
            passenger[i].Sex,
            passenger[i].Age,
            passenger[i].SibSp,
            passenger[i].Parch,
            passenger[i].Ticket,
            passenger[i].Fare,
            passenger[i].Cabin,
            passenger[i].Embarked
        ); 
   }

   
   
    printf("successful!\n");

 return 0;
}
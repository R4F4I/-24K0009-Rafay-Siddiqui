/*
? |Create a program that calculates the final grade of a student based on multiple criteria, 
? |including attendance, assignment scores, and exam results, using nested decision structures. 

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A

*/

 /*
    Attendance: 20%
    Assignment Scores: 40%
    Exam Result: 40%

*/


//header
#include <stdio.h>

//start main function
int main (){
    
    // declaration
    int grade, attendance, scores, exam_result;

    // in %
    int attendance_coff = 20;
    int scores_coff = 40;
    int exam_coff = 40;


    // taking inputs
    printf("enter attendance:");
    scanf("%d",&attendance);
    printf("enter assignment scores:");
    scanf("%d",&scores);
    printf("enter exam result:");
    scanf("%d",&exam_result);


    // processing

   

   grade = (attendance_coff/100)*attendance + (scores_coff/100)*scores + (exam_coff/100)*exam_result;


    // output

    printf("\nYour final grade is: %d",grade);


    return 0;

}
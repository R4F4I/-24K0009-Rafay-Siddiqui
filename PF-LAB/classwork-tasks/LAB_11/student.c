#include <stdio.h>
#include <string.h>


typedef struct 
{   
    char depart_name[100];
}Department ;

typedef struct 
{

    char name[100];
    char campus[100];
    Department dep;    

} University;

typedef struct 
{
    int roll;
    char name[100];
    University uni;
} Student;


typedef struct 
{
    char name[100];
    char courses[100];
}Teacher ;


void show_student_on_same_dep(Student S1,Student S2){
    if (!strcmp(S1.uni.dep.depart_name,S2.uni.dep.depart_name))
    {
        printf("Both students belong to the same department: %s\n", S1.uni.dep.depart_name);
    } else {
        printf("The students belong to different departments.\n");
    }
    
}

int main(){

    Student     S1,S2,S3;

    University  U1;
    Department  D1;
    
    Teacher     T1;
    
    
    strcpy(U1.name,"FAST");
    strcpy(U1.campus,"main karachi");
    strcpy(U1.dep.depart_name,"AI");
    
    strcpy(S1.name,"rafay");
    S1.roll=9;
    strcpy(S1.uni.name,U1.name);
    

    printf("%s, %s, %s\n",U1.name,U1.campus,U1.dep.depart_name);
    printf("%s, %d, %s\n",S1.name,S1.roll,S1.uni.name);
    
    

}
/*
Write a C program that simulates a simple menu-driven system for geometric
calculations. The user can choose one of the following options:
    
    1. Calculate the area of a circle.
    2. Calculate the area of a rectangle.
    3. Calculate the area of a triangle.
    4. Exit.
 */


# include <stdio.h>

int main (){

    int option;
    double val1;
    double val2;
    double area;

    printf("Shape are calculator\n1. Calculate the area of a circle.\n2. Calculate the area of a rectangle.\n3. Calculate the area of a triangle.\n4. Exit.\nPlease choose one of the following options: ");
    scanf("%d",&option);
    printf("\n\n");

    switch (option)
    {
    case 1:
    //---Circle Area Calculator---
        printf("---Circle Area Calculator---\n");
        printf("Enter the radius of circle:");
        scanf("%lf",&val1);

        area = 2*3.14159*val1;

        

        break;
    case 2:
    //---rectangle Area Calculator---
        printf("---rectangle Area Calculator---\n");
        //input
        printf("Enter the length of rectangle:");
        scanf("%lf",&val1);
        printf("Enter the breadth of rectangle:");
        scanf("%lf",&val2);

        // calculating area
        area = val1*val2;

        break;
    case 3:
    //---Triangle Area Calculator---
        printf("---Triangle Area Calculator---\n");
        //input
        printf("Enter the length of triangle:");
        scanf("%lf",&val1);
        printf("Enter the height of triangle:");
        scanf("%lf",&val2);

        // calculating area
        area = 0.5*val1*val2;

        break;
    
    default:
        break;
    }

    //output
    printf("area is: %.2lf",area);

    return 0;
}
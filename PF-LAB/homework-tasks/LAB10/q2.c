/*

? |Define a structure to represent a point in 2D space with x and y coordinates. Implement
? |functions to calculate the distance between two points and to check if a point lies within
? |a specific rectangular boundary.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <stdio.h>
#include <math.h>

struct point
{
    int x;
    int y;
};

// returns minimum of two numbers
int min(int a, int b){
    if(a < b) return a;
    else return b;
}

// returns maximum of two numbers
int max(int a, int b){
    if(a > b) return a;
    else return b;
}

float distance(struct point p1, struct point p2){
    int distance = pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2);
    return sqrt(distance);
}

int specific_boundary(struct point p,struct point p1, struct point p2,struct point p3, struct point p4){
    //  minimum x-coordinate
    int minX = min(min(p1.x, p2.x), min(p3.x, p4.x));
    
    //  maximum x-coordinate
    int maxX = max(max(p1.x, p2.x), max(p3.x, p4.x));
    
    //  minimum y-coordinate
    int minY = min(min(p1.y, p2.y), min(p3.y, p4.y));
    
    //  maximum y-coordinate
    int maxY = max(max(p1.y, p2.y), max(p3.y, p4.y));

    // Check if point is within the box (inclusive of boundaries)
    return (p.x >= minX && p.x <= maxX && p.y >= minY && p.y <= maxY);
}

int main(){

    struct point p  = {6, 5};
    struct point p1 = {0, 0};
    struct point p2 = {1, 10};
    struct point p3 = {5,4};
    struct point p4 = {6,3};


    printf("the distance b/w p1 and p2 is %f\n",distance(p1,p2));

    printf("point p is ");
    (specific_boundary(p3,p1,p2,p,p4)) ? printf("") : printf("not ");
    printf("in specified region");
 return 0;
}
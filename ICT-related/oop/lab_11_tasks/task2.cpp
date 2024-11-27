/*

? |Create a C++ program with a Geometry class that demonstrates method overloading by calculating the
? |area of different shapes. The Geometry class should have three overloaded calculateArea methods: one
? |that takes a single double parameter to calculate the area of a square (side * side), one that takes two
? |double parameters to calculate the area of a rectangle (length * width), and one that takes a double
? |parameter representing the radius to calculate the area of a circle (π * radius * radius). In the main
? |function, create a Geometry object and call each overloaded calculateArea method with the appropriate
? |arguments to show how method overloading works for different shapes.

* Name:         Rafay Siddiqui
* roll number:  24k-0009
* section:      BAI-1A


*/

#include <iostream>

using namespace std;

class Geometry {
public:
    // Method to calculate the area of a square
    double calculateArea(double side) {
        return side * side;
    }

    // Method to calculate the area of a rectangle
    double calculateArea(double length, double width) {
        return length * width;
    }

    // Method to calculate the area of a circle
    double calculateArea(double radius, bool isCircle) {
        const double PI = 3.14159; // Define (pi)
        double area;
        if (isCircle)
        {
            area = PI * radius * radius; // Area of the circle
        }
        return area;
    }
};

int main() {
    Geometry geometry;

    // Calculate area of a square
    double squareSide = 5.0;
    double squareArea = geometry.calculateArea(squareSide);
    cout << "Area of the square with side " << squareSide << " is: " << squareArea << endl;

    // Calculate area of a rectangle
    double rectangleLength = 4.0;
    double rectangleWidth = 6.0;
    double rectangleArea = geometry.calculateArea(rectangleLength, rectangleWidth);
    cout << "Area of the rectangle with length " << rectangleLength << " and width " << rectangleWidth << " is: " << rectangleArea << endl;

    // Calculate area of a circle
    double circleRadius = 3.0;
    double circleArea = geometry.calculateArea(circleRadius,true);
    cout << "Area of the circle with radius " << circleRadius << " is: " << circleArea << endl;

    return 0;
}
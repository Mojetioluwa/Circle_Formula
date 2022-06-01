// Calculate the Diameter, Circumference and Area of a circle

// Allows program to perfrom input and output
#include <iostream>

// Program uses names from the std namespace
using namespace std;

// Function main begins program execution
int main ()
{
    // Variable declarations

    // radius to perform operations on
    float radius;

    // Pi variable declared
    float pi = 3.14159;

    // Operations to perform
    float diameter, circumference, area;

    // Prompts user for a radius as a data
    cout << "Enter the radius of the circle:  \n";

    // Reads the radius into the variable container
    cin >> radius;


    // Multiplies radius by 2; stores result in diameter
    diameter = radius * 2;

    // Calculates the circumference of the circle; stores result in circumference
    circumference = 2 * pi * radius;

    // Calculate the area of the circle ; stores result in area
    area = pi * (radius * radius);

    // Print the diameter of the circle
    cout << "The DIAMETER of the circle is  " << diameter << "cm" << "\n";

    // Print the circumference of the circle
    cout << "The CIRCUMFERENCE of the circle is  " << circumference << "cm" << "\n";

    // Print the area of the circle
    cout << "The AREA of the circle is  " << area << "cmsqr" << "\n";

    // Ends the main function
    return 0;

}
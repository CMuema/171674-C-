#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.141592;

// Function to calculate area of cylinder
double calculateArea(double radius, double height) {
    return 2 * PI * radius * (height + radius);
}

// Function to calculate volume of cylinder
double calculateVolume(double radius, double height) {
    return PI * pow(radius, 2) * height;
}

int main() {
    double radius, height;

    // Getting radius and height from user
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Calculating area and volume
    double area = calculateArea(radius, height);
    double volume = calculateVolume(radius, height);

    // Displaying area and volume
    cout << "The area of the cylinder is: " << area << endl;
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}
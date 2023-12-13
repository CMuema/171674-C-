#include<iostream>
using namespace std;

// Function to perform division and return the quotient
double division(double numerator, double denominator) {
    if (denominator != 0) {
        return numerator / denominator;
    } else {
        // Handle division by zero
        cerr << "Error: Division by zero." <<endl;
        return 0.0;
    }
}

int main() {
    // Prompt user to enter two numbers
    cout << "Enter the numerator: ";
    double numerator;
    cin >> numerator;

    cout << "Enter the denominator: ";
    double denominator;
    cin >> denominator;

    // Call the division function and output the result
    double result = division(numerator, denominator);
    cout << "Quotient: " << result << endl;

    return 0;
}

/*This program defines a `division` function that takes two `double` values as parameters and returns the result of the division. The `main` function prompts the user to enter two numbers, calls the `division` function, and outputs the quotient. The program also handles division by zero by displaying an error message in case the denominator is zero.*/
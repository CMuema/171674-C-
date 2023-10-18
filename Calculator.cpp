//A C++ Calculator
#include<iostream>
using namespace std;

int main(){
    //Variable Declaration
    int a, b, add, multiply, subtract, divide;
    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;
    add=a+b;//Addition of a and b
    cout<<"Sum is: "<<add<<endl;
    multiply=a*b;//Multiplication of a and b
    cout<<"Product is: "<<multiply<<endl;
    divide=a/b;//Division of a and b
    cout<<"Quotient is: "<<divide<<endl;
    subtract=a-b;//Subtraction of a and b
    cout<<"Difference is: "<<subtract<<endl;
    return 0;
}
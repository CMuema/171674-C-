#include<iostream>
using namespace std;

//Global Variable declaration
int globalVar = 30;
const int age = 25; // Constant variable, value will not change
void myFunction(int num1, int num2)
{//Function code block

int localVar = 20; // Local variable declaration and initiaalization
int sum = num1 + num2;
cout<< "Local variable inside my Function is " << localVar<<endl;
cout<<"Sum = "<<sum<<endl;
}

int main()
{
    //age = 29;//should not work
    //Invoking/calling the function myFunction
    myFunction(2,3);

    cout<<"Global variable value ="<< globalVar<<endl; //This is expected to work because it is a global variable
    cout<<"Age ="<<age;
    return 0;
}
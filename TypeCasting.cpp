/*Implicit(Automatic conversion) vs 
 Explicit(Operator conversion)*/
#include<iostream>
using namespace std;

int main()
{
double num1 = 3.78; //Declare and initialise a double variable
int num2; //Decclare an integer available
cout<< "Implicit Type casting"<< endl;
num2 = num1; //Implicit type casting, automatic conversion
cout<< "Value of num2: "<< num2 << endl;
cout<< "\n\nExplicit Type Casting" << endl;
cout<< "Before Explicit conversion: \n";
cout<< "num1 before explicit conversion: "<< num1 <<endl;
num2 = (int)num1;//Explicit type casting(operator conversion)

//Explicit conversion(operator function)
num2 = static_cast<int>(num1);//Static cast operator is used to convert the value of
num2 = static_cast<int>(num1);//
num2 = static_cast<int>(num1);//
num2 = static_cast<int>(num1);//
cout<< "num1 after explicit conversion: "<< num1 <<endl;
cout<< "num2 after explicit conversion: "<< num2 <<endl;
return 0;
}
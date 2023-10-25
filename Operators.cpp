//logical, Arithmetical and Comparison operators
#include<iostream>
using namespace std;
int main()\
{
//Arithmetic Operators
int num1=20, num2=40;//Declare two integer variables
bool var1=true, var2=false;//Declare and initialise 'Boolean' variables
//Addition operator '+'
cout<< "Sum of the two numbers: "<<num1+num2<<endl;
//Subtraction operator '-'
cout<< "Difference of th two numbers: "<<num1-num2<<endl;
//Multiplication operator '*'
cout<< "Product of the two numbers: "<<num1*num2<<endl;
//Quotient operator '/'
cout<< "Quotient of two numbers: "<<float(num1/num2)<<endl;
//Modulus operator
cout<< "Remainder when divided by 2: "<<num1%num2<<endl;
//Increment operator '++
cout<< "Increment num1 by 1: "<<++num1<<endl;
//Decrement operator '--'
cout<< "Decrement num1 by 1: "<<--num1<<endl;
//****Comparison operators****
//Greater than operator '>'
cout<<num1<< " 'greater than' "<<num2<< " returns "<<(bool)(num1>num2)<<endl;
//Less then operator '<'
cout<<num1<< " 'less than' "<<num2<< " returns "<<(bool)(num1<num2)<<endl;
//Equal to operator '=='
cout<<num1<< " 'equal to' "<<num2<< " returns "<<(bool)(num1==num2)<<endl;
//Not equal to operator '!='
cout<<num1<< " 'not equal to' "<<num2<< " returns "<<(bool)(num1!=num2)<<endl;
//****Boolean operators****
//Boolean operator '&&'
cout<<var1<< "&&"<<var2<<"="<<(var1&&var2)<<endl;
//Boolean operator '||'
cout<<var1<< "||"<<var2<<"||"<<(var1||var2)<<endl;
//Boolean operator '!'
cout<<var1<< "!"<<var1<<"="<<(!var1)<<endl;

return 0;
}
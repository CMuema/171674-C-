#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout<< "Enter first number ";
    cin>>a;
    cout<< "Enter second number ";
    cin>>b;
    cout<< "Enter third number ";
    cin>>c;
    if(a>=b && a>=c)
    {
        cout<< "The greatest of the three is: "<< a;
    }
    else if(b>=a && b>=c)
    {
        cout<<"The greatest of the three is: "<< b;
    }
    else
    {
        cout<<"The greatest of the three is "<<c;
    }

}

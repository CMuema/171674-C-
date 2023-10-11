#include <iostream>
using namespace std;
int main(){
    float PI, a, v, r, h;
    char answer;
    PI=3.141592;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<"Enter height: ";
    cin>>h;

    a=(2*PI*r*h)+(2*PI*r*h);
    v=PI*(r*r*h);

    cout<<"The area of the cylinder is \n"<<a;
    cout<<"and the Volume of the cylinder is: "<<v;
    return 0;

}
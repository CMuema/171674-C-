#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Please enter the age: ";
    cin>>age;
    string message=(age>=4)?"Passed":"Failed";
    cout<<message;

    /*if (age>=4){ //Execute this code if condition is true
        cout<<"Admitted! Proceed to Registration"<<endl;
    }
    else{ //Code to execute if condition is false
        cout<<"Declined! Minimum Age not reached. Huyu ni mtoto bado."<<endl;
    }*/
    
    return 0;
}
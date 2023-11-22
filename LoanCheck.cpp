#include<iostream>
#include<string>
using namespace std;

int main(){
    int age, bankBalance, crbStatus, loyaltyTime;
    string fullName;
    cout<<"Enter your Full Name: ";
    cin>>fullName;
    cout<<endl;
    cout<<"Enter Your Age: ";
    cin>>age;
    cout<<endl;
    cout<<"Enter Bank Balance: ";
    cin>>bankBalance;
    cout<<endl;
    cout<<"Enter CRB Status (1 for Good, 2 for Bad): ";
    cin>>crbStatus;
    cout<<endl;
    cout<<"Enter Loyalty Time in Months: ";
    cin>>loyaltyTime;
    cout<<endl;
    // Displaying the Information Entered by User.
    cout<<endl<<endl<<"Your Personal Details are as Follows:"<<endl;
    cout<<"Full Name : "<<fullName<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Bank Balance : RM "<<bankBalance<<endl;
    if(crbStatus==1){
        cout<<"CRB Status : Good"<<endl;
        }else{
            cout<<"CRB Status : Bad"<<endl;
            }
            cout<<"Loyalty Time : "<<loyaltyTime<<" months"<<endl;
            return 0;
            
}
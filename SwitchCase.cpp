#include<iostream>
using namespace std;

int main(){
    int opt;

    cout<<"Hi. This is your DBIT Sem 1 Timetable (Sep-Dec 2023)";
    cout<<"\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday"<<endl<<endl;
    cout<<"Please select day of choice (e.g. 1, 2, 3, etc...)"<<endl;
    cin>>opt;

    switch(opt){
        case 1:
        cout<<"Monday Classes\n...................."<<endl;
        cout<<"\t1. DBIT 1106: Math for Biz"<<endl;
        cout<<"\t2. DBIT 1102: Intro to Programming"<<endl;
        break;
        case 2:
        cout<<"Tuesday Classes\n......................"<<endl;
        cout<<"\t2. DBIT 1102: Intro to Programming"<<endl;
        cout<<"\t1. DBIT 1104: Ethics"<<endl;
        break;
        case 3:
        cout<<"Wednesday Classes\n....................."<<endl;
        cout<<"\t1. DBIT 1106: Math for Biz"<<endl;
        cout<<"\t2. DBIT 1105: Theology"<<endl;
        cout<<"\t3. DBIT 1101: Fundamentals of IT"<<endl;
        break;
        case 4:
        cout<<"Thursday Classes\n......................"<<endl;
        cout<<"\t1. DBIT 1105: Accounting"<<endl;
        cout<<"\t2. DBIT 1102: Introduction to Programming"<<endl;
        break;
        case 5:
        cout<<"Friday Classes\n........................"<<endl;
        cout<<"\t1. DBIT 1103: Business Computing"<<endl;
        break;
        default:
        cout<<"Invalid Input";
        //End of switch case
    }
    return 0;
}

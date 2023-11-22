#include<iostream>
using namespace std;
int main() 
//Declaration of variables
{
    int choice;
    int foodCost;
    int totalBill = 0;
//Display of welcome greeting to customer
    cout<<"Welcome! Below Our Menu of Delights";
    cout<<"\n1.Ugali and Matumbo @ 120/=\n2.Chapati and Beans @ 130/=\n3.Ugali and Beef Stew @ 150/=\n4.French Fries @ 200/=\n5.Soft Drink @ 100/=\n6.Chicken Soup @ 180/="<<endl<<endl;
    cout << "Enter your choice of food combo: ";
    cin >> choice;

    switch(choice) //Function calculating total cost of food combo
    {
        case 1:
            foodCost = 120;
            totalBill += foodCost;
            cout << "Selected Food Items: Ugali and Matumbo\nCost: " << foodCost << endl;
            break;
        case 2:
            foodCost = 130;
            totalBill += foodCost;
            cout << "Selected Food Items: Chapati and Beans\nCost: " << foodCost << endl;
            break;
        case 3:
            foodCost = 150;
            totalBill += foodCost;
            cout << "Selected Food Items: Ugali and Beef Stew\nCost: " << foodCost << endl;
            break;
        case 4:
            foodCost = 200;
            totalBill += foodCost;
            cout << "Selected Food Items: French Fries\nCost: " << foodCost << endl;
            break;
        case 5:
            foodCost = 100;
            totalBill += foodCost;
            cout << "Selected Food Items: Soft Drink\nCost: " << foodCost << endl;
            break;
        case 6:
            foodCost = 180;
            totalBill += foodCost;
            cout << "Selected Food Items: Chicken Soup\nCost: " << foodCost << endl;
            break;
        default:
            cout << "Invalid Choice!";
            return 0;
    }

    cout << "Total Bill: " << totalBill << "KSh" << endl; //Display of total cost

    return 0;
}
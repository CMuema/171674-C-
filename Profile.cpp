/*
This C++ program creates a simple user profile
accepting your personal details
1 - First Name
2 - Last Name
3 - Full Name
4 - Favorite Meal
5 - Favorite Movie
*/
#include<iostream>
#include<string>

using namespace std;
int main()
{
    //Declaring string variable to hold data in memory
    string firstName, lastName, fullName, favoriteMeal, favoriteMovie;
    cout<< "Enter your First Name: "<<endl;
    getline(cin, firstName);
    cout<< "Enter your Last Name: "<<endl;
    getline(cin, lastName);
    cout<< "Enter your Full Name: "<<endl;
    getline(cin, fullName);
    cout<< "Enter your Favorite Meal: "<<endl;
    getline(cin, favoriteMeal);
    cout<< "Enter your Favorite Movie: "<<endl;
    getline(cin, favoriteMovie);

    //Creation of space
    cout<< "\n\n";

    //Output
    cout<< "First Name: "<<firstName<<endl;
    cout<< "Last Name: "<<lastName<<endl;
    cout<< "Full Name: "<<fullName<<endl;
    cout<< "Favorite Meal: "<<favoriteMeal<<endl;
    cout<< "Favorite Movie: "<<favoriteMovie<<endl;
    return 0;
}
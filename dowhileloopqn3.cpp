#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int num;

    cout << "Enter integers separated by a space. Enter 0 to stop." << endl;

    do {
        cin >> num;
        sum += num;
    } while (num != 0);

    cout << "The sum of the numbers you entered is: " << sum << endl;

    return 0;
}
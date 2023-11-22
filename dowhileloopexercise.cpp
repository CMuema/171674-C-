#include <iostream>
using namespace std;
int main() {
    int number = 12;

    do {
        if (number % 2 == 0) {
            cout << number << " ";
        }
        number++;
    } while (number <= 50);

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int start = 12;
    int end = 28;
    int step = 2;

    for(int i = start; i <= end; i += step) {
        cout << i << endl;
    }

    return 0;
}
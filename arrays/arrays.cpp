#include <iostream>
using namespace std;

int main() {
    int values[3];

    values[0] = 88;

    cout << values[0] << endl;

    double numbers[5] = {4.5,4.2,7.8,23.2,23.1};

    for (int i = 0; i <5; i++) {
        cout << numbers[i] << endl;
    }


    return 0;
}
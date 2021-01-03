#include <iostream>
using namespace std;

void change(double &value) {
    value = 12.3;
}

int main() {
    int value1 = 8;
    int &value2 = value1;
    value2 = 10;

    cout << value1 << endl;
    cout << value2 << endl;

    double value = 127.4;
    change(value);

    cout << value << endl;
    return 0;
}
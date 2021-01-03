#include <iostream>
using namespace std;


void manipiulate(double *p_value) {
    *p_value = 10.0;
    cout << "value of int in manipulate" << *p_value << endl;
}

int main() {

    int n = 8;

    int* p_n = &n;

    n = 9;

    cout << n << endl;
    cout << p_n << endl;

    cout << "Dereferenced: " << *p_n << endl;
    cout << "==========================" << endl;

    double dValue = 123.4;
    manipiulate(&dValue);

    return 0;
}
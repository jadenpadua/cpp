#include <iostream>
using namespace std;

int main() {

    int value = 7;

    do {
        cout << "Hello" << endl;
    } while(value < 5);

    const string password = "Hello";

    string input;

    do {
        cout << "Enter your password: " << flush;
        cin >> input;

        if(input != password) {
            cout << "Access denied." << endl;
        }
    } while (input != password);

    cout << "password accepeted" << endl;

    return 0;
}
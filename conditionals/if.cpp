#include <iostream>
using namespace std;

int main() {

    string password = "hello";

    cout << "Enter your password: " << flush;

    string input;
    cin >> input;

    if (input == password) {
        cout << "Password Accepted" << endl;
    }

    else {
        cout << "Password denied" << endl;
    }
    
    return 0;
}
#include <iostream>
#include <sstream>
using namespace std;

int main() {

    string name = "Bob";
    int age = 32;

    stringstream ss;

    ss << "Name is: ";
    ss << name;
    ss << "age is : ";
    ss << age;

    cout << ss.str() << endl;

    return 0;
}
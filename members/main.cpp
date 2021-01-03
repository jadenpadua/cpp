#include <iostream>
#include "Cat.h"
using namespace std;

int main()
{
    cout << "Starting Program...." << endl;

    {
        Cat cat1;
        Cat cat2("Bobby", 34);
        Cat cat3("Boasdby", 12);
        cout << cat2.toString() << endl;

        cout << &cat2;
        cout << &cat3;
    }

    cout << "Ending program..." << endl;
    return 0;
}
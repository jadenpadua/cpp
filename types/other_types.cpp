#include <iostream>
using namespace std;

int main() {
    bool bValue = true;
    cout << bValue << endl;

    char cValue = '7';
    cout << (int)cValue << endl;

    cout << sizeof(char) << endl;

    wchar_t wValue = 'i';
    cout << sizeof(wchar_t) << endl;

    return 0;
}
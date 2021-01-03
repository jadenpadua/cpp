#include <iostream>
using namespace std;

int main() {

    char text[] = "hello";

    int n = sizeof(text)-1;

    char *p_start = text;
    char *p_end = text + n - 1;

    while(p_start < p_end) {
        
        char temp = *p_start;
        *p_start = *p_end;
        *p_end = temp;

        p_start++;
        p_end--;
    }

    cout << text << endl;

    return 0;
}
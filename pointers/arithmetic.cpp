#include <iostream>
using namespace std;

int main()
{

    const int n = 4;

    string texts[n] = {"one", "two", "three", "four"};

    string *p_texts = texts;

    p_texts = p_texts + 1;

    string *pEnd = &texts[n - 1];

    while (p_texts != pEnd)
    {
        cout << *p_texts << endl;
        p_texts++;
    }

    p_texts = &texts[0];

    long elements = pEnd - p_texts;

    cout << *p_texts << endl;

    cout << elements << endl;

    p_texts = &texts[0];
    p_texts += n/2;
    cout << *p_texts << endl;

    return 0;
}
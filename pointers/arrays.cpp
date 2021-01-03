#include <iostream>
using namespace std;

int main()
{

    string texts[] = {"one", "two", "three"};
    int n = sizeof(texts) / sizeof(string);

    string *p_texts = texts;

    for (int i = 0; i < n; i++)
    {
        cout << p_texts[i] << " " << flush;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *p_texts << " " << flush;
        p_texts = p_texts + 1;
    }

    string *p_element = texts;
    string *p_end = &texts[n - 1];

    while (true)
    {
        cout << *p_element << " " << flush;

        if (p_element == p_end)
        {
            break;
        }

        p_element++;
    }

    cout << endl;

    return 0;
}
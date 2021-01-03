#include <iostream>
using namespace std;

int main()
{
    int numberCats = 5;
    int numberDogs = 7;
    cout << "Number of Cats: " << numberCats << endl;
    cout << "Number of Dogss: " << numberDogs << endl;

    cout << "Number of Cats and Dogs: " << numberCats + numberDogs << endl;

    cout << "Getting a new dog..." << endl;

    numberDogs = numberDogs + 1;

    cout << "New number of dogs: " << numberDogs << endl;
    return 0;
}
#ifndef CAT_H_
#define CAT_H_

#include <iostream>

using namespace std;

class Cat
{

private:
    bool happy;
    string name;
    int age;

public:
    Cat();
    Cat(string newName) {name = newName; age = 0;};
    Cat(string newName, int newAge);
    ~Cat();

    string toString();
    string getName();

    void makeHappy();
    void makeSad();
    void speak();
    void setName(string newName);
};
#endif
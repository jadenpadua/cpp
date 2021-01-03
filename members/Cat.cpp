#include <iostream>
#include <sstream>

#include "Cat.h"

using namespace std;

Cat::Cat()
{
   name = "";
   age = 0;
}

Cat::Cat(string name, int age): name(name), age(age)
{

    // this->name = name;
    // this->age = age;

    // cout << this << endl;
}

Cat::~Cat()
{
    cout << "Cat Destroyed" << endl;
}

string Cat::toString()
{
    stringstream ss;
    ss << "Name: ";
    ss << name;
    ss << "age: ";
    ss << age;

    return ss.str();
}

void Cat::speak()
{

    if (happy)
    {
        cout << "Meoww!" << endl;
    }

    else
    {
        cout << "SSSSS" << endl;
    }
}

void Cat::makeHappy()
{
    happy = true;
}

void Cat::makeSad()
{
    happy = false;
}

void Cat::setName(string newName)
{
    name = newName;
}

string Cat::getName()
{
    return name;
}
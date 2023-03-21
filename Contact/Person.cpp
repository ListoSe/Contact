#include "Person.h"

Person::Person()
{
    num = "Num";
    surname = "Person";
    address = "Address";
}

Person::Person(string num, string surname, string address)
{
    this->num = num;
    this->surname = surname;
    this->address = address;
}

Person::~Person()
{
    cout << "~Person" << endl;
}

void Person::show() const
{
    cout << "Num: " << num << endl;
    cout << "SurName: " << surname << endl;
    cout << "Address: " << address << endl;
}

string Person::type() const
{
    return "Person";
}

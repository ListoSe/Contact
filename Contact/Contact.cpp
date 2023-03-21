#include "Contact.h"

Contact::Contact()
{
    num = "No";
    surname = "No";
    address = "No";
}

Contact::Contact(string num, string surname, string address)
{
    this->num = num;
    this->surname = surname;
    this->address = address;
}

Contact::~Contact()
{
    cout << "~Contact" << endl;
}

void Contact::setNum(string num)
{
    this->num = num;
}

void Contact::setSurName(string surname)
{
    this->surname = surname;
}

void Contact::setAddress(string address)
{
    this->address = address;
}

string Contact::getNum() const
{
    return num;
}

string Contact::getSurName() const
{
    return surname;
}

string Contact::getAddress() const
{
    return address;
}

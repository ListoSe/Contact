#include "Friend.h"

Friend::Friend()
{
	num = "Num";
	surname = "Surname";
	address = "Address";
	born = Date();
}

Friend::Friend(string num, string surname, string address, Date born)
{
	this->num = num;
	this->surname = surname;
	this->address = address;
	this->born = born;
}

Friend::~Friend()
{
	cout << "~Friend" << endl;
}

void Friend::setBorn(Date born)
{
	this->born = born;
}

Date Friend::getBorn() const
{
    return born;
}

void Friend::show() const
{
	cout << "Num: " << num << endl;
	cout << "Company: " << surname << endl;
	cout << "Address: " << address << endl;
	cout << "Born: " << born << endl;
}

string Friend::type() const
{
	return "Friend";
}

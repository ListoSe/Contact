#pragma once
#include <iostream>
#include <string>
using namespace std;
class Contact
{
protected:
	string num;
	string surname;
	string address;
public:
	Contact();
	Contact(string num, string surname, string address);
	virtual ~Contact();

	void setNum(string num);
	void setSurName(string surname);
	void setAddress(string address);

	string getNum()const;
	string getSurName()const;
	string getAddress()const;

	virtual void show()const = 0;
	virtual string type()const = 0;
};


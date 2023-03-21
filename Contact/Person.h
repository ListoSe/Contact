#pragma once
#include "Contact.h"
class Person:public Contact
{
public:
	Person();
	Person(string num, string surname, string address);
	~Person();

	virtual void show()const override;
	virtual string type()const override;
};


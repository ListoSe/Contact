#include "Colleague.h"

Colleague::Colleague()
{
	num = "Num";
	surname = "Surname";
	address = "Address";
	faq = "Faq";
	manager = "Manager";
}

Colleague::Colleague(string num, string surname, string address, string faq, string manager)
{
	this->num = num;
	this->surname = surname;
	this->address = address;
	this->faq = faq;
	this->manager = manager;
}

Colleague::~Colleague()
{
	cout << "~Colleague" << endl;
}

void Colleague::setFaq(string faq)
{
	this->faq = faq;
}

void Colleague::setManager(string manager)
{
	this->manager = manager;
}

string Colleague::getFaq() const
{
	return faq;
}

string Colleague::getManager() const
{
	return manager;
}

void Colleague::show() const
{
	cout << "Num: " << num << endl;
	cout << "Company: " << surname << endl;
	cout << "Address: " << address << endl;
	cout << "Faq: " << faq << endl;
	cout << "Manager: " << manager << endl;
}

string Colleague::type() const
{
	return "Colleague";
}

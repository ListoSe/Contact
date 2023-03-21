#pragma once
#include "Contact.h"
class Colleague:public Contact
{
protected:
	string faq;
	string manager;
public:
	Colleague();
	Colleague(string num, string surname, string address, string faq, string manager);
	~Colleague();

	void setFaq(string faq);
	void setManager(string manager);

	string getFaq()const;
	string getManager()const;

	virtual void show()const override;
	virtual string type()const override;
};


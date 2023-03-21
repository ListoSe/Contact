#pragma once
#include "Contact.h"
#include "Date.h"
class Friend:public Contact
{
protected:
	Date born;
public:
	Friend();
	Friend(string num, string surname, string address, Date born);
	~Friend();

	void setBorn(Date born);

	Date getBorn()const;

	virtual void show()const override;
	virtual string type()const override;
};


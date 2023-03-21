#pragma once
#include "Contact.h"
#include "Person.h"
#include "Colleague.h"
#include "Friend.h"
#include <vector>
#include <algorithm>
class Admin
{
private:
	vector <Contact*> admin;
public:
	~Admin();
	void addContact(Contact* obj);
	void eraseContact(Contact* obj, int element);
	void showListContact();
	void sortByName();
	void changeNameByName(string surname);
	void showByType(string type) const;
};
bool sortType(Contact* a, Contact* b);

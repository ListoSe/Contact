#include "Admin.h"

Admin::~Admin()
{
	for (int i = 0; i < admin.size(); i++)
	{
		admin[i]->~Contact();
	}
	cout << "~Admin\n";
}

void Admin::addContact(Contact* obj)
{
	admin.push_back(obj);
}

void Admin::eraseContact(Contact* obj,int element)
{
	cout << "Element: " << endl;
	cin >> element;
	admin.erase(admin.begin() + element - 1);
}

void Admin::showListContact()
{
	for (int i = 0; i < admin.size(); i++)
	{
		cout << "\t#" << i + 1 << endl;
		admin[i]->show();
	}
}

void Admin::sortByName()
{
	sort(admin.begin(), admin.end(), sortType);
}

void Admin::changeNameByName(string surname)
{
	for (int i = 0; i < admin.size(); i++) {
		if (admin[i]->type() == surname) {
			cout << " surname: " << admin[i]->getSurName() << endl;
			cin >> surname;
			 admin[i]->setSurName(surname);
		}
	}
}

void Admin::showByType(string type) const
{
	for (int i = 0; i < admin.size(); i++) {
		if (admin[i]->type() == type) {
			cout << " surname: " << admin[i]->getSurName() << endl;
		}
	}
}

bool sortType(Contact* a, Contact* b)
{
	return a->getSurName() < b->getSurName();
}

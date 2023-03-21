#include "Admin.h"
using namespace std;
int main()
{
	Admin A;
	int menu = 0;
	string surname;
	string num;
	string address;
	string manager;
	string faq;
	Date born;

	do
	{
		cout << "1 - Add Person" << endl;
		cout << "2 - Add Friend" << endl;
		cout << "3 - Add Collauge" << endl;
		cout << "4 - Erase Contact" << endl;
		cout << "5 - Change name" << endl;
		cout << "6 - Show by type" << endl;
		cout << "7 - Sort" << endl;
		cin >> menu;
		switch (menu)
		{
		case 1:
			cout << "Enter num: "; cin >> num;
			cout << "Enter surname: "; cin >> surname;
			cout << "Enter address: "; cin >> address;
			A.addContact(new Person(num,surname, address)); break;
		case 2:cout << "Enter num: "; cin >> num;
			cout << "Enter surname: "; cin >> surname;
			cout << "Enter address: "; cin >> address;
			cout << "Enter born: "; cin >> born;
			A.addContact(new Friend(num, surname, address, born)); break;
		case 3:cout << "Enter num: "; cin >> num;
			cout << "Enter surname: "; cin >> surname;
			cout << "Enter address: "; cin >> address;
			cout << "Enter manager: "; cin >> manager;
			cout << "Enter faq: "; cin >> faq;
			A.addContact(new Colleague(num, surname, address, manager, faq)); break;
		case 4:
			C.showList(); break;
		case 5:
			C.showOrderBySalary(); break;
		case 6:
			cout << "Input type(Employee, Manager, Teacher): " << endl;
			cin >> name;
			C.showByType(name); break;
		case 7:
			name = "Teacher";
			cost = cost + 100;
			C.showByType(name); break;
		}
	} while (menu != 0);
}
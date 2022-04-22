#include <iostream>
#include "User.h"
#include "Ing.h"

using namespace std;


int main()
{
	// REPASO DE CLASES
	/*User user1;
	cout << "Original values" << endl;
	cout << user1.get_id() << "," << user1.get_name() << "." << endl;

	user1.set_id(1);
	user1.set_name("John");
	cout << "Modified values" << endl;
	cout << user1.get_id() << "," << user1.get_name() << "." << endl;

	User user2(2, "Jane");
	cout << user2.get_id() << "," << user2.get_name() << "." << endl;*/

	// Uso de clases derivadas/hijas (Herencia)
	/*Ing ing1;
	cout << "Original values" << ": " << ing1.get_id() << "," << ing1.get_name()
		<< "," << ing1.get_career() << "," << ing1.get_prof_id() << "." << endl;

	Ing ing2(2, "Charles", "Data Scientist", "N/A");
	cout << "Original values" << ": " << ing2.get_id() << "," << ing2.get_name()
		<< "," << ing2.get_career() << "," << ing2.get_prof_id() << "." << endl;

	User user3(0, "Luma");
	Ing ing3(user3.get_id(), user3.get_name(), "Mecatronica", "N/A");
	cout << "Original values" << ": " << ing3.get_id() << "," << ing3.get_name()
		<< "," << ing3.get_career() << "," << ing3.get_prof_id() << "." << endl;*/

	return 0;
}

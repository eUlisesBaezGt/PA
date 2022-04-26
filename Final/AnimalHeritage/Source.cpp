#include <iostream>
#include <string>
#include <vector>

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

using namespace std;

struct App
{
	vector<Animal> animals;
	vector<Cat> cats;
	vector<Dog> dogs;
};


void AddAnimal(App& app)
{
	int opt;
	cout << "----- ADD ANIMAL ----- " << endl;
	cout << "1) Empty" << endl;
	cout << "2) Filled with data" << endl;
	cout << "3) Back" << endl;

	cout << "Enter option: ";
	cin >> opt;

	if (opt == 1)
	{
		app.animals.push_back(Animal());
	}
	else if (opt == 2)
	{
		Animal temp;
		cout << "Enter ID: ";
		int id;
		cin >> id;
		temp.set_id(id);

		cout << "Enter name: ";
		string name;
		cin >> name;
		temp.set_name(name);

		cout << "Enter gender: ";
		char gender;
		cin >> gender;
		temp.set_gender(gender);

		cout << "Enter age: ";
		float age;
		cin >> age;
		temp.set_age(age);

		cout << "Enter weight: ";
		float weight;
		cin >> weight;
		temp.set_weight(weight);

		cout << "Enter color: ";
		string color;
		cin >> color;
		temp.set_color(color);

		app.animals.push_back(temp);
	}
	else if (opt == 3)
	{
	}
	else
	{
		cout << "Invalid option!" << endl;
	}
}


void AddDog(App& app)
{
	int opt;
	cout << "----- ADD DOG ----- " << endl;
	cout << "1) Empty" << endl;
	cout << "2) Filled with data" << endl;
	cout << "3) Animal -> Dog" << endl;
	cout << "4) Back" << endl;

	cout << "Enter option: ";
	cin >> opt;

	if (opt == 1)
	{
		app.dogs.push_back(Dog());
	}
	else if (opt == 2)
	{
		Dog temp;
		cout << "Enter ID: ";
		int id;
		cin >> id;
		temp.set_id(id);

		cout << "Enter name: ";
		string name;
		cin >> name;
		temp.set_name(name);

		cout << "Enter gender: ";
		char gender;
		cin >> gender;
		temp.set_gender(gender);

		cout << "Enter age: ";
		float age;
		cin >> age;
		temp.set_age(age);

		cout << "Enter weight: ";
		float weight;
		cin >> weight;
		temp.set_weight(weight);

		cout << "Enter color: ";
		string color;
		cin >> color;
		temp.set_color(color);

		cout << " Enter breed: ";
		string breed;
		cin >> breed;
		temp.set_breed(breed);

		cout << "Does the dog have a tail? (Y/N): ";
		string tail;
		cin >> tail;
		temp.set_tail(tail);

		app.dogs.push_back(temp);
	}
	else if (opt == 3)
	{
		cout << "Search for specific ID: ";
		int id;
		cin >> id;

		for (int i = 0; i < app.animals.size(); ++i)
		{
			if (id == app.animals[i].get_id())
			{
				cout << " Enter breed: ";
				string breed;
				cin >> breed;

				cout << "Does the dog have a tail? (Y/N): ";
				string tail;
				cin >> tail;

				auto temp = Dog(app.animals[i], breed, tail);
				app.dogs.push_back(temp);
				app.animals.erase(app.animals.begin() + i);
			}
		}
	}
	else if (opt == 4)
	{
	}
	else
	{
		cout << "Invalid option!" << endl;
	}
}


void AddCat(App& app)
{
	int opt;
	cout << "----- ADD CAT ----- " << endl;
	cout << "1) Empty" << endl;
	cout << "2) Filled with data" << endl;
	cout << "3) Animal -> Cat" << endl;
	cout << "4) Back" << endl;

	cout << "Enter option: ";
	cin >> opt;

	if (opt == 1)
	{
		app.cats.push_back(Cat());
	}
	else if (opt == 2)
	{
		Cat temp;
		cout << "Enter ID: ";
		int id;
		cin >> id;
		temp.set_id(id);

		cout << "Enter name: ";
		string name;
		cin >> name;
		temp.set_name(name);

		cout << "Enter gender: ";
		char gender;
		cin >> gender;
		temp.set_gender(gender);

		cout << "Enter age: ";
		float age;
		cin >> age;
		temp.set_age(age);

		cout << "Enter weight: ";
		float weight;
		cin >> weight;
		temp.set_weight(weight);

		cout << "Enter color: ";
		string color;
		cin >> color;
		temp.set_color(color);

		cout << "Enter breed: ";
		string breed;
		cin >> breed;
		temp.set_breed(breed);

		cout << "Number of whiskers: ";
		int whiskers;
		cin >> whiskers;
		temp.set_whiskers(whiskers);

		app.cats.push_back(temp);
	}
	else if (opt == 3)
	{
		cout << "Search for specific ID: ";
		int id;
		cin >> id;

		for (int i = 0; i < app.animals.size(); ++i)
		{
			if (id == app.animals[i].get_id())
			{
				cout << " Enter breed: ";
				string breed;
				cin >> breed;

				cout << "Number of whiskers: ";
				int whiskers;
				cin >> whiskers;

				auto temp = Cat(app.animals[i], breed, whiskers);
				app.cats.push_back(temp);
				app.animals.erase(app.animals.begin() + i);
			}
		}
	}
	else if (opt == 4)
	{
	}
	else
	{
		cout << "Invalid option!" << endl;
	}
}


void PrintAnimals(App app)
{
	cout << "----- ANIMALS ----- " << endl;
	for (auto& animal : app.animals)
	{
		animal.print();
	}
	cout << "----- DOGS ----- " << endl;
	for (auto& dog : app.dogs)
	{
		dog.printdog();
	}
	cout << "----- CATS ----- " << endl;
	for (auto& cat : app.cats)
	{
		cat.printcat();
	}
}

void BI(App app)
{
	cout << "----- BI ----- " << endl;
	int dogcount;
	int catcount;
	int animalcount;
	int malecount = 0;
	int femalecount = 0;
	int breedcount = 0;
	string breed;

	dogcount = app.dogs.size();
	catcount = app.cats.size();
	animalcount = app.animals.size();

	cout << "# dogs: " << dogcount << "\t";
	cout << "# cats: " << catcount << "\t";
	cout << "# animals: " << animalcount << "\t";

	for (auto& dog : app.dogs)
	{
		if (dog.get_gender() == 'M')
		{
			malecount++;
		}
		else if (dog.get_gender() == 'F')
		{
			femalecount++;
		}
	}
	for (auto& cat : app.cats)
	{
		if (cat.get_gender() == 'M')
		{
			malecount++;
		}
		else if (cat.get_gender() == 'F')
		{
			femalecount++;
		}
	}
	for (auto& animal : app.animals)
	{
		if (animal.get_gender() == 'M')
		{
			malecount++;
		}
		else if (animal.get_gender() == 'F')
		{
			femalecount++;
		}
	}

	cout << "# Males: " << malecount << "\t";
	cout << "# Females: " << femalecount << "\t";

	cout << "Breed to search: ";
	cin >> breed;
	for (auto& dog : app.dogs)
	{
		if (dog.get_breed() == breed)
		{
			breedcount++;
		}
	}
	for (auto& cat : app.cats)
	{
		if (cat.get_breed() == breed)
		{
			breedcount++;
		}
	}
	cout << "# " << breed << ": " << breedcount << "\n";
}

int main()
{
	App app;
	int opt = 0;

	while (opt != 6)
	{
		cout << "------ MAIN MENU ------" << endl;
		cout << "1) Add Animal" << endl;

		cout << "2) Add Dog" << endl;
		cout << "3) Add Cat" << endl;

		cout << "4) Print Animals" << endl;

		cout << "5) BI" << endl;

		cout << "6) Exit" << endl;

		cout << "Enter your choice: ";
		cin >> opt;
		switch (opt)
		{
		case 1:
			{
				AddAnimal(app);
				break;
			}
		case 2:
			{
				AddDog(app);
				break;
			}
		case 3:
			{
				AddCat(app);
				break;
			}
		case 4:
			{
				PrintAnimals(app);
				break;
			}
		case 5:
			{
				BI(app);
				break;
			}
		case 6:
			{
				cout << "------ EXIT ------" << endl;
				break;
			}
		default:
			{
				cout << "------ ERROR ------" << endl;
				cout << "Please enter a valid option" << endl;
				break;
			}
		}
	}
}

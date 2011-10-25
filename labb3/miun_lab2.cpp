//============================================================================
// Name        : miun_lab2.cpp
// Author      : Markus Stenqvist
// Version     :
// Copyright   : Anyone can copy
// Description : A play with my first classes in c++
//============================================================================

#include <iostream>
#include "miun_lab2.h"
#include "Name.h"
#include "Address.h"
#include "Person.h"
#include <sstream>

using namespace std;

int main() {
	const int super = 10;
	Person person[super] = {
			Person("Markus", "Stenqvist", "Brölgatan 5", "12345", "Stockholm", "112", 46),
			Person("Sture", "Sturesson", "Fågelvägen 1", "55555", "Östersund", "99765", 38),
			Person("Channel", "Four", "It-crowd St.", "0118999881999119725...3", "London", "4", 45)
	};


	int x = 1, choice = 0;
	while(x == 1) {
		// Print the menu
		printMenu();
		// Get users choice
		choice = getChoice();

		// do stuff depending on what the user choose
		switch(choice) {
			case 1:
				setPerson(person, super);
				break;
			case 2:
				printPersons(person, super);
				break;
			case 3:
				return 0;
				break;
			default:
				break;
		}
	}

	return 0;
}

int getChoice() {
	string input = "";
	int x = 0;
	// Secure the user input from failing into an endless loop by checking if the input really is an int.
	while (true) {
	cout << "Please enter a valid number: ";
	getline(cin, input);

	// This code converts from string to number safely.
	stringstream strStream(input);
	if (strStream >> x)
	 break;
	cout << "Invalid number, please try again" << endl;
	}

	return x;
}

// prints the menu
void printMenu() {
	cout << "1) Enter data for a person." << endl;
	cout << "2) Show data for all persons." << endl;
	cout << "3) Quit." << endl;
}

//prints all persons in the person object
void printPersons(Person *obj, int super) {
	cout << "*** Persons ***" << endl;
	for(int i = 0; i < super; i++) {
		if(obj[i].name.getFirstName() == "")
			break;
		cout << "Name: " << obj[i].name.getFirstName() << ' ' << obj[i].name.getLastName() << endl;
		cout << "Address: " << obj[i].address.getStreet() << ' ' << obj[i].address.getZipcode() << ' ' << obj[i].address.getCity() << endl;
		cout << "Person and shoe number: " << obj[i].getPersNr() << ", " << obj[i].getSkoNr() << endl;
	}
}

/*
 * This is the only function where I think it might need some extra documentation. In this function I use local variables to store
 * the user input. When the user writes something in the current field I use a integer to store where in the user installation we currently
 * are. When the user has finished with one part, we increment the integer so we know what step in the installation we currently are.
 *
 * When the user is finished we put the data in to a empty slot in the person object which is determined with a for-loop.
 * Every step which is not empty gets prompted out. Since the control is the persons first name, the user better not leave it empty
 * or next time someone enter any data that slot will be overwritten.
 *
 * Thus I've added an extra warning on that occasion.
 */
void setPerson(Person *person, int super) {
	// set variables needed to store the data
	string firstName, lastName, street, zipcode, city, socialNumber, input;
	int size, i = 0;

	while(i < 7) {
		switch(i) {
			case 0:
				cout << "Enter your first name (this should not be empty):" << endl;
				getline(cin, firstName);
				i++;
				break;
			case 1:
				cout << "Enter your last name:" << endl;
				getline(cin, lastName);
				i++;
				break;
			case 2:
				cout << "Enter the street where you reside:" << endl;
				getline(cin, street);
				i++;
				break;
			case 3:
				cout << "Enter your zipcode:" << endl;
				getline(cin, zipcode);
				i++;
				break;
			case 4:
				cout << "Enter the city where you reside:" << endl;
				getline(cin, city);
				i++;
				break;
			case 5:
				cout << "Enter your social security number:" << endl;
				getline(cin, socialNumber);
				i++;
				break;
			case 6:
				cout << "Enter your shoe size:" << endl;
				while (true) {
					getline(cin, input);

					// This code converts from string to number safely.
					stringstream strStream(input);
					if (strStream >> size)
					 break;
					cout << "Invalid number, please try again" << endl;
				}
				cout << "\n";
				i++;
				break;
			default:
				cout << "You did something wrong, please enter your information correctly." << endl;
				break;

		}
	}

	for(i = 0; i < super; i++) {
		if(person[i].name.getFirstName() == "") {
			person[i].name.setFirstName(firstName);
			person[i].name.setLastName(lastName);
			person[i].address.setStreet(street);
			person[i].address.setZipcode(zipcode);
			person[i].address.setCity(city);
			person[i].setPersNr(socialNumber);
			person[i].setSkoNr(size);
			return;
		}
		else if(i == 9 && person[i].name.getFirstName() != "")
			cout << "Did not find room on slot " << i + 1 << "/10\n" << "I am sorry, it seems like the array is full.\nThe person could not be added." << endl;
		else
			cout << "Did not find room on slot " << i + 1 << "/10" << endl;
	}

	cout << "\n";
}


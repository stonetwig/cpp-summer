/*
 * Person.cpp
 *
 *  Created on: 26 jun 2011
 *      Author: markus
 */

#include "Person.h"
#include <string>

namespace std {

Person::Person() {
	persNr = "";
	skoNr = 0;
}

Person::Person(string firstName, string lastName, string street, string zipcode, string city, string socialNumber, int shoe) {
	// Add the data to the object.
	name.setFirstName(firstName);
	name.setLastName(lastName);
	address.setStreet(street);
	address.setZipcode(zipcode);
	address.setCity(city);
	setPersNr(socialNumber);
	setSkoNr(shoe);
}

int Person::setPersNr(const string &str) {
	persNr = str;
	return 0;
}

int Person::setSkoNr(int x) {
	skoNr = x;
	return 0;
}

string Person::getPersNr() const {
	return persNr;
}

int Person::getSkoNr() const {
	return skoNr;
}

}

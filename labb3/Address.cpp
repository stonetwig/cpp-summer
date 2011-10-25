/*
 * Address.cpp
 *
 *  Created on: 26 jun 2011
 *      Author: markus
 */

#include "Address.h"
#include <string>

namespace std {

Address::Address() {
	street = "";
	zipcode = "";
	city = "";
}

Address::~Address() {
	// TODO Auto-generated destructor stub
}

int Address::setStreet(const string &str) {
	street = str;
	return 0;
}

int Address::setZipcode(const string &str) {
	zipcode = str;
	return 0;
}

int Address::setCity(const string &str) {
	city = str;
	return 0;
}

string Address::getStreet() const {
	return street;
}

string Address::getZipcode() const {
	return zipcode;
}

string Address::getCity() const {
	return city;
}

}

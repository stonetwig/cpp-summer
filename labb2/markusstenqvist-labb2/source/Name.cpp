/*
 * Name.cpp
 *
 *  Created on: 26 jun 2011
 *      Author: markus
 */

#include "Name.h"
#include <string>

namespace std {

Name::Name() {
	firstName = "";
	lastName = "";
}

Name::~Name() {
	// TODO Auto-generated destructor stub
}

int Name::setFirstName(const string &str) {
	firstName = str;
	return 0;
}

int Name::setLastName(const string &str) {
	lastName = str;
	return 0;
}

string Name::getFirstName() const {
	return firstName;
}

string Name::getLastName() const {
	return lastName;
}

}

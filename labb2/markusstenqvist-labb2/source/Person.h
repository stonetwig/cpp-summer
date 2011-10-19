/*
 * Person.h
 *
 *  Created on: 26 jun 2011
 *      Author: markus
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <string>
#include "Name.h"
#include "Address.h"

namespace std {

class Person {

	private:
		string persNr;
		int skoNr;

	public:
		Name name;
		Address address;
		Person();
		int setPersNr(const string &str);
		int setSkoNr(int x);
		string getPersNr() const;
		int getSkoNr() const;
	};

}

#endif /* PERSON_H_ */

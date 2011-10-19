/*
 * Address.h
 *
 *  Created on: 26 jun 2011
 *      Author: markus
 */

#ifndef ADDRESS_H_
#define ADDRESS_H_
#include <string>

namespace std {


class Address {

	private:
		string street;
		string zipcode;
		string city;

	public:
		Address();
		virtual ~Address();
		int setStreet(const string &str);
		int setZipcode(const string &str);
		int setCity(const string &str);
		string getStreet() const;
		string getZipcode() const;
		string getCity() const;
};

}

#endif /* ADDRESS_H_ */

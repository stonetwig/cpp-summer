/*
 * Name.h
 *
 *  Created on: 26 jun 2011
 *      Author: markus
 */

#ifndef NAME_H_
#define NAME_H_
#include <string>

namespace std {

class Name {

	private:
		string firstName;
		string lastName;

	public:
		Name();
		virtual ~Name();
		int setFirstName(const string &str);
		int setLastName(const string &str);
		string getFirstName() const;
		string getLastName() const;
	};

}

#endif /* NAME_H_ */

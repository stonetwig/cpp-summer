//============================================================================
// Name        : PersonList.h
// Author      : Markus Stenqvist
// Version     : 1
// Copyright   : Anyone can copy
// Description : Override some operators.
//============================================================================


#ifndef personlistH
#define personlistH
	#include <iomanip>
	#include <iostream>
	#include <Person.h>
	#define _ARRNUM 10
	
	using namespace std;
	
	class PersonList {
		
		private:
				Person person[_ARRNUM];
				int arrnum = _ARRNUM;
				string filename;
				
		public:
			Personlist();
			Person getPerson() const { return person; }
			int getNum() const { return arrnum; }
			string getFilename() const { return filename; }
			
		
		
	};
	
	
	
	
#endif
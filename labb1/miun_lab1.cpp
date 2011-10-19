//============================================================================
// Name        : miun_lab1.cpp
// Author      : Markus Stenqvist
// Version     : 1.0
// Copyright   : Anyone can copy it, I don't care.
// Description : Dynamic arrays and pointers in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
	 // Create and eventually initiate the variables.
	 int arrLength = 0;
	 string input = "";
	 int *largest = 0, *lowest = 0, sum = 0;


	 // Secure the user input from failing into an endless loop by checking if the input really is an int.
	 while (true) {
	   cout << "Please enter a valid number: ";
	   getline(cin, input);

	   // This code converts from string to number safely.
	   stringstream strStream(input);
	   if (strStream >> arrLength)
	     break;
	   cout << "Invalid number, please try again" << endl;
	 }
	 cout << "You entered: " << arrLength << "\n\n";

	 int *numbers = new int[arrLength];
	 lowest = largest = numbers;

	 // Fill the array with random numbers
	 srand(time(NULL));
	 int x;
	 int range = 5001;
	 for(int index=0; index<arrLength; index++){
		 *(numbers + index) = rand() % range;
		 x = rand() % 2;
		 if(x > 0) {
			 *(numbers + index) = *(numbers + index) * -1;
		 }
	 }

	 //Print the array
	 cout << "This is the array containing the random numbers:\n";
	 for(int *i=numbers; i != numbers + arrLength; i++) {
		 if((*i % 200) == 0 && *i > 200) {
			 cout << "\nPlease press return to continue..";
			 cin.get();
			 cout << endl;
		 }
		 else
			 cout << *i << ' ';

		 // Get statistics
		 // In the continuation of getting, lowest, largest then adding to sum.
		 if(*i < *lowest)
			 lowest =  i;
		 if(*i > *largest)
			 largest = i;
		 sum += *i;
	 }

	 cout << "\n\nThe min, max and sum value is: " << *lowest << ", " << *largest << ", " << sum << endl;



	delete []numbers;
	return 0;
}

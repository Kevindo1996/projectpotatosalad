/* Interface of the class Person */

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
 
using namespace std;

class Person
{
public:
	Person();

	Person(const string& newFirst, const string& newLast);

	void setName(const string& newFirstName, const string& newLastName);

	string getLastName() const;

	void getName(string& tempFirstName, string& tempLastName) const;

	void printName() const;

	~Person();

private:
	string lastName;
	string firstName;
};

#endif

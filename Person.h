/* Implementation of the class Person */
#include "Person.h"

Person::Person()
{
	firstName = "N/A";
	lastName = "N/A";
}

Person::Person(const string& newFirst, const string& newLast)
{
	firstName = newFirst;
	lastName = newLast;
}

void Person::setName(const string& newFirstName, const string& newLastName)
{
	firstName = newFirstName;
	lastName = newLastName;
}

string Person::getLastName() const
{
	return lastName;
}

void Person::getName(string& tempFirstName, string& tempLastName) const
{
	tempFirstName = firstName;
	tempLastName = lastName;
}

void Person::printName() const
{
	cout << lastName << ", " << firstName << endl;
}

Person::~Person()
{

}

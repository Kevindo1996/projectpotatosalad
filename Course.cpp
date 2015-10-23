#include "Course.h"

// default constructor
Course::Course();
{
	courseGrade = "*";
	courseCredits = 0;
}


// setCourseInfo
void Course::setCourseInfo(string newCourseN, string newCourseNum, char newGrade, int newCredits)
{
	courseName = newCourseN;
	courseNo = newCourseNum;
	courseGrade = newGrade;
	courseCredits = newCredits; 
}

// printCourseInfo
void Course::printCourseInfo(bool isgrade)
{
	if (isgrade)
	{
		cout << courseNo << "      " << courseName << "      " << courseCredits << "      " << courseGrade << endl;
	}
	else
		cout << courseNo << "      " << courseName << "      " << courseCredits << "      " << "***" << endl;
}

// getCourseCredits
int Course::getCourseCredits() const
{

	return courseCredits;
}

// getCourseNumber
string Course::getCourseNumber() const
{
	return courseNo;
}

// getCourseName
string Course::getCourseName() const
{
	return courseName;
}

// getCourseGrade
char Course::getCourseGrade() const
{
	return courseGrade; 
}

// destructor
Course::~Course() {}


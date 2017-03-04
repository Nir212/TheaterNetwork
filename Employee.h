#pragma once
#include <string>

using namespace std;

class Manager;

class Employee
{
	/*Employee is an abstract class that defines the fields and method for both
	manager and regular employee*/
public:
	Employee(string);//initialize employee with name.
	
	string getName() const;//returns the employee's name.

	bool operator==(int) const;////check eqaulity by code.
	int getCode() const;//returns the employee's code
	virtual float getPayment(int) const = 0;//returns the employee's salary, will be implemented diffrenetly for manager and regular employee.

	~Employee();

protected:
	string name;
	int code;
	float pph; //payment per hour

};


#pragma once
#include "Employee.h"
#include "Manager.h"
#define REGULAR_PAYMENT 20.0

class Manager;

class RegularEmployee :
	public Employee
{
	/*defines regular employee, inherents from employee.
	every regular employee holds his manager's code in addition to it's own.*/
public:
	RegularEmployee(string, int); //initialize the regular employee with name and his manager code.

	int getSoldTickets() const;//returns the number of tickets the employee sold so far
	void sellTickets(int);//add tickets to it's tickets counter.
	float getPayment(int) const;//returns the employees salary by number of hours

	~RegularEmployee();

private:
	int soldTickets;
	int managerCode;
	static int counter;
};


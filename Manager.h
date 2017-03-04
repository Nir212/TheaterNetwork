#pragma once
#include "Employee.h"
#include "RegularEmployee.h"
#include "elementList.h"
#include "elementList.cpp"
#include <vector>
using namespace std;

#define MANAGER_PAYMENT 30.0

class RegularEmployee;

class Manager :
	public Employee
{
	/*defines manager, inherents from employee.
	manager contains alist of all his employees.*/
public:
	Manager(string);//initialize the manager with name
	elementList<RegularEmployee> rgVec;//a list with the manager's employees
	void addEmployee(string);  //employee name
	~Manager();
	float getPayment(int) const;//returns the manager salary by the number of hours.

	int totalTicketsSold() const;//returns the total of tickets sold by all of the manager's employees.

private:
	static int counter;//counter for all the manager's so far.

};


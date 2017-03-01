#pragma once
#include "Employee.h"
#include "Manager.h"

class Manager;

class RegularEmployee :
	public Employee
{
public:
	RegularEmployee();

	const int getSoldTickets();

	~RegularEmployee();

private:
	static int soldTickets;
	int managerCode;
	static int regularEmployeeCode;
};


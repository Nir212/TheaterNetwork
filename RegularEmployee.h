#pragma once
#include "Employee.h"
#include "Manager.h"
#define REGULAR_PAYMENT 20.0

class Manager;

class RegularEmployee :
	public Employee
{
public:
	RegularEmployee(string, int); //name, manager

	int getSoldTickets() const;
	void sellTickets(int);
	float getPayment(int);

	~RegularEmployee();

private:
	int soldTickets;
	int managerCode;
	static int counter;
};


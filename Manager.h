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
public:
	Manager(string);
	elementList<RegularEmployee> rgVec;
	void addEmployee(string);  //employee name
	~Manager();
	float getPayment(int) const;

	int totalTicketsSold() const;

private:
	static int counter;

};


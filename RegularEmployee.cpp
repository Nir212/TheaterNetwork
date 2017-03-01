#include "stdafx.h"
#include "RegularEmployee.h"

int RegularEmployee::counter = 0;


RegularEmployee::RegularEmployee(string name, int managerCode) : Employee(name)
{
	soldTickets = 0;
	this->code = counter++;
	this->managerCode = managerCode;
}

int RegularEmployee::getSoldTickets() const
{
	return soldTickets;
}

void RegularEmployee::sellTickets(int numOfTickets)
{
	soldTickets = soldTickets + numOfTickets;
}

float RegularEmployee::getPayment(int numOfHours)
{
	return ((float)numOfHours * REGULAR_PAYMENT + 2 * soldTickets);
}

RegularEmployee::~RegularEmployee()
{
}


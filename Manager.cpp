#include "stdafx.h"
#include "Manager.h"


int Manager::counter = 0;


Manager::Manager(string name) : Employee(name)
{
	this->code = counter++;
}

void Manager::addEmployee(string name)
{
	RegularEmployee rg = RegularEmployee(name, this->code);
	rgVec.addElement(rg);
}

int Manager::totalTicketsSold() const
{
	int sum = 0;
	for (int i = 0; i < rgVec.getSize(); i++)
	{
		sum = sum + rgVec[i].getSoldTickets();
	}

	return sum;
}

float Manager::getPayment(int numOfHours) const
{
	int tmp = totalTicketsSold();
	if (tmp > 1000)
		tmp = tmp + 100;
	return (float)numOfHours * MANAGER_PAYMENT + tmp;
}


Manager::~Manager()
{
}

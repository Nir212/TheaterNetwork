#include "stdafx.h"
#include "RegularEmployee.h"

int RegularEmployee::regularEmployeeCode = 0;
int RegularEmployee::soldTickets = 0;

RegularEmployee::RegularEmployee()
{
}

const int RegularEmployee::getSoldTickets()
{
	return soldTickets;
}

RegularEmployee::~RegularEmployee()
{
}


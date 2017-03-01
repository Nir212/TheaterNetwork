#include "stdafx.h"
#include "Employee.h"

Employee::Employee(string name)
{
	this->name = name;
}

string Employee::getName()
{
	return this->name;
}

int Employee::getCode()
{
	return this->code;
}

bool Employee::operator == (int code)
{
	return (this->code == code);
}

Employee::~Employee()
{
}

#include "stdafx.h"
#include "Employee.h"

Employee::Employee(string name)
{
	this->name = name;
}

string Employee::getName() const
{
	return this->name;
}

int Employee::getCode() const
{
	return this->code;
}

bool Employee::operator == (int code) const
{
	return (this->code == code);
}

Employee::~Employee()
{
}

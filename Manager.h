#pragma once
#include "Employee.h"
#include "RegularEmployee.h"
#include <vector>
using namespace std;

class RegularEmployee;

class Manager :
	public Employee
{
public:
	Manager();
	vector<RegularEmployee> rgVec;
	~Manager();

private:
	static int managerCode;

};


#pragma once
#include <string>
using namespace std;

class Manager;

class Employee
{
public:
	Employee();

	~Employee();

private:
	string name;
	float pph; //payment per hour

};


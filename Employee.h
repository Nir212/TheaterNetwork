#pragma once
#include <string>

using namespace std;

class Manager;

class Employee
{
public:
	Employee(string);
	
	string getName();

	bool operator==(int);
	int getCode();
	virtual float getPayment(int) = 0;

	~Employee();

protected:
	string name;
	int code;
	float pph; //payment per hour

};


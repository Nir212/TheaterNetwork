#pragma once
#include <string>

using namespace std;

class Manager;

class Employee
{
public:
	Employee(string);
	
	string getName() const;

	bool operator==(int) const;
	int getCode() const;
	virtual float getPayment(int) const = 0;

	~Employee();

protected:
	string name;
	int code;
	float pph; //payment per hour

};


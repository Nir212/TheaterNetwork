#pragma once
#include <string>
#include "Screening.h"
using namespace std;


class Client_Interface
{
public:
	/*The Client_interface class is an interface that contains all 
	the method of clients, business clients and the private clients with no implamantions.*/
	~Client_Interface();
	virtual float cost(int num, Screening& screening) const = 0;//gets the number of tickets and the screening and returns the cost.
	virtual string getName() const = 0;
	virtual int getCode() const = 0;
	virtual int getAge() const = 0;
	virtual bool operator==(int code) const = 0;//check eqaulity by code.
	virtual void addTickets(int num) = 0;
};


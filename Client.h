#pragma once
#include <string>
#include "Screening.h"
using namespace std;

class Screening;

class Client
{
	/*The Client class is a class that contains all the fields of both 
	the business clients and the private clients and lack only the implementation of
	the cost method which will be in the sub classes.*/
public:
	Client();
	Client(string& name,int age, int num_of_tickets);//C'ntr with initialization of name and num_of_tickets
	Client(string& name, int age);//C'ntr with initialization of name. num_of_tickets will be 0;
	~Client();
	virtual float cost(int num, Screening& screening) const;//gets the number of tickets and the screening and returns the cost.
	string getName() const;//returns the client's name
	int getCode() const;//returns the client's code
	int getAge() const;//returns the client's age
	bool operator==(int code) const;//check eqaulity by code.
	void addTickets(int num);//add num tickets to the client's previously purchased tickets.
protected:
	static int count;//counts how many clients so far.
	int num_of_tickets;//previously purchased tickets
	string name;
	int code;
	int age;
};


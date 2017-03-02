#pragma once
#include "Client_Interface.h"
#include <string>

class Screening;

class Client: 
	public Client_Interface
{
	/*The Client class is a class that contains all the fields of both 
	the business clients and the private clients and lack only the implamantion of
	the cost method which will be in the sub classes.*/
public:
	Client();
	Client(string& name,int age, int num_of_tickets);//C'ntr with initialization of name and num_of_tickets
	Client(string& name, int age);//C'ntr with initialization of name. num_of_tickets will be 0;
	~Client();
	virtual float cost(int num, Screening& screening) const;//gets the number of tickets and the screening and returns the cost.
	string getName() const;
	int getCode() const;
	int getAge() const;
	bool operator==(int code) const;//check eqaulity by code.
	void addTickets(int num);
protected:
	static int count;//counts how many clients so far.
	int num_of_tickets;
	string name;
	int code;
	int age;
};


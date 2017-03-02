#include "stdafx.h"
#include "Client.h"


Client::Client()
{
}


Client::~Client()
{
}

Client::Client(string& name, int age, int num_of_tickets)
{
	this->name = name;
	this->age = age;
	this->num_of_tickets = num_of_tickets;
	code = count;
	count++;
}
Client::Client(string& name, int age)
{
	this->name = name;
	this->age = age;
	this->num_of_tickets = 0;
	count++;
	code = count;
}
int Client::count = 0;

float Client::cost(int num, Screening& screening) const 
{
	return 0;
}

string Client::getName() const
{
	return name;
}
int Client::getCode() const
{
	return code;
}
int Client::getAge() const
{
	return age;
}

bool  Client::operator==(int code) const
{
	return (this->code == code);
}

void Client::addTickets(int num)
{
	num_of_tickets+=num;
}
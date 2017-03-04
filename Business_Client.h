#pragma once
#include "Client.h"
class Business_Client :
	public Client
{
public:
	/*The Business_Client class is a class that inherents all the fields and methods from Client class
	and implement the cost method for business clients.*/
	Business_Client();
	Business_Client(string& name,int age, int num_of_tickets);//initialize the business client with name, age and num of previously purchased tickets.
	Business_Client(string& name, int age);//initialize the business client with name and age.
	~Business_Client();
	float cost(int num, Screening& screening) const;//returns the cost of num tickets.
};


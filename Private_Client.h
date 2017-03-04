#pragma once
#include "Client.h"
class Private_Client :
	public Client
{
	/*The Private_Client class is a class that inherents all the fields and methods from Client class
	and implement the cost method for private clients.*/
public:
	Private_Client();
	Private_Client(string& name,int age, int num_of_tickets);//initialize the private client with name, age and num of previously purchased tickets.
	Private_Client(string& name, int age);//initialize the private client with name and age.
	~Private_Client();
	float cost(int num, Screening& screening) const;//returns the cost of num tickets.
};


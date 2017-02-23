#include "stdafx.h"
#include "Business_Client.h"


Business_Client::Business_Client()
{
}

Business_Client::Business_Client(string& name, int num_of_tickets) : Client(name, num_of_tickets)
{
}
Business_Client::Business_Client(string& name) : Client(name)
{
}

Business_Client::~Business_Client()
{
}

float Business_Client::cost(int num, Screening& screening)
{
	double discount;
	num_of_tickets < 100 ? discount = 0 : discount = 0.05;
	return num*discount*screening.getPrice();
}
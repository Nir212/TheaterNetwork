#include "stdafx.h"
#include "Private_Client.h"


Private_Client::Private_Client()
{
}

Private_Client::Private_Client(string& name, int num_of_tickets) : Client(name, num_of_tickets)
{
}
Private_Client::Private_Client(string& name) : Client(name)
{
}

Private_Client::~Private_Client()
{
}

float Private_Client::cost(int num, Screening& screening)
{
	double discount;
	num_of_tickets < 10 ? discount = 0 : discount = 0.05;
	return num*discount*screening.getPrice();
}
#pragma once
#include "Client.h"
class Business_Client :
	public Client
{
public:
	Business_Client();
	Business_Client(string& name, int num_of_tickets);
	Business_Client(string& name);
	~Business_Client();
	float cost(int num, Show& show);
};

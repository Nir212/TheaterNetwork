#pragma once
#include "Client.h"
class Private_Client :
	public Client
{
public:
	Private_Client();
	Private_Client(string& name, int num_of_tickets);
	Private_Client(string& name);
	~Private_Client();
	float cost(int num, Show& show);
};


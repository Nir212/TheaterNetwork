#pragma once
#include "Client.h"
class Private_Client :
	public Client
{
public:
	Private_Client();
	Private_Client(string& name,int age, int num_of_tickets);
	Private_Client(string& name, int age);
	~Private_Client();
	float cost(int num, Screening& screening);
};


#pragma once
#include <string>

using namespace std;

class Client
{
	/*The Client class is an abstract class that contains all the fields of both 
	the business clients and the private clients and lack only the implamantion of
	the cost method which will be in the sub classes.*/
public:
	Client();
	Client(string& name, int num_of_tickets);//C'ntr with initialization of name and num_of_tickets
	Client(string& name);//C'ntr with initialization of name. num_of_tickets will be 0;
	~Client();
	virtual float cost(int num, Show& show) = 0;//gets the number of tickets and returns the cost.
	string getName();
	int getCode();
protected:
	static int count;//counts how many clients so far.
	int num_of_tickets;
	string name;
	int code;
};


#pragma once

#include "Theater.h"

#include <iostream>
using namespace std;

class UI
{
	/*The UI class will Interact with the user via the console*/
public:
	UI();

	void printMainMenu();//this method will print the main menu interface from which the user will choose his next action.

	void printNewEmployeeMenu();//this method will operate the menu to add a new employee.
	void printNewClientMenu();//this method will operate the menu to add a new client.
	void printNewMovieMenu();//this method will operate the menu to add a new movie.
	void printNewScreeningRoomMenu();//this method will operate the menu to add a new screening room.
	void printNewScreeningMenu();//this method will operate the menu to add a new screening.
	void printPurchaseMenu();//this method will operate the menu to make new purchase.
	void printEmployeeSalary();//this method will operate the menu to print employee salary.


	~UI();

private:
	Theater th;//the theater itself.

};


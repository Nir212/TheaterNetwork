#pragma once

#include "Theater.h"

#include <iostream>
using namespace std;

class UI
{
public:
	UI();
	Theater th;

	void printMainMenu();

	void printNewEmployeeMenu();
	void printNewMovieMenu();
	void printNewScreeningRoomMenu();
	void printNewScreeningMenu();
	void printPurchaseMenu();
	void printEmployeeSalary();

	void printHorrorRate();

	~UI();
};


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
	void printNewTheaterRoomMenu();
	void printNewScreeningMenu();
	void printPurchaseMenu();
	void printGetEmployeeSalary();

	void printHorrorRate();

	~UI();
};


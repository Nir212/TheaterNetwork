// TheaterNetwork.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "UI.h"


int _tmain(int argc, _TCHAR* argv[])
{
	/*the main function only creates an UI object
	the UI object holds the theater objects and does all the interaction with the user.*/
	UI ui;
	ui.printMainMenu();

	return 0;
}


#include "stdafx.h"
#include "UI.h"


UI::UI()
{
}

void UI::printMainMenu()
{
	int action;
	do
	{
		cout << "\nHello,\nPlease insert your action number:\n";
		cout << "1 - Add new Employee\n";
		cout << "2 - Add new Movie\n";
		cout << "3 - Add new Theater Room\n";
		cout << "4 - Add new Screening\n";
		cout << "5 - Make a Purches\n";
		cout << "6 - Get Employee's Salary\n";
		cout << "\n0 - exit\n";
		cin >> action;
		switch (action)
		{
		case 1:
			printNewEmployeeMenu();
			break;

		case 2:
			printNewMovieMenu();
			break;

		case 3:
			printNewScreeningRoomMenu();
			break;

		case 4:
			printNewScreeningMenu();
			break;

		case 5:
			printPurchaseMenu();
			break;
		
		case 6:
			printEmployeeSalary();
			break;

		case 0:
			cout << "goodbye.\n";
			break;

		default:
			cout << "invalid action\n";
		}
	} while (action);
}

void UI::printNewEmployeeMenu()
{
	int employeeType;
	string employeeName;
	int managerCode;
	do
	{
		cout << "Please choose which kind of employee:\n";
		cout << "1 - Add new Manager\n";
		cout << "2 - Add new Regular Employee\n";
		cout << "\n0 - exit\n";
		cin >> employeeType;
		switch (employeeType)
		{
		case 1:
			cout << "\nPlease enter Manager name - \n";
			cin >> employeeName;
			th.addManager(employeeName);
			break;
		case 2:
			cout << "\nPlease enter Employee name - \n";
			cin >> employeeName;
			cout << "\nPlease enter the Manager's code - \n";
			th.printEmployees();
			cin >> managerCode;
			try{
				th.addRegularEmployee(employeeName, managerCode);
			}
			catch (exception e){
				cout << "\nError - no such manager code\n";
			}
			
			break;
		case 0:
			cout << "goodbye.\n";
			break;

		default:
			cout << "invalid action\n";
		}
	} while (employeeType);

}


void UI::printNewMovieMenu()
{
	int movieType;
	string movieName;
	int minAge, maxAge, horrorRate;
	float movieLength, moviePrice;
	do
	{
		cout << "Please choose which kind of movie:\n";
		cout << "1 - Kids Movie\n";
		cout << "2 - Horror Movie\n";
		cout << "\n0 - exit\n";
		cin >> movieType;

		switch (movieType)
		{
		case 1:
			cout << "\nPlease enter movie name - \n";
			cin >> movieName;
			cout << "\nPlease enter minimal age - \n";
			cin >> minAge;
			cout << "\nPlease enter maximal age - \n";
			cin >> maxAge;
			cout << "\nPlease enter movie length (minutes) - \n";
			cin >> movieLength;
			cout << "\nPlease enter movie price - \n";
			cin >> moviePrice;

			th.addKidsMovie(movieName, minAge, maxAge, movieLength, moviePrice);
			break;

		case 2:
			cout << "\nPlease enter movie name - \n";
			cin >> movieName;
			cout << "\nPlease enter minimal age - \n";
			cin >> minAge;
			cout << "\nPlease enter movie length (minutes) - \n";
			cin >> movieLength;
			cout << "\nPlease enter movie price - \n";
			cin >> moviePrice;
			cout << "\nPlease enter movie horror rate - \n";
			printHorrorRate();
			do{
				cin >> horrorRate;
				switch (horrorRate)
				{
				case 1:
					th.addHorrorMovie(movieName, minAge, movieLength, moviePrice, lite);
					break;
				case 2:
					th.addHorrorMovie(movieName, minAge, movieLength, moviePrice, scary);
					break;
				case 3:
					th.addHorrorMovie(movieName, minAge, movieLength, moviePrice, terrifying);
					break;
				default:
					cout << "Please enter a valid horror rate (1 to 3)\n";
					break;
				}
			} while ((horrorRate != 1) && (horrorRate != 2) && (horrorRate != 3));

			break;

		case 0:
			cout << "goodbye.\n";
			break;

		default:
			cout << "invalid action\n";
		}
	} while (movieType);

}

void UI::printHorrorRate()
{
	cout << "1 - Lite\n";
	cout << "2 - Scary\n";
	cout << "3 - Terrifying\n";
}

void UI::printNewScreeningRoomMenu()
{
	int numOfSeats;
	int row;
	int flag = false;

	do
	{
		cout << "Please enter num of seats:\n";
		cin >> numOfSeats;
		cout << "Please enter num of rows:\n";
		cin >> row;
		if (row <= 0 || numOfSeats <= 0)
		{
			flag = true;
			cout << "One or more of your numbers is wrong\nPlease try again...\n";
		}
		else
			flag = false;
	} while (flag);
	
	th.addScreeningRoom(numOfSeats, row);
}

void UI::printNewScreeningMenu()
{
	int movieCode;
	int screeningRoomCode;
	int time;
	bool flag = false;

	do
	{
		cout << "Please enter movie code:\n";
		cin >> movieCode;
		cout << "Please enter screening room number:\n";
		cin >> screeningRoomCode;
		cout << "Please enter screening time (hhmm):\n";
		cin >> time;
		if (movieCode < 0 || screeningRoomCode < 0)
		{
			flag = true;
			cout << "One or more of your numbers is wrong\nPlease try again...\n";
		}
		else if (time / 100 >= 24 || time / 100 < 0 || time % 100 >= 60)
		{
			flag = true;
		}
		else
			flag = false;
	} while (flag);

	try{
		th.addScreening(movieCode, screeningRoomCode, time);
	}
	catch (int e)
	{
		cout << "Error - please try again...\n";
	}

}

void UI::printPurchaseMenu()
{
	int employeeCode;
	int managerCode;
	int clientCode;
	int movieCode;
	bool flag = true;
	int screeningCode;
	int ticketsNum;
	int yesORno;
	int row, col;

	do{
		cout << "*** To exit login mode - enter 0 for codes ***\n";
		cout << "Please enter employee code -\n";
		cin >> employeeCode;
		cout << "Please enter manager code -\n";
		cin >> managerCode;
	} while (!th.checkEmployee(managerCode, employeeCode));


	if (managerCode != 0 && employeeCode != 0)
	{
		th.printMovies();
		cout << "Choose movie by entering Movie Code -\n";
		cin >> movieCode;
		try
		{
			th.printScreenings(movieCode);
		}
		catch (int e)
		{
			cout << "Wrong Movie Code. Please Try again...\n";
			flag = false;
		}
	}

	if(flag)
	{
		cout << "Please enter client code -\n";
		cin >> clientCode;
		cout << "Please choose screening code -\n";
		cin >> screeningCode;
		cout << "Please choose number of tickets -\n";
		cin >> ticketsNum;
		try
		{
			cout << "The price for " << ticketsNum << " of tickets is - " << th.ticketsCost(clientCode, screeningCode, ticketsNum) << "\n";
			cout << "would you like to proceed?\n1-yes\n2-no";
			cin >> yesORno;
			if (yesORno != 1)
				flag = false;
		}
		catch (int e)
		{
			if (e == 2)
				cout << "We are sorry - your age isn't appropriate for this movie.\n";
			else
				cout << "No such client or screening. Please Try Again...\n";
			flag = false;
		}
	}

	if (flag)
	{
		th.printSeatArr(screeningCode);
		for (int i = 0; i < ticketsNum; i++)
		{
			cout << "please choose row -\n";
			cin >> row;
			cout << "please choose col -\n";
			cin >> col;
			try
			{
				th.addSeat(clientCode, screeningCode, row, col);
			}
			catch (int e)
			{
				cout << "This seat is taken. please try again...\n";
				i--;
			}
		}
		try
		{
			th.ticketsPurchase(clientCode, managerCode, employeeCode, ticketsNum);
		}
		catch (int e)
		{
			cout << "Error - Please try again...\n";
			flag = false;
		}
	}

	if (flag)
		cout << "Purches succeeded!\n";
}

void UI::printEmployeeSalary()
{
	int managerCode;
	int employeeCode;
	int numOfHours;
	int action;
	bool flag;

	do
	{
		cout << "Which salary check would you like to do?\n";
		cout << "1 - Employee\n";
		cout << "2 - Manager\n";
		cout << "0 - exit\n";
		cin >> action;

		switch (action)
		{
		case 1:
			cout << "Please enter manager code:\n";
			cin >> managerCode;
			cout << "Please enter employee code:\n";
			cin >> employeeCode;
			cout << "Please enter num of hours:\n";
			cin >> numOfHours;
			try
			{
				th.getSalary(numOfHours, managerCode, employeeCode);
			}
			catch (int e)
			{
				cout << "Error - please try again...\n";
			}

			break;

		case 2:
			cout << "Please enter manager code:\n";
			cin >> managerCode;
			cout << "Please enter employee code:\n";
			cin >> employeeCode;
			cout << "Please enter num of hours:\n";
			cin >> numOfHours;
			try
			{
				th.getSalary(numOfHours, managerCode);
			}
			catch (int e)
			{
				cout << "Error - please try again...\n";
			}

			break;

		case 0:
			cout << "End salary check.\n";
			break;

		default:
			cout << "invalid action. Please try again...\n";
		}
	} while (action);

}


UI::~UI()
{
}

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
		cout << "1 - Add a new Employee\n";
		cout << "2 - Add a new client\n";
		cout << "3 - Add a new Movie\n";
		cout << "4 - Add a new Theater Room\n";
		cout << "5 - Add a new Screening\n";
		cout << "6 - Make a Purchase\n";
		cout << "7 - Get an Employee's Salary\n";
		cout << "\n0 - exit\n";
		cin >> action;
		switch (action)
		{
		case 1:
			printNewEmployeeMenu();
			break;

		case 2:
			printNewClientMenu();
			break;

		case 3:
			printNewMovieMenu();
			break;

		case 4:
			printNewScreeningRoomMenu();
			break;

		case 5:
			printNewScreeningMenu();
			break;

		case 6:
			printPurchaseMenu();
			break;
		
		case 7:
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
		cout << "1 - Add a new Manager\n";
		cout << "2 - Add a new Regular Employee\n";
		cout << "3 - Show Employees\n";
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
			cout << "\nPlease enter new Employee name - \n";
			cin >> employeeName;
			cout << "\nPlease enter the Manager's code - \n";
			cin >> managerCode;
			try
			{
				th.addRegularEmployee(employeeName, managerCode);
			}
			catch (int e)
			{
				cout << "\nError - no such manager code\n";
			}
			break;
		case 3:
			th.printEmployees();
			break;
		case 0:
			cout << "goodbye.\n";
			break;

		default:
			cout << "invalid action\n";
		}
	} while (employeeType);

}

void UI::printNewClientMenu()
{
	int clientType;
	string clientName;
	int age;
	do
	{
		cout << "Please choose which kind of client:\n";
		cout << "1 - New private client\n";
		cout << "2 - New business client\n";
		cout << "3 - Show clients\n";
		cout << "\n0 - exit\n";
		cin >> clientType;
		switch (clientType)
		{
		case 1:
			cout << "\nPlease enter client name - \n";
			cin >> clientName;
			cout << "\nPlease enter client age - \n";
			cin >> age;
			th.addClient(clientName, age, true);
			break;
		case 2:
			cout << "\nPlease enter client name - \n";
			cin >> clientName;
			cout << "\nPlease enter client age - \n";
			cin >> age;
			th.addClient(clientName, age, false);
			break;
		case 3:
			th.printClients();
			break;
		case 0:
			cout << "goodbye.\n";
			break;

		default:
			cout << "invalid action\n";
		}
	} while (clientType);
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
		cout << "3 - Show Movies\n";
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
			cout << "1 - Lite\n";
			cout << "2 - Scary\n";
			cout << "3 - Terrifying\n";
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
			} while (horrorRate != 1 && horrorRate != 2 && horrorRate != 3);

			break;
		case 3:
			th.printMovies();
			break;
		case 0:
			cout << "goodbye.\n";
			break;

		default:
			cout << "invalid action\n";
		}
	} while (movieType);

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
	int flag = false;

	do
	{
		cout << "Please enter movie code:\n";
		cin >> movieCode;
		cout << "Please enter screening room number:\n";
		cin >> screeningRoomCode;
		cout << "Please enter screening time (hhmm):\n";
		cin >> time;
		try {
			th.addScreening(movieCode, screeningRoomCode, time);
			flag = false;
		}
		catch (int e)
		{
			cout << "Invalid movie or screening room code - please try again...\n";
			flag = true;
		}
	} while (flag);
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
		cout << "Please enter employee code -\n";
		cin >> employeeCode;
		cout << "Please enter manager code -\n";
		cin >> managerCode;
		if (!th.checkEmployee(managerCode, employeeCode))
		{
			flag = true;
			cout << "Invaild employee or manager - try again...\n";
		}
		else
			flag = false;
	} while (flag);

	do
	{
		th.printMovies();
		cout << "Choose movie by entering Movie Code -\n";
		cin >> movieCode;
		try
		{
			th.printScreenings(movieCode);
			flag = false;
		}
		catch (int e)
		{
			cout << "Wrong Movie Code. Please Try again...\n";
			flag = true;
		}
	} while (flag);
	
	do
	{
		cout << "Please choose screening code -\n";
		cin >> screeningCode;
		cout << "Please choose number of tickets -\n";
		cin >> ticketsNum;
		cout << "Please enter client code -\n";
		cin >> clientCode;
		try
		{
			cout << "The price for " << ticketsNum << " tickets is - " << th.ticketsCost(clientCode, screeningCode, ticketsNum) << "\n";
			flag = false;
		}
		catch (int e)
		{
			if (e == 2)
				cout << "We are sorry - your age isn't appropriate for this movie.\n";
			else
				cout << "No such client or screening. Please Try Again...\n";
			flag = true;
		}
	} while (flag);
	cout << "Would you like to continue with the purchase?\n 1- yes\n 2 - no\n";
	cin >> yesORno;
	if (yesORno == 1)
	{
		th.ticketsPurchase(clientCode, managerCode, employeeCode, ticketsNum);
		for (int i = 0; i < ticketsNum; i++)
		{
			th.printSeatArr(screeningCode);
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
		cout << "Purchase succeeded!\n";
	}
}

void UI::printEmployeeSalary()
{
	int managerCode;
	int employeeCode;
	int numOfHours;
	int action;

	do
	{
		cout << "Which salary would you like to check?\n";
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
				cout << "The employee salary is: " << th.getSalary(numOfHours, managerCode, employeeCode)<<"\n";
			}
			catch (int e)
			{
				cout << "Invalid employee or manager - please try again...\n";
			}

			break;

		case 2:
			cout << "Please enter manager code:\n";
			cin >> managerCode;
			cout << "Please enter num of hours:\n";
			cin >> numOfHours;
			try
			{
				cout << "The manager salary is: " << th.getSalary(numOfHours, managerCode) << "\n";
			}
			catch (int e)
			{
				cout << "Invalid manager - please try again...\n";
			}

			break;

		case 0:
			cout << "End salary check.\n";
			break;

		default:
			cout << "Invalid action. Please try again...\n";
		}
	} while (action);

}


UI::~UI()
{
}

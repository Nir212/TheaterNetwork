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
		cout << "5 - Make an Order\n";
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
			/*	try
			{
			cout << "the last student in the stack is:" << studentStack.peek().name << "\n";
			}
			catch (int e)
			{
			cout << "the stack is empty\n";
			}*/
			break;

		case 4:
			//if (studentStack.isEmpty())
			//	cout << "the stack is empty\n";
			//else
			//	cout << "the stack is not empty\n";
			break;

		case 5:
			//try
			//{
			//	cout << "the student with the highest average in the stack is:" << studentStack.max().name;
			//	cout << "\nwith average:" << studentStack.max().avg << "\n";
			//}
			//catch (int e)
			//{
			//	cout << "the stack is empty\n";
			//}

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
			th.printManagers();
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
			} while (horrorRate != 1 || horrorRate != 2 || horrorRate != 3);

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

void UI::printNewTheaterRoomMenu()
{

}

void UI::printNewScreeningMenu()
{

}

void UI::printPurchaseMenu()
{

}

void UI::printGetEmployeeSalary()
{

}


UI::~UI()
{
}

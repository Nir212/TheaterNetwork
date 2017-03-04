#include "stdafx.h"
#include "Theater.h"


Theater::Theater()
{
}


Theater::~Theater()
{
}

void Theater::addClient(string& name, int age, bool isPrivate)
{
	Client* newClient;
	if (isPrivate)
	{
		newClient = new Private_Client(name, age);
	}
	else
	{
		newClient = new Business_Client(name, age);
	}
	clientList.addElement(*newClient);
}

void Theater::addManager(string& name)
{
	Manager* newManager = new Manager(name);
	managerList.addElement(*newManager);
}

void Theater::addRegularEmployee(string& name, int managerCode)
{
	try
	{
		Manager* m1 = &managerList.search(managerCode);
		m1->addEmployee(name);
	}
	catch (int e)
	{
		throw e;
	}
}

void Theater::addHorrorMovie(string& name, int minAge, float length, float price, hRate rating)
{
	Movie* newMovie = new HorrorMovie(name, minAge, length, price, rating);
	movieList.addElement(*newMovie);
}

void Theater::addKidsMovie(string& name, int minAge, int maxAge, float length, float price)
{
	Movie* newMovie = new KidsMovie(name, minAge, maxAge, length, price);
	movieList.addElement(*newMovie);
}

void Theater::addScreeningRoom(int num_of_seats, int row)
{
	Screening_Room* newScreeningRoom = new Screening_Room(num_of_seats, row);
	screeningRoomList.addElement(*newScreeningRoom);
}

void Theater::addScreening(int movie_code, int screeningRoom_code, int time)
{
	try
	{
		Screening* newScreening = new Screening(movieList.search(movie_code), screeningRoomList.search(screeningRoom_code), time);
		screeningList.addElement(*newScreening);
	}
	catch (int e)
	{
		throw e;
	}
}

void Theater::ticketsPurchase(int client_code, int manager_code, int employee_code, int tickets_num)
{
	try
	{
		Client* c1 = &clientList.search(client_code);
		Manager* m1 = &managerList.search(manager_code);
		RegularEmployee* e1 = &m1->rgVec.search(employee_code);
		e1->sellTickets(tickets_num);
		c1->addTickets(tickets_num);
	}
	catch (int e)
	{
		throw e;
	}
}

float Theater::ticketsCost(int client_code, int screening_code, int tickets_num) 
{
	try
	{
		Client *c1 = &clientList.search(client_code);
		Screening* s1 = &screeningList.search(screening_code);
		Movie* m1 = &movieList.search(s1->getMovieCode());
		if (c1->getAge() < m1->getMinAge())
			throw 2;//minimum age requirement
		return c1->cost(tickets_num, *s1);
	}
	catch (int e)
	{
		throw e;
	}
}

void Theater::addSeat(int client_code, int screening_code, int row, int col)
{
	try
	{
		Client* c1 = &clientList.search(client_code);
		Screening* s1 = &screeningList.search(screening_code);
		s1->addSeat(*c1, row, col);
	}
	catch (int e)
	{
		throw e;
	}
}


bool Theater::checkEmployee(int manager_code, int employee_code)
{
	try
	{
		Manager m1 = managerList.search(manager_code);
		RegularEmployee e1 = m1.rgVec.search(employee_code);
	}
	catch (int e)
	{
		return false;
	}
	return true;
}

float Theater::getSalary(int hours, int manager_code, int employee_code)
{
	try
	{
		Manager m1 = managerList.search(manager_code);
		RegularEmployee e1 = m1.rgVec.search(employee_code);
		return e1.getPayment(hours);
	}
	catch (int e)
	{
		throw e;
	}
}

float Theater::getSalary(int hours, int manager_code)
{
	try
	{
		Manager m1 = managerList.search(manager_code);
		return m1.getPayment(hours);
	}
	catch (int e)
	{
		throw e;
	}
}

void Theater::printSeatArr(int screening_code)
{
	try
	{
		Screening s1 = screeningList.search(screening_code);
		const bool** seatArray = s1.getSeatArr();
		cout << "  ";
		for (int i = 0; i < s1.getCol(); i++)
		{
			cout << i << " ";
		}
		cout << "\n";
		for (int i = 0; i < s1.getRow(); i++)
		{
			cout << i<< " ";
			for (int j = 0; j < s1.getCol(); j++)
			{
				(seatArray[i][j]) ? (cout << "X ") : (cout << "O ");
			}
			cout << "\n";
		}
	}
	catch (int e)
	{
		throw e;
	}
}

void Theater::printClients()
{
	cout << "\nThis theater clients are:\n";
	for (int i = 0; i < clientList.getSize(); i++)
	{
		cout << clientList[i].getCode() << "	" << clientList[i].getName() << ",	" << clientList[i].getAge() << "\n";
	}
}

void Theater::printEmployees()
{
	cout << "\nThis theater employees are:\n";
	for (int i = 0; i < managerList.getSize(); i++)
	{
		cout << "Manager #" << i + 1 << ":" << managerList[i].getCode() << "	" << managerList[i].getName() << "\n";
		for (int j = 0; j < managerList[i].rgVec.getSize(); j++)
		{
			cout << "	" << managerList[i].rgVec[j].getCode() << "	" << managerList[i].rgVec[j].getName() << "\n";
		}
	}
}


void Theater::printMovies()
{
	cout << "\nThis theater movies are:\n";
	for (int i = 0; i < movieList.getSize(); i++)
	{
		cout << movieList[i].getMovieCode() << "	" << movieList[i].getMovieName() << ",	" << movieList[i].getLength() << "mins.\n";
	}
}

void Theater::printScreenings(int movie_code)
{
	cout << "\nThis movie screenings are:\n";
	for (int i = 0; i < screeningList.getSize(); i++)
	{
		if(screeningList[i].getMovieCode()==movie_code)
			cout << screeningList[i].getCode() << ":" << movieList.search(screeningList[i].getMovieCode()).getMovieName() << ", " << screeningList [i].getTime()<< "\n";
	}
}
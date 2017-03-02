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
		Manager m1 = managerList.search(managerCode);
		m1.addEmployee(name);
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
		Manager m1 = managerList.search(manager_code);
		RegularEmployee e1 = m1.rgVec.search(employee_code);
		e1.sellTickets(tickets_num);
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
		Client* c1 = &clientList.search(client_code);
		Screening s1 = screeningList.search(screening_code);
		Movie* m1 = &movieList.search(s1.getMovieCode());
		if (c1->getAge() < m1->getMinAge())
			throw 2;//minimum age requirement
		return c1->cost(tickets_num, s1);
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
		Screening s1 = screeningList.search(screening_code);
		s1.addSeat(*c1, row, col);
	}
	catch (int e)
	{
		throw e;
	}
}

const bool** Theater::getSeatArr(int screening_code)
{
	try
	{
		Screening s1 = screeningList.search(screening_code);
		return s1.getSeatArr();
	}
	catch (int e)
	{
		throw e;
	}
}

void Theater::printClients()
{

}

void Theater::printManagers()
{

}

void Theater::printRegularEmployees()
{

}

void Theater::printMovies(){

}

void Theater::printScreeningRooms()
{

}

void Theater::printScreenings(int movie_code)
{

}
#pragma once
#include "Movie_Interface.h"
#include "Movie.h"
#include "HorrorMovie.h"
#include "KidsMovie.h"
#include "Screening_Room.h"
#include "Screening.h"
#include "Client.h"
#include "Business_Client.h"
#include "Private_Client.h"
#include "Employee.h"
#include "Manager.h"
#include "RegularEmployee.h"
#include "elementList.h"
#include <string>
using namespace std;
class Theater
{
	/*This is the main class for the theater. it contains a list for the clients, a list for the movies,
	a list for the employees (managers), a list for the screening rooms and list of screenings.
	the class method will manage the theater.*/
public:
	Theater();
	~Theater();
	void addClient(string& name, int age, bool isPrivate);//add a client to the list.
	void addManager(string& name);//add a manager to the list.
	void addRegularEmployee(string& name, int managerCode);//add a regular employee to the list.
	void addHorrorMovie(string& name, int minAge, float length, float price, hRate rating);//add horror movie to the movies list.
	void addKidsMovie(string& name, int minAge, int maxAge, float length, float price);//add kids movie to the movies list.
	void addScreeningRoom(int num_of_seats, int row);//add screening room to the list
	void addScreening(int movie_code, int screeningRoom_code, int time);//add screening to the list.
	
	void ticketsPurchase(int client_code, int manager_code, int employee_code, int tickets_num);//make a number of tickets purchase to a certaine client, manager and employee
	float ticketsCost(int client_code, int screening_code, int tickets_num);//returns the cost of a purchase. also check the clients age for the movie.
	void addSeat(int client_code,int screening_code, int row, int col);//add a single seat to the screening.
	
	bool checkEmployee(int manager_code, int employee_code);//check if the manager and employee exist in the list.
	float getSalary(int hours, int manager_code, int employee_code);//returns an regular employee salary by number of hours.
	float getSalary(int hours, int manager_code);//returns an regular employeemanager salary by number of hours.

	void printSeatArr(int screening_code);
	void printClients();//print a list of the clients.
	void printEmployees();//print a list of the employees (managers and each manager regular employees)
	void printMovies();//print a kist of the movies.
	void printScreenings(int movie_code);//print a list of the  screenings

private:
	elementList<Movie> movieList;//a list that holds all the movies.
	elementList<Screening_Room> screeningRoomList;//a list that holds all the screening rooms.
	elementList<Screening> screeningList;//a list that holds all the screenings.
	elementList<Client> clientList;//a list that holds all the clients.
	elementList<Manager> managerList;//a list that holds all the managers. each manager have a list of his employees

};


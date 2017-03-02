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
public:
	Theater();
	~Theater();
	void addClient(string& name, int age, bool isPrivate);
	void addManager(string& name);
	void addRegularEmployee(string& name, int managerCode);
	void addHorrorMovie(string& name, int minAge, float length, float price, hRate rating);
	void addKidsMovie(string& name, int minAge, int maxAge, float length, float price);
	void addScreeningRoom(int num_of_seats, int row);
	void addScreening(int movie_code, int screeningRoom_code, int time);
	
	void ticketsPurchase(int client_code, int manager_code, int employee_code, int tickets_num);
	float ticketsCost(int client_code, int screening_code, int tickets_num);
	void addSeat(int client_code,int screening_code, int row, int col);
	
	bool checkEmployee(int manager_code, int employee_code);
	float getSalary(int hours, int manager_code, int employee_code);
	float getSalary(int hours, int manager_code);

	void printSeatArr(int screening_code);
	void printClients();
	void printEmployees();
	void printMovies();
	void printScreeningRooms();
	void printScreenings(int movie_code);

private:
	elementList<Movie> movieList;
	elementList<Screening_Room> screeningRoomList;
	elementList<Screening> screeningList;
	elementList<Client> clientList;
	elementList<Manager> managerList;

};


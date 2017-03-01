#pragma once
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
	void addClient(string& name, int age, int type);
	void addManager(string& name);
	void addEmployee(string& name);
	void addMovie(string& name, int minAge, float length, float price,int type);
	void addScreeningRoom(int num_of_seats, int row);
	void addScreening(int movie_code, int screeningRoom_code, int time);
	
	void ticketsPurchase(int client_code, int screening_code, int tickets_num);
	float ticketsCost(int client_code, int screening_code, int tickets_num);

	void printClients();
	void printManagers();
	void printEmployees();
	void printMovies();
	void printScreeningRooms();
	void printScreenings();

private:
	elementList<Movie> movieList;
	elementList<Screening_Room> screeningRoomList;
	elementList<Screening> screeningList;
	elementList<Client> clientList;
	elementList<Manager> managerList;

};


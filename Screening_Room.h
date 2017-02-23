#pragma once
class Screening_Room
{
public:
	Screening_Room();
	Screening_Room(int num_of_seats);
	~Screening_Room();
	int getCode();
	int getSeats();
private:
	int num_of_seats;
	int code;
	static int count;
};


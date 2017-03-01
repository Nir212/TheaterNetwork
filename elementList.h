#pragma once
#include <vector>
using namespace std;

template<class T>
class elementList
{
public:
	elementList();
	~elementList();
	void addElement(T& element);//add element.
	void removeElement(int code);//remove the element by his code.
	bool isEmpty();//check if there is no elements.
	T& search(int code);//search for element by his code.
	int getSize();//return the number of elements.
	const T& operator[](int i);//return element by index.
	
private:
	vector<T> vec;//vector containing all the elements.
};

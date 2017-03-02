#include "stdafx.h"
#include "elementList.h"

template<class T>
elementList<T>::elementList()
{
}

template<class T>
elementList<T>::~elementList()
{
}

template<class T>
void elementList<T>::addElement(T& element)
{
	vec.push_back(element);
}

template<class T>
void elementList<T>::removeElement(int code)
{
	int len = vec.size();
	if (isEmpty)
		throw (1);
	for (int i = 0; i < len; i++)
	{
		if (vec[i] == code)
		{
			vec.erase(vec.begin() + i);
			return;
		}
	}
	throw (1);
}

template<class T>
bool elementList<T>::isEmpty() const
{
	if (vec.size() == 0)
		return true;
	else
		return false;
}

template<class T>
T& elementList<T>::search(int code)
{
	int len = vec.size();
	if (isEmpty())
		throw (1);
	for (int i = 0; i < len; i++)
	{
		if (vec[i] == code)
			return vec[i];
	}
	throw (1);
}


template<class T>
int elementList<T>::getSize() const
{
	
	
	return vec.size();

}

template<class T>
const T& elementList<T>::operator[](int i) const
{
	return vec[i];
}
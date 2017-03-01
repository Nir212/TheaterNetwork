#include "stdafx.h"
#include "Manager.h"


int Manager::managerCode = 0;

Manager::Manager()
{
	rgVec.push_back(RegularEmployee());
}

Manager::~Manager()
{
}

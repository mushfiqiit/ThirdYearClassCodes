#include "PrintMode.h"

PrintMode::PrintMode()
{
	//ctor
}

void PrintMode::setCostPerPage(double recievedCostPerPage)
{
	this->costPerPage=recievedCostPerPage;
}

double PrintMode::getCostPerPage()
{
	return costPerPage;
}

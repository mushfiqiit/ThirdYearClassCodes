#include "PrioritySetting.h"

PrioritySetting::PrioritySetting()
{
	//ctor
}
void PrioritySetting::changePriority(int recievedPriority)
{
	this->priority=recievedPriority;
}

int PrioritySetting::getPriority()
{
	return priority;
}

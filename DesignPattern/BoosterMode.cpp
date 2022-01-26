#include "BoosterMode.h"

BoosterMode::BoosterMode()
{
	//ctor
}

Document BoosterMode::increaseColorIntensity(Document recievedDocument)
{
	recievedDocument.setColorIntensity(intensityThreshold);
	return recievedDocument;
}

Document BoosterMode::Boost(Document recievedDocument)
{
	return increaseColorIntensity(recievedDocument);
}

void BoosterMode::setIntensityThreshold(double recievedIntensityThreshold)
{
	this->intensityThreshold=recievedIntensityThreshold;
}

double BoosterMode::getIntensityThreshold()
{
	return intensityThreshold;
}

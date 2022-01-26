#include "TonerSaveMode.h"

TonerSaveMode::TonerSaveMode()
{
	//ctor
}

void TonerSaveMode::reduceColorIntensityUsingAlgorithmOne()
{
	cout << "For high toner saving level";
}

void TonerSaveMode::reduceColorIntensityUsingAlgorithmTwo()
{
	cout << "For medium toner saving level";
}

void TonerSaveMode::reduceColorIntensityUsingAlgorithmThree()
{
	cout << "For hight toner saving level";
}

void TonerSaveMode::saveTonerInternal()
{
	if(tonerSavingLevel=="high")
	reduceColorIntensityUsingAlgorithmOne();

	else if(tonerSavingLevel=="medium")
	reduceColorIntensityUsingAlgorithmTwo();

	else
	reduceColorIntensityUsingAlgorithmThree();
	cout << " ColorIntensity Reduced.";
}

void TonerSaveMode::setTonerSavingLevel(string recievedTonerSavingLevel)
{
	this->tonerSavingLevel=recievedTonerSavingLevel;
}

string TonerSaveMode::getTonerSavingLevel()
{
	return tonerSavingLevel;
}

void TonerSaveMode::saveToner()
{
	saveTonerInternal();
}


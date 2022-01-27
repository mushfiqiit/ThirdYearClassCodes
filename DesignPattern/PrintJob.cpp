#include "PrintJob.h"

PrintJob::PrintJob()
{
	//PrintRequest=new queue();
}

void PrintJob::sendToProduction(PrintRequest recievedPrintRequest)
{
	cout << "Print Request implemented.\n";
}

void PrintJob::addJob(PrintRequest recievedPrintRequest)
{
	//PrintRequests.push(make_pair(recievedPrintRequest.getPriority(),  recievedPrintRequest));
}

void PrintJob::pullJob(PrintRequest recievedPrintRequest)
{
	PrintRequest PulledPrintRequest=PrintRequests.front();
	PrintRequests.pop();
	sendToProduction(PulledPrintRequest);
}

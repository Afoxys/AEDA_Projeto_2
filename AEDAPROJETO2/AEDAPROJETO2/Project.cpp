#include "pch.h"
#include "Project.h"


Project::Project()
{
}


Project::~Project()
{
}

bool Project::addTicket(Ticket ticket) {
	priorityQueue.push(ticket);
}

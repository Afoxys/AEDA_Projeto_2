#include "pch.h"
#include "Project.h"

/*
Project::Project()
{
}*/


Project::~Project()
{
}

bool Project::addTicket(Ticket ticket) {
	priorityQueue.push(ticket);
	return true;
}

Ticket Project::getMostPriority() {
	vector<Ticket> temp;
	while (!priorityQueue.empty()) {
		Ticket ticket = priorityQueue.top();
		priorityQueue.pop();
		if (ticket.getEstimatedCompletionTime() < ticket.getTimeToCompletion()) {
			returnTickets(temp);
			return ticket;
		}
		else temp.push_back(ticket);
	}
	returnTickets(temp);
	return Ticket(0, 0, 0);
}

void Project::returnTickets(vector<Ticket> tickets) {
	for (unsigned i = 0; i < tickets.size(); i++)
		priorityQueue.push(tickets[i]);
}
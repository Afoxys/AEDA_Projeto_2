#pragma once
#include "Ticket.h"
#include "BST.h"

/*This Class is left mostly undone because it's only being used as a shell to facilitate our project, since in the first part of the
project we were not able to compile our code and thus we are not using the code from that part*/

class Project
{
	int id;
public:
	Project(int id) { this->id = id; }
	~Project();
	int getId() const{ return id; }
	priority_queue<Ticket> priorityQueue;
	bool addTicket(Ticket ticket);
	Ticket getMostPriority();
	void returnTickets(vector<Ticket> tickets);
};


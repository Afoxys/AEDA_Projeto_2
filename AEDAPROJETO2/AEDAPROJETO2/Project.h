#pragma once

#include "Ticket.h"
#include "BST.h"

/*This Class is left undone because it's only being used as a shell to facilitate our project, since in the first part of the
project we were not able to compile our code and thus we are not using the code from that part*/

class Project
{
public:
	Project();
	~Project();
	priority_queue<Ticket> priorityQueue;
	bool addTicket(Ticket ticket);
};


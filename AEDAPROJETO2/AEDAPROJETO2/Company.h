#pragma once
#include <iostream>
#include "Client.h"
#include "BST.h"
#include "FinishedProjects.h"
using namespace std;

class Company
{
public:
	Company(); 
	Company(BST<Client> clientTree);
	~Company();
	bool addClient(Client &clnt1);
	bool removeClient(Client &clnt1);
	BST<Client> getClients();
	void addProject(Project project);
	vector<Project> getCurrentProjects();
	int completeProject(Project proj);
	void deleteFinishedProject(Project proj);
	void setProjectAsCurrent(Project proj);
	tabHFinishedProjs getFinishedProjects();
private:
	BST<Client> clients;
	vector<Project> currentProjects;
	tabHFinishedProjs finishedProjects;
};


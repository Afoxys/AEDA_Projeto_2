#include "pch.h"
#include "Company.h"

Company::Company() :clients(Client("",0,0)) {}


Company::Company(BST<Client> clientTree) : clients(clientTree){
}


Company::~Company()
{
}

bool Company::addClient(Client &clnt1) {
	Client notFound("", 0, 0);
	Client newClient(clnt1.getName(), clnt1.getNIF(), clnt1.getContact());
	Client findAttempt = clients.find(newClient);

	if (findAttempt == notFound) {
		clients.insert(newClient);
		return true;
	}
	else return false;
}

bool Company::removeClient(Client &clnt1) {
	Client notFound("", 0, 0);
	Client newClient(clnt1.getName(), clnt1.getNIF(), clnt1.getContact());
	Client findAttempt = clients.find(newClient);

	if (!(findAttempt == notFound)) {
		clients.remove(newClient);
		return true;
	}
	else return false;
}

BST<Client> Company::getClients() {
	return this->clients;
}

/**
* @brief Adds a project to the company
* @param project - pointer to project to add
*/
void Company::addProject(Project* project) {
	currentProjects.push_back(project);
}

/**
* @brief returns a vector with the current projects
*/
vector<Project*> Company::getCurrentProjects() { return currentProjects; }

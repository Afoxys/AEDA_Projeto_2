#include "pch.h"
#include "Company.h"

/**
* @brief Default constructor for the class Company
*/
Company::Company() :clients(Client("",0,0)) {}

/**
* @brief Constructor for the class Company
* @param clientTree - BST<Client> that belongs to the company to be constructed
*/
Company::Company(BST<Client> clientTree) : clients(clientTree){
}


Company::~Company()
{
}

/**
* @brief Adds an object of the class Client to the BST
* @param clnt - Client to be added
* @return  true if the client was added successfully, and false if it was not
*/
bool Company::addClient(Client &clnt) {
	Client notFound("", 0, 0);
	Client newClient(clnt.getName(), clnt.getNIF(), clnt.getContact());
	Client findAttempt = clients.find(newClient);

	if (findAttempt == notFound) {
		clients.insert(newClient);
		return true;
	}
	else return false;
}

/**
* @brief Removes an object of the class Client from the BST
* @param clnt - Client to be removed
* @return  true if the client was removed successfully, and false if it was not
*/
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

/**
* @brief Returns the BST of that company
* @return  BST<Client> of the company
*/
BST<Client> Company::getClients() {
	return this->clients;
}

/**
* @brief Adds a project to the company
* @param project - pointer to project to add
*/
void Company::addProject(Project project) {
	currentProjects.push_back(project);
}

/**
* @brief returns a vector with the current projects
*/
vector<Project> Company::getCurrentProjects() { return currentProjects; }

/**
* @brief Sets a project as finished by removing it from the currentProjects and saving it to the finishedProjects
* @param id - ID of the project to change status
* @return  1 if the project doesn't exist, 0 if it is set as finished
*/
int Company::completeProject(Project proj) {
	for (size_t i = 0; i < currentProjects.size(); i++)
	{
		if (currentProjects.at(i).getId() == proj.getId()) {
			finishedProjects.insert(currentProjects.at(i));
			currentProjects.erase(currentProjects.begin() + i);
			return 0;
		}
	}
	return 1;
}

/**
* @brief Deletes a project from the finishedProjects HashTable
* @param proj - the project to be deleted
*/
void Company::deleteFinishedProject(Project proj) {
	finishedProjects.erase(proj);
}

/**
* @brief Changes the status of a finished project to on going (current)
* @param proj - the project to change status
*/
void Company::setProjectAsCurrent(Project proj) {
	unordered_set<Project, finishedProjsHash, finishedProjsHash>::const_iterator it;
	it = finishedProjects.find(proj);
	addProject(*it);
	finishedProjects.erase(proj);

}

/**
* @brief get finished projects
* @return hashtable with the finished projects
*/
tabHFinishedProjs Company::getFinishedProjects() {
	return finishedProjects;
}

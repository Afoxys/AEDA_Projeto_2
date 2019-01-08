#include "pch.h"
#include "Client.h"

/**
* @brief Default constructor for the class Client
*/
Client::Client(){
	Client::name = "";
	Client::nif = 0;
	Client::contact = 0;
	Client::clientProjects = {};
}

/**
* @brief Constructor for the class Client
* @param name - Name of the client
* @param nif - NIF of the client
* @param contact - Contact of the client
*/
Client::Client(string name, int nif, int contact) {
	Client::name = name;
	Client::nif = nif;
	Client::contact = contact;
	Client::clientProjects = {};
}

/**
* @brief Function to return the client's NIF
*/

int Client::getNIF() {
	return this->nif;
}

/**
* @brief Function to return the client's contact
*/
int Client::getContact() {
	return this->contact;
}

/**
* @brief Function to return the client's name
*/
string Client::getName() {
	return this->name;
}

/**
* @brief Function to return the client's projects
*/
int Client::getNumberProjects() {
	return this->clientProjects.size();
}

/**
* @brief Function to add an object of the class Project to the vector of projects
*/
void Client::addProject(Project proj) {
	this->clientProjects.push_back(proj);
}


Client::~Client(){}

/**
* @brief Operator function to return the comparison of two clients
* @param clnt1 - object of the class Client
* @return true if the client is bigger
*/
bool Client::operator<(const Client &clnt1) const {
	if(this->clientProjects.size() == clnt1.clientProjects.size()) {
		return(this->name < clnt1.name);
	}
	else return(this->clientProjects.size() < clnt1.clientProjects.size());
}

/**
* @brief Operator function to return the equality of two clients
* @param clnt1 - object of the class Client
* @return true if the clients are equal
*/
bool Client::operator==(const Client &clnt1) const {
	return((this->name == clnt1.name) && (this->contact == clnt1.contact) && (this->nif == clnt1.nif));
}


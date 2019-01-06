#include "pch.h"
#include "Client.h"


Client::Client(){
	Client::name = "";
	Client::nif = 0;
	Client::contact = 0;
	Client::clientProjects = {};
}

Client::Client(string name, int nif, int contact) {
	Client::name = name;
	Client::nif = nif;
	Client::contact = contact;
	Client::clientProjects = {};
}

int Client::getNIF() {
	return this->nif;
}

int Client::getContact() {
	return this->contact;
}

string Client::getName() {
	return this->name;
}

int Client::getNumberProjects() {
	return this->clientProjects.size();
}

void Client::addProject(Project proj) {
	this->clientProjects.push_back(proj);
}


Client::~Client(){}

bool Client::operator<(const Client &clnt1) const {
	if(this->clientProjects.size() == clnt1.clientProjects.size()) {
		return(this->name < clnt1.name);
	}
	else return(this->clientProjects.size() < clnt1.clientProjects.size());
}

bool Client::operator==(const Client &clnt1) const {
	return((this->name == clnt1.name) && (this->contact == clnt1.contact) && (this->nif == clnt1.nif));
}


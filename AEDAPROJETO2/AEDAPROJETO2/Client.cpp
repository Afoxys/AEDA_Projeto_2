#include "pch.h"
#include "Client.h"


Client::Client(){
	Client::name = "";
	Client::nif = 0;
	Client::contact = 0;
}

Client::Client(string name, int nif, int contact) {
	Client::name = name;
	Client::nif = nif;
	Client::contact = contact;
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

void Client::addProject(Projects proj) {
	this->clientProjects.push_back(proj);
}


Client::~Client(){}

bool Client::operator<(const Client &clnt1) const {
	if(this->getNumberProjects() == clnt1.getNumberProjects()) {
		return(this->getName() < clnt1.getName());
	}
	else return(this->getNumberProjects() < clnt1.getNumberProjects());
}

bool Client::operator==(const Client &clnt1) const {
	return((this->getName == clnt1.getName) && (this->getContact == clnt1.getContact) && (this->getNIF == clnt1.getNIF));
}


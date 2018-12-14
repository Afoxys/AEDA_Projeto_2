#include "pch.h"
#include "Client.h"


Client::Client(){
	string randomname;
	size_t randomNameSize = (rand() % 5 + 20);
	for (size_t i = 0; i < 2; i++){
		randomname = (char)(rand() % 65 + 90);
	}
	for (size_t i = 0; i < randomNameSize; i++) {
		randomname = (char)(rand() % 97 + 122);
	}
	Client::name = randomname;
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

Client::~Client(){}

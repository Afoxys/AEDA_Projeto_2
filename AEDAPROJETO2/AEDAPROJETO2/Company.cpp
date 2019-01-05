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

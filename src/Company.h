#pragma once
#include <iostream>
#include "Client.h"
#include "BST.h"

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
private:
	BST<Client> clients;
};

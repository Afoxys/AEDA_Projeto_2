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
private:
	BST<Client> clients;
};


#pragma once
#include <iostream>
#include "Client.h"
#include "BST.h"

using namespace std;

class Company
{
public:
	Company();
	~Company();
private:
	BST<Client> clients;
};


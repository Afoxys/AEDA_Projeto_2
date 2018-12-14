#pragma once
#include <iostream>

using namespace std;

class Client
{
public:
	Client();
	Client(string name, int nif, int contact);
	string getName();
	int getNIF();
	int getContact();
	~Client();
private:
	string name;
	int nif;
	int contact;
};


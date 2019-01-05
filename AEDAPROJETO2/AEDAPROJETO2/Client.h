#pragma once
#include <iostream>
#include "Projects.h"
#include <vector>

using namespace std;

class Client
{
private:
	string name;
	int nif;
	int contact;
	vector<Projects> clientProjects;

public:
	Client();
	Client(string name, int nif, int contact);
	string getName();
	int getNIF();
	int getContact();
	~Client();
	bool operator<(const Client &clnt1) const;
	bool operator==(const Client &clnt1) const;
	int getNumberProjects();
	void addProject(Projects proj);


};


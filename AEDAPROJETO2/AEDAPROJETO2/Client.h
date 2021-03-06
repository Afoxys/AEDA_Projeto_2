#pragma once
#include <iostream>
#include "Project.h"
#include <vector>

using namespace std;

class Client
{
private:
	string name;
	int nif;
	int contact;
	vector<Project> clientProjects;

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
	void addProject(Project proj);


};


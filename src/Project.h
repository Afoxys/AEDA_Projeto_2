#pragma once

/*This Class is left undone because it's only being used as a shell to facilitate our project, since in the first part of the
project we were not able to compile our code and thus we are not using the code from that part*/

class Project
{
	int id;
public:
	Project(int id) { this->id = id; }
	~Project();
	int getId(){ return id; }
};


#pragma once

#include <iostream>
#include "Project.h"
#include <unordered_set>


//A ALTERAR!!
struct finishedProjsHash
{
	int operator() (const Project & proj) const
	{

		return proj.getId();
	}

	bool operator() (const Project & proj1, const Project & proj2) const
	{
		return (proj1.getId()==proj2.getId());
	}
};


typedef unordered_set<Project, finishedProjsHash, finishedProjsHash> tabHFinishedProjs;
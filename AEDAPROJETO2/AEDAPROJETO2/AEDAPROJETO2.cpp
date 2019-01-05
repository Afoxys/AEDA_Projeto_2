// AEDAPROJETO2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Company.h"

//Client stored in BST:
// 1st in order of number of projects
// 2nd in alphabetic order

//Projects to be stored in a priority stack
// In order of urgency
// There must be a function to determin if a project can end before the deadline
// ECT (Estimated Completion Time) < TTC (Time To Completion)




int main()
{
	Client c("BigBoyCompany", 231497318, 910676864);
	string name = c.getName();
	cout << "Name: ";
	for (size_t i = 0; i < name.size(); i++){
		cout << name[i];
	}
	cout << endl;
	cout << "NIF: " << c.getNIF() << endl;
	cout << "Contact: " << c.getContact() << endl;

	Client d;
}

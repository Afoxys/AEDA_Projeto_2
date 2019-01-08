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
	bool test1, test2;
	test1 = false;
	test2 = false;

	//Creating a new empty company
	Company c;
	//Creating new clients
	Client realCompany("Fake", 258314677, 915485265);
	Client garbageCompany("GoldenGarbage", 258787677, 915455165);
	Client goodCompany("WeGood", 258315214, 914524567);
	//Adding clients to the company
	c.addClient(realCompany);
	c.addClient(garbageCompany);
	c.addClient(goodCompany);

	//Test 1 - Testing the functionality of the BST for added client
	BST<Client> a = c.getClients();
	if (a.find(goodCompany) == goodCompany) {
		test1 = true;
	}

	//Test 2 - Testing the functionality of the BST for removed client
	c.removeClient(goodCompany);
	BST<Client> b = c.getClients();
	if (!(b.find(goodCompany) == goodCompany)) {
		test2 = true;
	}

	//If both tests work there is an output equal to "Sucess" otherwise the output is wich test failed
	if (test1 && test2) { cout << "Sucess!" << endl; }
	else if (test1 && !(test2)) { cout << "test2 has failed" << endl; }
	else if (!(test1) && test2) { cout << "test1 has failed" << endl; }
}

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
	/*Test for the BST

	//Creating a new empty company
	Company gud;
	//Creating new clients
	Client realClient("fakeComapny", 258314677, 915485265);
	//Creating new projects
	Project a(1);
	Project b(2);
	Project d(4);
	//Adding projects to realClient
	realClient.addProject(a);
	realClient.addProject(b);
	realClient.addProject(d);
	Client badClient("Golden", 258787677, 915455165);
	Project e(5);
	Project f(6);
	badClient.addProject(e);
	badClient.addProject(f);
	Client goodClient("Good", 258315214, 914524567);
	//Adding clients to the company
	gud.addClient(realClient);
	gud.addClient(badClient);
	gud.addClient(goodClient);

	//Test 1 - Testing the functionality of the BST for added client
	BST<Client> first = gud.getClients();
	if (first.find(goodClient) == goodClient) {
		cout << "The client goodCompany has been successfully added " << endl;
	}

	//Test 2 - Testing the functionality of the BST for removed client
	gud.removeClient(goodClient);
	BST<Client> second = gud.getClients();
	if (!(second.find(goodClient) == goodClient)) {
		cout << "The client goodCompany has been successfully removed " << endl;
	}

	//Test 3 - Testing the order of the BST named second
	Client bstSize = second.findMax();
	string name = bstSize.getName();
	cout << "The biggest client is: ";
	for (size_t i = 0; i < name.size(); i++){
		cout << name[i];
	}
	cout << endl;
	*/
	

	/* Tests for the hashtable
	Project joana(18);
	c.addProject(joana);
	cout<<c.getCurrentProjects().at(0).getId()<<endl;
	c.completeProject(joana.getId());
	cout <<"size current: "<< c.getCurrentProjects().size()<<endl;
	cout << "number of appearances in hashtable: " << c.getFinishedProjects().count(joana)<<endl;
	c.setProjectAsCurrent(joana);
	cout << "number of appearances in hashtable: " << c.getFinishedProjects().count(joana)<<endl;
	cout << "size current: " << c.getCurrentProjects().size() << endl;
	c.deleteFinishedProject(joana);
	cout << "number of appearances in hashtable: " << c.getFinishedProjects().count(joana) << endl;
	*/
}

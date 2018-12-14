// AEDAPROJETO2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Client.h"



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
	string name2 = d.getName();
	cout << "Name: ";
	for (size_t i = 0; i < name.size(); i++) {
		cout << name2[i];
	}
	cout << endl;
	cout << "NIF: " << d.getNIF() << endl;
	cout << "Contact: " << d.getContact() << endl;
}

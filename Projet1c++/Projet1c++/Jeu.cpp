#include "Jeu.h"
#include <iostream>

using namespace std;

Jeu::Jeu(string name, int ID)
{
	this->nomDuJeu = name;
	this->idDuJeu = ID;
}


Jeu::~Jeu()
{
}

string Jeu::getName()
{
	return nomDuJeu;
}

void Jeu::setName(string newName)
{
	nomDuJeu = newName;
}

int Jeu::getID()
{
	return idDuJeu;
}

void Jeu::setID(int newID)
{
	idDuJeu = newID;
}
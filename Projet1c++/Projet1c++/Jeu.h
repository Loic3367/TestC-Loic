#pragma once
#include <iostream>
using namespace std;
class Jeu
{
public:
	Jeu(string name, int ID);
	~Jeu();
	void setName(string newName);
	string getName();

	void setID(int newiD);
	int getID();




protected:

private:
	int idDuJeu;
	string nomDuJeu;
	
};


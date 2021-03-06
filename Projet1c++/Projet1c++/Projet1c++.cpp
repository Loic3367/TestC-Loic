
#include <vector>
#include "Jeu.h"
#include "Joueur.h"
#include <string>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
	//Démarrage de la session de Jeu
	std::cout << "Bienvenue au Guld Casino ! Ici vous pourrez gagner des sommes astronomiques" << endl;

	//Récuperer le nom du Joueur et le stocker dans la classe Joueur
	std::cout << "Afin que nous puissions vous retrouver dans nos fichiers, veuillez nous indiquer votre nom svp"<< endl;
	Joueur NouveauJoueur;
	NouveauJoueur.nomDuJoueur;
	std::cin >> NouveauJoueur.nomDuJoueur;
	std::cout  << endl << "Bonjour" << NouveauJoueur.nomDuJoueur;

	//Gerer le nombre de jetons
	NouveauJoueur.nbrJetonsDepart = 100;
	std::cout << endl << "Vous avez " << NouveauJoueur.nbrJetonsDepart << " Jetons de depart" <<endl;

	//Sauvegarder le NomduJoueur ainsi que ses jetons dans un nouveau fichier
	std::fstream file;
	std::vector<string> vec;
	file.open("Testc++\TestC-Loic\Projet1c++\test3.txt", std::fstream::in | std::fstream::out);
	file << NouveauJoueur.nomDuJoueur << endl;
	file << NouveauJoueur.nbrJetonsDepart << endl;
	//Fermer la connexion

	file.close();
	//Veux-t-il faire une nouvelle partie ou continuer une ancienne
	std::cout << "Que souhaitez-vous faire ? (0) pour nouvelle partie, (1) pour charger une ancienne partie" << endl;
	int partie;
	std::cin >>partie;
	//Proposition des jeux disponible au casino
	std::vector<Jeu*> mesJeux;
	
	//Variable pour rejouer
	int choix;

	mesJeux.push_back(new Jeu("Roulette",1));
	mesJeux.push_back(new Jeu("Craps", 2));
	mesJeux.push_back(new Jeu("Black Jack", 3));

	do
	{
		

		//Demander combien il souhaite mettre de jetons
		cout << "Combien souhaitez-vous mettre de jetons ?";
		cin >> NouveauJoueur.mise;

		//Vecteur des jeux
		cout << endl << "Veuillez choisir un jeu ! (0) pour Roulette, (1) pour craps, (2) pour Black Jack " << endl;

		/*for (int i = 0; i < mesJeux.size(); i++)
		{
			cout << mesJeux.at(i)->getName();
		}
		*/
		int jeuChoisi;
		cin >> jeuChoisi;


		//On gère le choix du Joueur ainsi que le résultat de la partie
		srand(time(NULL));
		int partieGagne = rand() % 2;

		//Bug en utilisant mesJeux.at(1)->getID()

		if (jeuChoisi == 0)
		{
			cout << "Bienvenue dans la Roulette" << endl;
			//Boucle sur le résultat de la partie, ajouter ou retirer la mise des jetons de départ
			if (partieGagne == 0)
			{
				cout << "Vous venez de perdre " << NouveauJoueur.mise << "jetons" << endl;
				NouveauJoueur.nbrJetons = NouveauJoueur.nbrJetonsDepart - NouveauJoueur.mise;
				cout << "Vous avez" << NouveauJoueur.nbrJetons << "jetons";
			}
			else
			{
				cout << "Vous venez de gagner" << NouveauJoueur.mise << "jetons" << endl;
				NouveauJoueur.nbrJetons = NouveauJoueur.nbrJetonsDepart + NouveauJoueur.mise;
				cout << "Vous avez" << NouveauJoueur.nbrJetons << "jetons";
			}


		}
		else if (jeuChoisi == 1)
		{
			cout << "Bienvenue dans le Craps" << endl;
			//Boucle sur le résultat de la partie, ajouter ou retirer la mise des jetons de départ
			if (partieGagne == 0)
			{
				cout << "Vous venez de perdre " << NouveauJoueur.mise << "jetons" << endl;
				NouveauJoueur.nbrJetons = NouveauJoueur.nbrJetonsDepart - NouveauJoueur.mise;
				cout << "Vous avez" << NouveauJoueur.nbrJetons << "jetons";
			}
			else
			{
				cout << "Vous venez de gagner" << NouveauJoueur.mise << "jetons" << endl;
				NouveauJoueur.nbrJetons = NouveauJoueur.nbrJetonsDepart + NouveauJoueur.mise;
				cout << "Vous avez" << NouveauJoueur.nbrJetons << "jetons";
			}
		}
		else if (jeuChoisi == 2)
		{
			cout << "Bienvenue dans le Black Jack" << endl;
			//Boucle sur le résultat de la partie, ajouter ou retirer la mise des jetons de départ
			if (partieGagne == 0)
			{
				cout << "Vous venez de perdre " << NouveauJoueur.mise << "jetons" << endl;
				NouveauJoueur.nbrJetons = NouveauJoueur.nbrJetonsDepart - NouveauJoueur.mise;
				cout << "Vous avez" << NouveauJoueur.nbrJetons << "jetons";
			}
			else
			{
				cout << "Vous venez de gagner" << NouveauJoueur.mise << "jetons" << endl;
				NouveauJoueur.nbrJetons = NouveauJoueur.nbrJetonsDepart + NouveauJoueur.mise;
				cout << "Vous avez" << NouveauJoueur.nbrJetons << "jetons";
			}
		}




		//On demande au joueur ce qu'il souhaite faire (rejouer etc.)
		cout << endl << "Que souhaitez-vous faire ? (0) pour rejouer, (1) pour sauvegarder, (2) pour charger, (3) pour quitter";
		
		cin >> choix;
		if (choix == 1)
		{
			//Gerer la sauvegarde
		}
	} while ((choix != 1) || (choix != 2) || (choix != 3));

		

	system("pause");
    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    //D�marrage de la session de Jeu
	std::cout << "Bienvenue au Guld Casino ! Ici vous pourrez gagner des sommes astronomiques\n";

	//R�cuperer le nom du Joueur
	std::cout << "Afin que nous puissions vous retrouver dans nos fichiers, veuillez nous indiquer votre nom svp";
	string nomDuJoueur;
	std::cin >> nomDuJoueur;

	std::cout << "Bonjour" << nomDuJoueur;
    return 0;
}

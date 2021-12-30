// Q1EXO1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include<list>
#include<deque>
using namespace std;
int main()
{
	deque<string> deque_Mot;
	list<string> List_Mot;
	string mot;
	for (int i = 0; i < 4; i++)
	{
		cout << "\nEntrer un mot : ";
		cin >> mot;
		deque_Mot.push_back(mot);
	}

	cout << "\n\nAffichage de deque :\n\n" << endl;

	for (auto it : deque_Mot)
		cout << it << "\t";

	for (int i = 0; i < deque_Mot.size(); i++)
	{
		List_Mot.push_back(deque_Mot[i]);
	}
	cout << "\n\nAffichage de liste :\n\n" << endl;
	for (auto it : List_Mot)
		cout << it << "\t";

	List_Mot.sort();
	cout << "\n\nAffichage de liste triée :\n\n" << endl;
	for (auto it : List_Mot)
		cout << it << "\t";


}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.

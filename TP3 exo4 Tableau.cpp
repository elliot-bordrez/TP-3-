// TP3 exo4 Tableau.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#define CR_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	//Ce sont les differentes variables
	char str[50];
	int i;
	//On demande a l'utilisateur de rentrer une chaine
	printf("\n la chaine a convertir en minuscules : ");
	gets_s(str);
	//Le programme convertie les majuscules en minuscules
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
		}
	}
	//On affiche le resultat en minuscule
	printf("\n la chaine en minuscule = %s", str);
	return 0;
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

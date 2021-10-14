// TP 3 exo 1 Tableau.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include<stdio.h>
#include<conio.h>
#include <tchar.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[20], rev[20];
	int t, i, j;

	printf(" Entrez une chaine de caractere :  ");
	gets_s(str);

	j = 0;
	t = strlen(str);

	rev[t] = '\0'; 
	for (i = t-1 ; i >= 0; i--)
	{
		rev[j++] = str[i];
	}

	printf(" Chaine de caractere après inversion = %s", rev);

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

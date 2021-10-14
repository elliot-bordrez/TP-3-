// TP3 Exo 2 Tableau.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 1024
#include<stdio.h>
#include<conio.h>
#include <tchar.h>
#include <stdlib.h>
#include <string.h>

int main()
{
//Variables
char str[100];
int i, count = 1;

	char ocr[BUFFER_SIZE];
	char chaine[BUFFER_SIZE];

	//On demande a l'utilisateur d'entrer l'occurance souhaitez
	printf("Entrez l'occcurance que vous souhaitez : ");
	fgets(ocr, BUFFER_SIZE, stdin);
	//On demande a l'utilisateur d'entrer la chaine de caractere
	printf("Entrez une chaine de caractere : ");
	fgets(chaine, BUFFER_SIZE, stdin);

	//On va lire la phrase a partir de la droite
	char * suiteChaine = strrchr(chaine, 'c');
	if (suiteChaine != NULL) // Si on a trouvé quelque chose

		//On recherche l'occurance souhaitez a partir de la droite et analyse sa position
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			{
				count++;
			}
		}
	{
		//On affiche le resultat
		printf("Le caractere %s se trouve a la position %d a partir de la droite", ocr, chaine, suiteChaine);
	}

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

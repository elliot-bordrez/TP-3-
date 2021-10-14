// TP3 Exo3 Tableau.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main()
{
	int i, tab, j, x, k, ;
	char str[BUFFER_SIZE];

	printf("------ CHAINE DE CARACTERES ------\n\n");

	printf("Saisissez une chaine de caracteres : ");
	fgets(str, BUFFER_SIZE, stdin);

	int k = j;
	do
	{
		tab[k] = tab[k + 1];
		k++;
	} while (tab[k + 1] != '\0');


	printf("\n");

	return 0;
}
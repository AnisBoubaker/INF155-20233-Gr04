
// If not defined
#ifndef TEMPERATURES__H_
#define TEMPERATURES__H_

/*
 * DEPENDANCES
 */
#include <stdio.h>


#define MAX_LIGNES 10
#define MAX_COLONNES 20

/*
 * MOYENNE_TAB2D
 * Calcule la moyenne d'un tableau de temperatures.
 * PARAMETRES:
 * - tab: Tableau 2D contenant ;les temperatures
 * - nb_lignes: tialles effective en lignes
 * - nb_colonnes: taille effectuive en colonnes
 * RETOUR: La moyenne des valeurs dans le tableau
 */
double moyenne_tab2d(double tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes);

/*
 * AFFICHER_TAB2D
 * ....
 */
void afficher_tab2d(double tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes);

/*
 * TEMPERATURE_EXCEDANT
 * Fonction temperature_excedant qui reçoit un tableau de temperatures
 * et un seuil. Elle retourne le nombre de températures qui excèdent le seuil
 * ....
 */
int temperatures_excedant(double temp[][MAX_COLONNES],
                          int nb_lignes,
                          int nb_colonnes,
                          double seuil);


#endif
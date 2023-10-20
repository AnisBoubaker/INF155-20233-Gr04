
#include "temperatures.h"


void afficher_tab2d(double tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes)
{
    for(int i=0; i< nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            printf("%.2lf\t", tab[i][j]);
        }
        printf("\n");
    }
}

/*
 * Écrire une fonction moyenne_tab2d qui calcule la moyenne d'un tableau
 * de doubles à 2 dimensions.
 */
double moyenne_tab2d(double tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes)
{
    double somme = 0 ;
    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            somme += tab[i][j];
        }
    }
    return somme / (nb_lignes * nb_colonnes);
}

/*
 * Fonction temperature_excedant qui reçoit un tableau de temperatures
 * et un seuil. Elle retourne le nombre de températures qui excèdent le seuil
 */
int temperatures_excedant(double temp[][MAX_COLONNES],
                          int nb_lignes,
                          int nb_colonnes,
                          double seuil)
{
    int nb_excedant = 0;
    for(int i=0; i<nb_lignes; i++){
        for(int j=0; j<nb_colonnes; j++){
            if(temp[i][j]>seuil){
                nb_excedant++;
            }
        }
    }
    return nb_excedant;
}
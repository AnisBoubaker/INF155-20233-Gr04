//
// Created by Anis Boubaker on 2023-11-16.
//

#include "t_lecture.h"

void t_lecture_afficher(const t_lecture* lec)
{
    printf("Date: %i/%i/%i\n", lec->jour, lec->mois, lec->annee);
    printf("Temperature: %.2lf, Humidite: %.2lf, CO2: %.2lf\n",
           (*lec).temperature, (*lec).humidite, (*lec).co2);

    //Interdit car le pointeur est const
    //(*lec).humidite = 0;
}

/*
 * # Exercice 1
 * Écrire la fonction `t_lecture_moyenne_temps` qui reçoit un tableau de
 * lectures et qui retourne la moyenne des températures.
 */
double t_lecture_moyenne_temps(t_lecture lectures[], int taille)
{
    double somme = 0;
    for(int i=0; i<taille; i++)
    {
        somme += lectures[i].temperature;
    }
    return somme / taille;
}
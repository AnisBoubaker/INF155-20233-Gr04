//
// Created by Anis Boubaker on 2023-11-16.
//

#ifndef ENREGISTREMENTS_T_LECTURE_H
#define ENREGISTREMENTS_T_LECTURE_H

#include <stdio.h>

typedef struct lecture{
    double temperature;
    double humidite;
    double co2;
    int jour;
    int mois;
    int annee;
} t_lecture;

/*
 *
 */
void t_lecture_afficher(const t_lecture* lec);

/*
 *
 */
double t_lecture_moyenne_temps(t_lecture lectures[], int taille);

#endif //ENREGISTREMENTS_T_LECTURE_H

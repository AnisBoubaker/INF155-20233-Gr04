//
// Created by Anis Boubaker on 2023-11-16.
//

#ifndef EXERCICE_ETUDIANT_T_ETUDIANT_H
#define EXERCICE_ETUDIANT_T_ETUDIANT_H

#define TAILLE_MAX_NOM_PRENOM 50
#define TAILLE_MAX_CODE_PERM 13 //13 à cause du \0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct etudiant
{
    char* nom;
    char* prenom;
    char code_perm[TAILLE_MAX_CODE_PERM];
    double tp1;
    double tp2;
    double intra;
    double finale;
} t_etudiant;

/*
 * Fonction constructeur
 */
t_etudiant* t_etudiant_init(char* nom, char* prenom);


/*
 *
 */
void t_etudiant_afficher(const t_etudiant* et);

#endif //EXERCICE_ETUDIANT_T_ETUDIANT_H

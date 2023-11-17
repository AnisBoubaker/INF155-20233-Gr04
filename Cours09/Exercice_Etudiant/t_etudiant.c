//
// Created by Anis Boubaker on 2023-11-16.
//

#include "t_etudiant.h"

//Fonction constructeur
t_etudiant* t_etudiant_init(char* nom, char* prenom)
{
    t_etudiant* nouvel_etudiant;

    nouvel_etudiant = (t_etudiant*)malloc(sizeof(t_etudiant));
    if(nouvel_etudiant == NULL)
    {
        return NULL;
    }
    nouvel_etudiant->nom = (char*)malloc(sizeof(char)*(strlen(nom)+1));
    if(nouvel_etudiant->nom == NULL)
    {
        free(nouvel_etudiant);
        return NULL;
    }
    strcpy(nouvel_etudiant->nom, nom);

    nouvel_etudiant->prenom = (char*)malloc(sizeof(char)*(strlen(prenom)+1));
    if(nouvel_etudiant->prenom == NULL)
    {
        free(nouvel_etudiant->nom);
        free(nouvel_etudiant);
        return NULL;
    }
    strcpy(nouvel_etudiant->prenom, prenom);

    nouvel_etudiant->tp1 = -1;
    nouvel_etudiant->tp2 = -1;
    nouvel_etudiant->intra = -1;
    nouvel_etudiant->finale = -1;

    return nouvel_etudiant;
}


void t_etudiant_afficher(const t_etudiant* et)
{
    printf("***** FICHE DE L'ETUDIANT-E *****\n");
    printf("Nom et prenom: %s, %s\n", et->nom, et->prenom);
    printf("TP1: %.2lf \t TP2: %.2lf\n", et->tp1, et->tp2);
    printf("Intra: %.2lf \t Final: %.2lf\n", et->intra, et->finale);
}

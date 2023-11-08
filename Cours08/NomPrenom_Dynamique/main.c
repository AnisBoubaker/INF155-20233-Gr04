/*
 * # Exercice
 *
 * Écrire la fonction `saisie_nom_prenom` qui reçoit un tableau de
 * caractères et qui le remplit avec le nom et le prénom saisis par
 * l'usager. La chaine de caractères résultante doit être sous la forme:
 * nom, prénom
 *
 * Vous devez demander le prénom en premier, puis le nom.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SAISIE 100
#define TAILLE_MAX_NOM_PRENOM 250

char* saisie_nom_prenom(void);

int main() {
    int a;
    //char personne[TAILLE_MAX_NOM_PRENOM];
    char* personne;

    personne = saisie_nom_prenom();
    if(personne != NULL)
    {
        printf("%s\n", personne);
    }

    return 0;
}

char* saisie_nom_prenom(void)
{
    char prenom[MAX_SAISIE];
    char* nom_prenom;
    char* ptr_temp;

    nom_prenom = (char*)malloc(TAILLE_MAX_NOM_PRENOM * sizeof(char));
    if(nom_prenom==NULL)
    {
        return NULL;
    }

    printf("Prenom: ");
    fgets(prenom, MAX_SAISIE, stdin);
    prenom[ strlen(prenom) - 1 ] = '\0';

    printf("Nom: ");
    fgets(nom_prenom, TAILLE_MAX_NOM_PRENOM - strlen(prenom)-2, stdin);
    nom_prenom[ strlen(nom_prenom) - 1] = '\0';

    strcat(nom_prenom, ", ");
    strcat(nom_prenom, prenom);

    ptr_temp = (char*)realloc(nom_prenom, (strlen(nom_prenom)+1)*sizeof(char));
    if(ptr_temp!=NULL)
    {
        nom_prenom = ptr_temp;
    }


    return nom_prenom;
}

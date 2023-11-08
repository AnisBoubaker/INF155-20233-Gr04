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
void saisie_nom_prenom(char nom_prenom[], int taille_max);

int main() {
    char personne[TAILLE_MAX_NOM_PRENOM];

    saisie_nom_prenom(personne, TAILLE_MAX_NOM_PRENOM);

    printf("%s\n", personne);

    return 0;
}

void saisie_nom_prenom(char nom_prenom[], int taille_max)
{
    char prenom[MAX_SAISIE];

    printf("Prenom: ");
    fgets(prenom, MAX_SAISIE, stdin);
    prenom[ strlen(prenom) - 1 ] = '\0';

    printf("Nom: ");
    fgets(nom_prenom, taille_max - strlen(prenom)-2, stdin);
    nom_prenom[ strlen(nom_prenom) - 1] = '\0';

    strcat(nom_prenom, ", ");
    strcat(nom_prenom, prenom);

}

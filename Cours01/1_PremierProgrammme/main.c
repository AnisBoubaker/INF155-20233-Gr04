/*
 * Notre premier programme en langage C qui
 * affiche Bonjour le monde!
 * Auteur: Anis Boubaker
 * Date: 2023-09-07
 */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int age_jean = 18;
    int age_martine = 20;
    double salaire = 10000.50;
    char note = 'A'+2;

    //int double; Pas bon, mot réservé du langage!

    printf("Hello, World!\n");

    printf("Le salaire est : %.2f\n", salaire);

    printf("L'age de jean est: %d et l'age de martine est: %d\n", age_jean, age_martine);

    printf("La note obtenue est: %c \n", note);
    printf("La note obtenur est(2e tentative): %i\n", note);
    printf("La note obtenue est(3e tentative): %c\n", note+4);

    return EXIT_SUCCESS;
}

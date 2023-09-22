#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int somme = 0;
    int compteur = 1;

    printf("Saisir l'entier maximal: ");
    scanf("%i", &n);

    while(  compteur <= n  )
    {
        somme = somme + compteur;
        compteur++;
    }

    printf("La somme des entiers de 1 à %i est: %i\n", n, somme);


    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>


int main() {
    int saisie;

    //printf("Saisir une valeur positive: ");
    //scanf("%i", &saisie);

    /*saisie = -1;
    while(saisie <=0 )
    {
        printf("Saisir une valeur positive: ");
        scanf("%i", &saisie);
    }*/

    do
    {
        printf("Saisir une valeur positive: ");
        scanf("%i", &saisie);
    } while ( saisie <= 0  );



    printf("La valeur saisie: %i\n", saisie);

    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int debut, fin;
    int compteur;
    int somme = 0;

    printf("Saisir la valeur du debut: ");
    scanf("%i", &debut);

    printf("Saisir la valeur de la fin: ");
    scanf("%i", &fin);

    /*compteur = debut; //Instruction d'initialisation
    while(compteur <= fin) //Condition
    {
        if( compteur % 2 == 0)
        {
            somme = somme + compteur;
        }

        //compteur++;
        compteur = compteur + 1; //Instruction d'incrément
    }*/

    for(compteur = debut; compteur <= fin ; compteur++ )
    {
        if( compteur % 2 == 0)
        {
            somme = somme + compteur;
        }
    }

    if( debut % 2 == 1)
    {
        debut = debut +1;
    }
    for(compteur = debut; compteur <= fin; compteur = compteur + 2 )
    {
        somme = somme + compteur;
    }


    printf("La somme est: %i\n", somme);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 10

int main(void) {
    int a = 10;
    int tab[TAILLE_MAX] = { 0 };
    int tab2[TAILLE_MAX];
    int tab3[TAILLE_MAX]={10, 20 , 30, 40, 50};

    //Le tableau est réservé avec une taille maximale
    //de 8, déduite à partir du nombre d'éléments de
    //l'initialisation.
    int tab4[] = {};


    //INTERDIT!!
    //tab3 = {10, 20 , 30, 40, 50};
    tab3[0] = 10;
    tab3[1] = 20;
    tab3[2] = 30;
    tab3[3] = 40;
    tab3[4] = 50;


    //Initialiser mon tableau tab2 avec 10 dans chaque case
    for(int i=0; i<TAILLE_MAX; i++)
    {
        tab2[i] = 10;
    }

    for(int i=0; i < 10; i++)
    {
        printf("%i\t", tab[i]); // Le \t veut dire: tabulation (TAB)
    }

    return EXIT_SUCCESS;
}

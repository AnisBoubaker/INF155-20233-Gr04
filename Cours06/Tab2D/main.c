#include <stdio.h>
#include <stdlib.h>
//JAMAIS INCLURE LE .C!!!
#include "temperatures.h"
#include "modules/test.h"

int main() {
    double temperatures[MAX_LIGNES][MAX_COLONNES] = {
            { 31, 30.5, 29, 29.5},
            {19, 20.5, 22, 23},
            {20, 20.3, 25, 26}
    };

    afficher_tab2d(temperatures,3, 4);
    printf("La moyenne: %.2lf\n", moyenne_tab2d(temperatures, 3, 4));

    //Afficher tout le contenu du tableau
//    for(int i=0; i<3; i++) //Itérer sur les lignes
//    {
//        for (int j = 0; j < 4; j++) { //Itérer sur les colonnes
//            printf("%.2lf\t", temperatures[i][j]);
//        }
//        printf("\n");
//    }


//    for(int j = 0; j < 4; j++)
//    {
//        printf("%.2lf\t", temperatures[0][j]);
//    }
//    printf("\n");
//    for(int j = 0; j < 4; j++)
//    {
//        printf("%.2lf\t", temperatures[1][j]);
//    }
//    printf("\n");


    temperatures[2][1] = 20.3;

    printf("\n\nLa case 2,1 contient: %.2lf\n", temperatures[2][1]);

    return EXIT_SUCCESS;
}









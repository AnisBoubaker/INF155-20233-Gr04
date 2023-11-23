#include <stdio.h>
#include "t_date.h"


int main() {
    t_date d1, d2;

    d1.jour = 5;
    d1.mois = OCTOBRE;
    d1.annee = 2022;

    if( date_set_date(&d1, 31, AVRIL, 2020) == 0 )
    {
        printf("Date invalide!\n");
    }
    printf("La date contenue dans d1: %i/%i/%i\n",
           d1.jour, d1.mois, d1.annee);

//    d2.jour = 5;
//    d2.mois = OCTOBRE;
//    d2.annee = 2022;
//
//    int comparaison = date_cmp(d1, d2);
//    if( comparaison > 0 )
//    {
//        printf("La date d1 est plus recente que d2\n");
//    }
//    else if( comparaison <0 )
//    {
//        printf("La date d1 est anterieure a d2\n");
//    }
//    else {
//        printf("Les deux dates sont identiques\n");
//    }
    return 0;
}

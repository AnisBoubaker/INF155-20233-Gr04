#include <stdio.h>
#include "t_date.h"
#include "t_machine.h"


int main() {
    //t_machine* machines[1000]; //Version statique du tableau de pointeurs
    t_machine** machines; //Version dynamique
    int nb_machines;

    printf("combien de machines: ");
    scanf("%i", &nb_machines);

    machines = (t_machine**)malloc(sizeof(t_machine*)*nb_machines);
    if(machines == NULL)
    {
        printf("Plus de memoire!\n");
        exit(EXIT_FAILURE);
    }

    //machines[0] = machine_init(1, "S234F7");
    for(int i=0; i< nb_machines ; i++)
    {
        machines[i] = machine_init(i+1, "S234F7");
    }
    //...
    for(int i=0; i<nb_machines; i++)
    {
        machine_afficher(machines[i]);
    }


    //machine_afficher(machines[0]);

//    t_machine* m1;
//
//    m1 = machine_init(10,"A10B25");
//    machine_afficher(m1);
//
//    machine_free(m1);

//    t_date d1, d2;
//
//    d1.jour = 5;
//    d1.mois = OCTOBRE;
//    d1.annee = 2022;
//
//    if( date_set_date(&d1, 31, AVRIL, 2020) == 0 )
//    {
//        printf("Date invalide!\n");
//    }
//    printf("La date contenue dans d1: %i/%i/%i\n",
//           d1.jour, d1.mois, d1.annee);

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

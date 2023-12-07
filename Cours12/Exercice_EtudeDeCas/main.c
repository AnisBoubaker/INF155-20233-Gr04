#include <stdio.h>
#include "t_date.h"
#include "t_machine.h"

#define TAILLE_MAX 100

int main() {
    t_machine_ptr machines[100];
    t_machine_ptr** tab2d;

    //Crée 50 machines de façon aléatoire
    machine_jeu_machines(machines, 50);

    tab2d = machine_classer_categories(machines, 50);

    for(int i=0; i<NB_CATEGORIES; i++)
    {
        printf("\n\n####### MACHINES DE LA CATEGORIE %i #########\n", i+1);
        for(int j=0; tab2d[i][j]!= NULL ; j++)
        {
            machine_afficher(tab2d[i][j]);
        }
    }

    return 0;
}

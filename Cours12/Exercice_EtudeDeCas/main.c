#include <stdio.h>
#include "t_date.h"
#include "t_machine.h"

#define TAILLE_MAX 100

int main() {

    int nb_machines;
    t_machine_ptr* liste_machines;
    liste_machines = machine_charger_machines("../sauvegarde.txt", &nb_machines);

    for(int i=0; i<nb_machines; i++)
    {
        machine_afficher(liste_machines[i]);
    }

//    t_machine_ptr machines[100];
//    t_machine_ptr** tab2d;
//
//    //Crée 50 machines de façon aléatoire
//    machine_jeu_machines(machines, 50);
//
//    machine_sauvegarder_machines(machines, 50, "../sauvegarde.txt");



//    tab2d = machine_classer_categories(machines, 50);
//
//    for(int i=0; i<NB_CATEGORIES; i++)
//    {
//        printf("\n\n####### MACHINES DE LA CATEGORIE %i #########\n", i+1);
//        for(int j=0; tab2d[i][j]!= NULL ; j++)
//        {
//            machine_afficher(tab2d[i][j]);
//        }
//    }

    return 0;
}

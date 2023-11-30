#include <stdio.h>
#include "t_date.h"
#include "t_machine.h"

#define TAILLE_MAX 100

int main() {
    t_machine* mes_machines[TAILLE_MAX];
    t_machine** a_maintenir;
    t_date date_seuil;
    int nb_a_maintenir;

    //On crée un ensemble de 50 machines aléatoirement
    machine_jeu_machines(mes_machines, 50);

    //On définit la valeur de la date seuil
    date_set_date(&date_seuil, 1, JUILLET, 2023);

    a_maintenir = machines_a_maintenir(mes_machines, 50, date_seuil, &nb_a_maintenir);
    for(int i=0; i< nb_a_maintenir; i++)
    {
        machine_afficher(a_maintenir[i]);
    }


//    for(int i=0; i<50; i++)
//    {
//        machine_afficher(mes_machines[i]);
//    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define NOMBRE_ETUDIANTS_MAX 30

int main(void) {
    double notes[NOMBRE_ETUDIANTS_MAX];
    double somme;
    int nb_etudiants;
    double meilleure_note;

    printf("Combien d'etudiant-e-s? ");
    scanf("%d", &nb_etudiants);

    for(int i=0; i<nb_etudiants; i++)
    {
        printf("Note de l'etudiant %i: ", i);
        scanf("%lf", &notes[i]);
    }



//    notes[0] = 80;
//    notes[1] = 87;
//    notes[2] = 65;
//    notes[3] = 90;
//    notes[4] = 72;
//    nb_etudiants = 5;

    for(int i=0; i < nb_etudiants; i++)
    {
        printf("La note de l'etudiant %i est: %lf\n", i+1, notes[i]);
    }

    somme = 0;
    for(int i=0; i < nb_etudiants ; i++)
    {
        somme= somme + notes[i];
    }
    printf("La somme des notes est: %lf\n", somme);


    meilleure_note = notes[0];
    for(int i=1; i<nb_etudiants; i++)
    {
        if(notes[i] > meilleure_note)
        {
            meilleure_note = notes[i];
        }
    }
    printf("La meilleure note est: %lf\n", meilleure_note);

    /*printf("La case 0 contient: %lf\n", notes[0]);
    printf("La case 1 contient: %lf\n", notes[1]);
    printf("La case 2 contient: %lf\n", notes[2]);
    printf("La case 3 contient: %lf\n", notes[3]);
    printf("La case 4 contient: %lf\n", notes[4]);*/

//    double note_e1, note_e2, note_e3, note_e4, note_e5;
//    double moyenne;
//    note_e1 = 80;
//    note_e2 = 87;
//    note_e3 = 65;
//    note_e4 = 90;
//    note_e5 = 72;
//
//    moyenne = note_e1+note_e2+note_e3+note_e4+note_e5;
//    moyenne = moyenne / 5;

    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int nb_notes;
    double* notes;

    double notes_statique[20];

//    *(notes_statique+0) = 80;
//    printf("La case 0 contient: %lf\n", notes_statique[0]);
//
//    *(notes_statique+1) = 75;
//    printf("La case 1 contient: %lf\n", notes_statique[1]);
//    // notes_statique[i] est equivalent à *(notes_statique+i)


    printf("Combien de notes: ");
    scanf("%i", &nb_notes);

    notes = (double*)malloc(nb_notes*sizeof(double));
    //Calloc fait la même chose que malloc, mais remplis tout
    //l'espace mémoire de 0.
    //notes = (double*)calloc(nb_notes, sizeof(double));
    if(notes==NULL)
    {
        exit(EXIT_FAILURE);
    }
//    //*(notes+0) = 80;
//    notes[0] = 80;
//    //*(notes+1) = 75;
//    notes[1] = 75;
    for(int i=0; i<nb_notes; i++)
    {
        printf("Saisir la note num. %i: ", i+1);
        scanf("%lf", &notes[i]);
    }

    double moyenne = 0;
    for(int i=0; i<nb_notes; i++)
    {
        moyenne+=notes[i];
    }
    moyenne /= nb_notes;
    printf("La moyenne est: %lf\n", moyenne);

    /*
     * On suppose que l'usager a demandé à agrandir la taille
     * du tableau à 2x nb_notes
     */

    double* ptr_temporaire;
    ptr_temporaire = (double*)realloc(notes, 2*nb_notes*sizeof(double));
    if(ptr_temporaire==NULL)
    {
        printf("Plus de memoire, desole.\n");
    }
    else
    {
        notes = ptr_temporaire;
    }

    return 0;
}

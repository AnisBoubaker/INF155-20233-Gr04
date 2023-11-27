#include <stdlib.h>
#include <stdio.h>

int** creer_tab2d_int(int nb_lignes, int nb_colonnes);

int main() {
    //Créer un tableau dynamique à deux dimensions (5 lignes, 4 colonnes) d'entiers
    int nb_lignes = 5;
    int nb_colonnes = 4;
    int** tab2d;

    tab2d = creer_tab2d_int(nb_lignes, nb_colonnes);

    if(tab2d == NULL)
    {
        printf("Erreur d'allocation memoire.\n");
        exit(EXIT_FAILURE);
    }

    //Mettre la valeur 10 dans chaque case du tableau à 2D
    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            tab2d[i][j] = 10;
        }
    }
    // .....

    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            printf("%i\t", tab2d[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int** creer_tab2d_int(int nb_lignes, int nb_colonnes)
{
    int** tab2d;

    tab2d = (int**)malloc(sizeof(int*)*nb_lignes);
    if(tab2d == NULL)
    {
        return NULL;
    }
    for(int i=0; i<nb_lignes ; i++)
    {
        tab2d[i] = (int*)malloc(sizeof(int)*nb_colonnes);
        if(tab2d[i] == NULL)
        {
            for(int j=0; j<i; j++)
            {
                free(tab2d[j]);
            }
            free(tab2d);
            return NULL;
        }
    }

    return tab2d;
}

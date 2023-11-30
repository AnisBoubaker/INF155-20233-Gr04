#include <stdio.h>
#include <stdlib.h>

int** creer_tab2d_entiers(int nb_lignes, int nb_colonnes);

int main() {
    int** tab2d;
    int nb_lignes = 3;
    int nb_colonnes = 4;

    tab2d = creer_tab2d_entiers(nb_lignes, nb_colonnes);
    if(tab2d==NULL)
    {
        printf("Erreur d'allocation du tableau a 2 dimensions.\n");
        exit(EXIT_FAILURE);
    }

    for(int i=0; i< nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            tab2d[i][j] = i+j;
        }
    }
    //....
    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j< nb_colonnes; j++)
        {
            printf("%i\t", tab2d[i][j]);
        }
        printf("\n");
    }



    return 0;
}

int** creer_tab2d_entiers(int nb_lignes, int nb_colonnes)
{
    int** tab2d;

    tab2d = (int**)malloc(sizeof(int*)*nb_lignes);
    if(tab2d == NULL)
    {
        return NULL;
    }
    for(int i=0 ; i<nb_lignes; i++)
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

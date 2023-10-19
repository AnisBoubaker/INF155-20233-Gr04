#include <stdio.h>
#include <stdlib.h>

/*
 * Écrire la fonction `majuscules_minuscules` qui reçoit un tableau
 * de caractères en argument et qui compte le nombre de majuscules
 * et le nombre de minuscules contenues dans le tableau.
 */

void majuscules_minuscules(char tab[], int taille, int* nb_maj, int* nb_min);

int main(void) {
    char message[] = {'B', 'o', 'n', 'j', 'o', 'u', 'r', ' ', 'E', 'T', 'S'};
    int nb_majuscules, nb_minuscules;

    majuscules_minuscules(message,11, &nb_majuscules, &nb_minuscules);

    printf("Le message contient %i majuscules et %i minuscules",
           nb_majuscules, nb_minuscules);

    return EXIT_SUCCESS;
}

void majuscules_minuscules(char tab[], int taille, int* nb_maj, int* nb_min)
{
    *nb_maj = 0;
    *nb_min = 0;
    for(int i=0; i < taille; i++)
    {
        if(tab[i] >= 'A' && tab[i]<='Z')
        {
            (*nb_maj)++;
            //++*nb_maj;
            //*nb_maj += 1;
        }
        else if(tab[i]>='a' && tab[i]<='z')
        {
            (*nb_min)++;
        }
    }
}

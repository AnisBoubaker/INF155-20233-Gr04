#include <stdio.h>
#include <stdlib.h>

int somme_des_pairs(int min, int max)
{
    int compteur;
    int somme = 0;
    if(min % 2 == 1)
    {
        min ++;
    }
    for(compteur = min; compteur <= max; compteur = compteur + 2)
    {
        somme = somme + compteur;
    }

    // Quitte la fonction en renvoyant la valeur spécifiée comme
    //résultat d'exécution de la fonction
    return somme;
}


double cube(double valeur)
{
    /*double resultat;

    resultat = valeur * valeur * valeur;

    return resultat;*/

    return valeur * valeur * valeur;
}

int main(void)
{
    int resultat;
    int min, max;
    double calcul_cube;

    printf("Saisir la valeur du debut: ");
    scanf("%i", &min);

    printf("Saisir la valeur de la fin: ");
    scanf("%i", &max);

    resultat = somme_des_pairs(min, max);

    printf("Le resultat est: %i\n", resultat);

    //calcul_cube = cube(10);
    printf("10 au cube = %lf\n", cube(10) );


    return 0;
}

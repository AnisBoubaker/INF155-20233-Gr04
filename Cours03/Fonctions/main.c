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

// void comme paramètre veut dire que la fonction n'a pas besoin de paramètre
// pour effectuer son traitement.
int saisir_entier_positif( void )
{
    int saisie;

    do
    {
        printf("Saisir une valeur positive: ");
        scanf("%i", &saisie);
    } while (saisie <=0 );

    return saisie;
}

void afficher_message_bienvenue(void)
{
    printf("*********************************************\n");
    printf("Bienvenue dans mon super programme!!\n");
    printf("*********************************************\n");

    //Le return est non-nécessaire car la fonction ne retourne rien.
    //return ;
}


int main(void)
{
    int resultat;
    int min, max;
    double calcul_cube;

    afficher_message_bienvenue();

    //Remarquez les parenthèse vides: elles sont nécessaires même si la fonction
    //ne prend pas de paramètres!
    min = saisir_entier_positif() ;

    max = saisir_entier_positif();

    resultat = somme_des_pairs(min, max);

    printf("La somme des valeurs entre %i et %i: %i\n", min, max, resultat);

    //calcul_cube = cube(10);
    printf("10 au cube = %lf\n", cube(10) );


    return 0;
}

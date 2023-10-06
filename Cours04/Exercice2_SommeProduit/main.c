#include <stdio.h>

void somme_produit(int n, int* adr_somme, double* adr_produit);

int main() {
    int la_somme;
    double le_produit;

    somme_produit(20, &la_somme, &le_produit);

    printf("La somme de 1 à 20: %i\n", la_somme);
    printf("Le produit de 1 à 20: %.0lf\n", le_produit);

    return 0;
}

/*void somme_produit(int n, int* adr_somme, int* adr_produit)
{
    int somme = 0;
    int produit = 1;

    for(int i=1; i<=n; i++)
    {
        somme += i;
        produit *= i;
    }

    *adr_somme = somme;
    *adr_produit = produit;

}*/

void somme_produit(int n, int* adr_somme, double* adr_produit)
{
    *adr_somme =0;
    *adr_produit = 1;

    for(int i=1; i<=n; i++)
    {
        *adr_somme += i;
        *adr_produit *= i;
    }
}


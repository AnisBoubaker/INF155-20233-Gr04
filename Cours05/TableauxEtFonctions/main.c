#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 50

void afficher_tableau(const int tab[], int taille);
double moyenne_tableau(const int tab[], int taille);
void mettre_a_zero(int tab[], int taille);

int main(void) {

    int tableau1[TAILLE_MAX] = {30, 45, 67, 89, 100, 87, 10};
    int tableau2[TAILLE_MAX] = {10, 20 , 30 , 40 , 50};
    double tableau3[TAILLE_MAX] = {10, 20 , 30 , 40 , 50};

    mettre_a_zero(tableau1, 7);
    afficher_tableau(tableau1, 7);

//    printf("Tableau1: \n");
//    //Pour passer un tableau en paramètre, on met SEULEMENT
//    //l'identifiant du tableau
//    afficher_tableau(tableau1, 7);
//
//    printf("Tableau2: \n");
//    afficher_tableau(tableau2, 5);
//
//    printf("Moyenne de tableau1: %lf\n", moyenne_tableau(tableau1, 7) );
//    printf("Moyenne de tableau2: %lf\n", moyenne_tableau(tableau2, 5) );
//    //ATTENTION: La moyenne affichera n'importe quoi car le tableau
//    //tableau3 est un tableau de doubles, alors que la fonction s'attend
//    //à recevoir un tableau d'entiers.
//    printf("Moyenne de tableau3: %lf\n", moyenne_tableau(tableau3, 5) );



//    for(int i=0; i<7; i++)
//    {
//        printf("Case #%i: %i\n", i, tableau1[i]);
//    }
//
//    for(int i=0; i<5; i++)
//    {
//        printf("Case #%i: %i\n", i, tableau2[i]);
//    }

    return EXIT_SUCCESS;
}


//Fonction qui affiche le contenu d'un tableau d'entiers
/*
 * IMPORTANT: Toute fonction qui reçoit un tableau en paramètre
 * doit recevoir aussi la taille effective du tableau, car on n'a
 * aucun moyen de le déterminer autrement.
 */
//const : la fonction reçoit un tableau "tab" mais elle
// n'a pas le droit de modifier son contenu.
void afficher_tableau(const int tab[], int taille)
{
    for(int i=0; i<taille; i++ )
    {
        printf("Case #%i: %i\n", i, tab[i]);
    }
    //Erreur de syntaxe, car le tableau est constant (const)
    //tab[0] = 100000;
}

double moyenne_tableau(const int tab[], int taille)
{
    int somme = 0 ;
    for(int i=0; i<taille; i++)
    {
        somme += tab[i];
    }
    return (double)somme / taille;
}

void fonction_bidon(int a)
{
    a = a * 10;
}

void mettre_a_zero(int tab[], int taille)
{
    for(int i=0; i<taille; i++)
    {
        tab[i] = 0;
    }
}


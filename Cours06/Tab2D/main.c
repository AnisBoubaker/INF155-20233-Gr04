#include <stdio.h>

#define MAX_LIGNES 10
#define MAX_COLONNES 20

double moyenne_tab2d(double tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes);
void afficher_tab2d(double tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes);

int main() {
    double temperatures[MAX_LIGNES][MAX_COLONNES] = {
            { 31, 30.5, 29, 29.5},
            {19, 20.5, 22, 23},
            {20, 20.3, 25, 26}
    };

    afficher_tab2d(temperatures,3, 4);
    printf("La moyenne: %.2lf\n", moyenne_tab2d(temperatures, 3, 4));

    //Afficher tout le contenu du tableau
//    for(int i=0; i<3; i++) //Itérer sur les lignes
//    {
//        for (int j = 0; j < 4; j++) { //Itérer sur les colonnes
//            printf("%.2lf\t", temperatures[i][j]);
//        }
//        printf("\n");
//    }


//    for(int j = 0; j < 4; j++)
//    {
//        printf("%.2lf\t", temperatures[0][j]);
//    }
//    printf("\n");
//    for(int j = 0; j < 4; j++)
//    {
//        printf("%.2lf\t", temperatures[1][j]);
//    }
//    printf("\n");


    temperatures[2][1] = 20.3;

    printf("\n\nLa case 2,1 contient: %.2lf\n", temperatures[2][1]);

    return 0;
}

void afficher_tab2d(double tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes)
{
    for(int i=0; i< nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            printf("%.2lf\t", tab[i][j]);
        }
        printf("\n");
    }
}

/*
 * Écrire une fonction moyenne_tab2d qui calcule la moyenne d'un tableau
 * de doubles à 2 dimensions.
 */
double moyenne_tab2d(double tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes)
{
    double somme = 0 ;
    for(int i=0; i<nb_lignes; i++)
    {
        for(int j=0; j<nb_colonnes; j++)
        {
            somme += tab[i][j];
        }
    }
    return somme / (nb_lignes * nb_colonnes);
}

/*
 * Fonction temperature_excedant qui reçoit un tableau de temperatures
 * et un seuil. Elle retourne le nombre de températures qui excèdent le seuil
 */
int temperatures_excedant(double temp[][MAX_COLONNES],
                          int nb_lignes,
                          int nb_colonnes,
                          double seuil)
{
    int nb_excedant = 0;
    for(int i=0; i<nb_lignes; i++){
        for(int j=0; j<nb_colonnes; j++){
            if(temp[i][j]>seuil){
                nb_excedant++;
            }
        }
    }
    return nb_excedant;
}








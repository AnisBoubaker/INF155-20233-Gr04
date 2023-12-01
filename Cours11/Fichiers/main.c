#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE* mon_fichier;
    int caractere;
    char lecture[1000];
    char jour[20];
    double temp_min, temp_max;

    mon_fichier = fopen("../data.txt", "r");
    if(mon_fichier == NULL)
    {
        exit(EXIT_FAILURE);
    }

    //fscanf retourne le nombre de valeur lues. Puisqu'on veut lire 3 valeurs
    //à chaque fois, si ça retourne autre chose que 3, nous avons atteint la fin du
    //fichier.
    while(fscanf(mon_fichier, "%s %lf %lf", jour, &temp_min, &temp_max) == 3)
    {
        printf("Le jour est: %s, Temp. Min: %.2lf, Temp. Max: %.2lf\n",
               jour, temp_min, temp_max);
    }



//    mon_fichier = fopen("../exemple.txt", "r");
//    if(mon_fichier == NULL)
//    {
//        printf("Erreur d'ouverture du fichier.\n");
//        exit(EXIT_FAILURE);
//    }
//
//    while( fgets(lecture, 1000, mon_fichier)!=NULL ){
//        printf("%s", lecture);
//    }



//    do {
//        caractere = fgetc(mon_fichier);
//        if(caractere!=EOF)
//            printf("%c", caractere);
//    } while(caractere!=EOF);




    fclose(mon_fichier);

    return 0;
}

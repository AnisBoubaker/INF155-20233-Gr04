#include <stdio.h>
#include <stdlib.h>

int main() {
    int* entier_dynamique;

    entier_dynamique = (int*)malloc(sizeof(int));
    if(entier_dynamique == NULL){ //Toujours vérifier que le pointeur est pas NULL
        printf("Desole votre machine est trop vieille plus de memoire!\n");
        exit(EXIT_FAILURE);
    }
    *entier_dynamique = 125;
    printf("Le contenu de entier_dynamique: %i\n", *entier_dynamique);

    //IMPORTANT : Libérer la mémoire allouée avant de perdre
    //l'adresse !
    free(entier_dynamique);

    entier_dynamique = (int*)malloc(sizeof(int));
    if(entier_dynamique==NULL){
        exit(EXIT_FAILURE);
    }
    *entier_dynamique = 50;

    return 0;
}

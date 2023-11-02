#include <stdio.h>
#include <string.h>

#define TAILLE_MAX 100

int main() {
    //Chaine de caractères =
    //Tableau de caractères qui se termine par un \0
    //char salutations[TAILLE_MAX] = {'B', 'o', 'n', 'j', 'o', 'u', 'r', ' ', 'a', ' ', 't', 'o', 'u', 's', '\0'};
    char salutations[TAILLE_MAX] = "Bonjour a tous";
    int taille;

//    for(int i=0; i<14; i++)
//    {
//        printf("%c", salutations[i]);
//    }
    // %s: String
    printf("%s\n", salutations);

//    taille = 0;
//    while(salutations[taille] != '\0')
//    {
//        taille++;
//    }
    taille = strlen(salutations);
    printf("La chaine %s contient %i caracteres.\n", salutations, taille);

    return 0;
}

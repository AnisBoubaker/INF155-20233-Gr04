#include <stdio.h>
#include <string.h>

#define TAILLE_MAX 50

int main() {
    char prenom[TAILLE_MAX];

    printf("Quel est votre prenom: ");
    //scanf("%s", prenom);
    fgets(prenom, TAILLE_MAX, stdin);
    prenom[ strlen(prenom) - 1 ] = '\0';

    printf("Bonjour %s!\n", prenom);

    return 0;
}

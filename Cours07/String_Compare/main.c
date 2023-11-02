#include <stdio.h>
#include <string.h>

#define TAILLE_MAX 100

int main() {
    char chaine1[TAILLE_MAX];
    char chaine2[TAILLE_MAX];

    strncpy(chaine1, "Xbfd", TAILLE_MAX);
    strncpy(chaine2, "abcd", TAILLE_MAX);

    if(strcmp(chaine1, chaine2) == 0)
    {
        printf("Les deux chaines sont identiques\n");
    }
    else if(strcmp(chaine1, chaine2) > 0)
    {
        printf("Chaine1 est plus grande (par ordre alphabetique\n");
    }
    else
    {
        printf("Chaine1 est plus petite (par ordre alphabetique\n");
    }

    return 0;
}

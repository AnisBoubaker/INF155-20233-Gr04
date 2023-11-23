#include <stdio.h>
#include <stdlib.h>

typedef enum niveau_huile{
    TRES_BAS = 10,
    BAS,
    MOYEN = 20,
    ELEVE,
    TRES_ELEVE = 30
} e_niv_huile;

int main() {

    e_niv_huile mon_niveau;

    mon_niveau = MOYEN;

    printf("Le niveau est: %i\n", mon_niveau);

    return 0;
}

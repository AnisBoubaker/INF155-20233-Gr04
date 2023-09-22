#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char choix;

    printf("Saisir A, B, ou C: ");
    scanf("%c", &choix);

    switch( choix )
    {
        case 'a':
        case 'A':
            printf("Vous avez choisi A, bon choix!\n");
            break;
        case 'B':
            printf("Vous avez choisi B, pas mal!\n");
            break;
        case 'C':
            printf("Vous avez choisi C, c'est bien!\n");
            break;
        default:
            printf("Vous deviez saisir A, B ou C. Quel dommage...");
    }



    return EXIT_SUCCESS;
}

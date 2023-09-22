#include <stdio.h>
#include <stdlib.h>
int main(void) {

    int x = 10;

    /*
     * Qu'est-ce que fait que la boucle va s'arrêter??
     */
    while( x > 0 )
    {
        printf("Je suis fatigant!\n");
        x--;
    }


    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int val1 = 10;
    int val2 = 3;
    double resultat ;
    int x, y;

    resultat = (double)val1 / val2;
    //resultat = val1*1.0 / val2;

    printf("Le resultat est: %lf\n", resultat);


    x = 11;

    x++;
    y = x / 3;

    printf("x = %i, y = %i\n", x, y);



    return EXIT_SUCCESS;
}

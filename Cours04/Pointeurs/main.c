#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int val1;
    double val2;
    double* adr_val2;
    int** ptr=NULL; //Pointeur qui pointe vers un autre pointeur
                //de type int*

    char un_caractere;
    int* adr_val1 = NULL;
    char* adr_un_caractere = NULL;


    val1 = 10;

    printf("Valeur bizarre: %p\n", &val1);

    adr_val1 = &val1;

    printf("Val1 vaut: %i\n", val1);
    *adr_val1 = 50; //val1 = 50
    printf("Val1 vaut: %i\n", val1);

    printf("%p", ptr);
    printf("%p", *ptr);
    printf("%i", **ptr);
    printf("%p", &ptr);



    ptr = &adr_val1;

    return 0;
}

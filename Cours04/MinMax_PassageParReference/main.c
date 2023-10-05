#include <stdio.h>

void min_max_de_3(int val1, int val2, int val3,int* adr_min, int* adr_max);


int main(void) {
    int plus_petit;
    int plus_grand;

    min_max_de_3(10, 2, 35, &plus_petit, &plus_grand);

    printf("La plus petite valeur: %i\n", plus_petit);
    printf("La plus grande valeur: %i\n", plus_grand);

    return 0;
}


void min_max_de_3(int val1, int val2, int val3,int* adr_min, int* adr_max)
{
    int min = val1;
    int max = val1;

    if(val2 < min){
        min = val2;
    }
    if(val3 < min){
        min = val3;
    }
    if(val2 > max){
        max = val2;
    }
    if(val3>max){
        max = val3;
    }

    *adr_min = min;
    *adr_max = max;

}

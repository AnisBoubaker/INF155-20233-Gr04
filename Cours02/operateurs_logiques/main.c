#include <stdio.h>

int main(void) {
    int x;

    x = 15;

    //if( 10 < x < 20) //ATTENTION: Cette condition est toujours vraie!!
    if( x>10 && x<20)
    {
        printf("x est dans le bon intervalle!\n");
    }

    return 0;
}

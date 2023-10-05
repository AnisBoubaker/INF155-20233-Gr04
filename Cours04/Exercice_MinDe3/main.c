/*
 * Écrire la fonction **min_de_3** qui reçoit trois valeurs réelles et retourne
 * la valeur minimale parmi les trois valeurs **en valeur absolue**
 * (La valeur retournée sera donc toujours positive).
 *
 * Par exemple, si les trois valeurs sont :
 *  35, 2 et 18 => Le minimum sera 2
 *  30, -40 et 50 => le minimum sera 30
 */


#include <stdio.h>
#include <stdlib.h>

/*** DECLRATION DES PROTOTYPES ****/

/*
 * MIN_DE_3
 * Trouve le minimum parmi trois entiers
 * PARAMETRES:
 *  val1, val2, val3 (entiers): Valeurs pormi lesquelle on cherche le minimum
 * RETOUR (entier): Le minimum parmi val1, val2, val3
 */
int min_de_3(int val1, int val2, int val3) ;

int main(void) {

    printf("%i\n", min_de_3(32, 2, 18) );
    printf("%i\n", min_de_3(30, -40, 50));

    return EXIT_SUCCESS;
}

int min_de_3(int val1, int val2, int val3)
{
    int val1_abs, val2_abs, val3_abs;
    int min;

    /*if(val1 < 0)
    {
        val1_abs = -val1;
    }
    else
    {
        val1_abs = val1;
    }*/
    val1_abs = val1 < 0 ? -val1 : val1;
    val2_abs = val2 < 0 ? -val2 : val2;
    val3_abs = val3 < 0 ? -val3 : val3;

    min = val1_abs;
    if(val2_abs < min)
    {
        min = val2_abs;
    }
    //min = val2_abs < min ? val2_abs : min;
    if(val3_abs < min)
    {
        min = val3_abs;
    }
    //min = val3_abs < min ? val3_abs : min ;

    return min;
}
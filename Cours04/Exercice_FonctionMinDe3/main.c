/*
 * Exercice 1
 * Écrire la fonction min_de_3 qui reçoit trois valeurs réelles et retourne la valeur minimale
 * parmi les trois valeurs **en valeur absolue** (La valeur retournée sera donc toujours
 * positive).
 *
 * Par exemple, si les trois valeurs sont:
 *      35, 2 et 18 => Le minimum sera 2
 *      30, -40 et 50 => le minimum sera 30
 */

#include <stdio.h>
#include <stdlib.h>


/*
 * MIN_DE_3
 * Identifie le minimum parmi trois valeurs en valeur absolue.
 * Paramètres:
 *  - val1, val2 et val3 (réels): Les valeurs parmi lesquelles on cherche le min
 * Retour:
 *  La valeur miniale parmi val1, val2 et val3.
 */
double min_de_3(double val1, double val2, double val3) ;


int main(void) {

    printf("%lf\n", min_de_3(35, 2, 18));
    printf("%lf\n", min_de_3(30, -40, 50));

    return EXIT_SUCCESS;
}

double min_de_3(double val1, double val2, double val3)
{
    double val1_abs, val2_abs, val3_abs;
    double min;

    /*if(val1 < 0){
        val1_abs = -val1;
    } else {
        val1_abs = val1;
    }*/
    val1_abs = val1<0 ? -val1 : val1;
    val2_abs = val2<0 ? -val2 : val2;
    val3_abs = val3<0 ? -val3 : val3;

    min = val1_abs;

    if(val2_abs < min )
    {
        min = val2_abs;
    }
    if(val3_abs < min )
    {
        min = val3_abs;
    }
    /*
     * min = val2_abs < min ? val2_abs : min;
     * min = val3_abs < min ? val3_abs : min;
     */

    return min;
}
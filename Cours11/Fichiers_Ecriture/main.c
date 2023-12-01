#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* mon_fichier;
    double donnees[4][2] = {
            {10, 23}, {79, 38}, {15,24}, {56,87}
    };

    mon_fichier = fopen("../donnees.txt", "w");
    if(mon_fichier == NULL)
    {
        exit(EXIT_FAILURE);
    }

    for(int i=0; i<4; i++)
    {
        fprintf(mon_fichier, "[%i] %.2lf %.2lf\n", i, donnees[i][0], donnees[i][1]);
    }


    fclose(mon_fichier);

    return 0;
}

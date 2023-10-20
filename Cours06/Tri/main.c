#include <stdio.h>

void tri_insertion(int tab[], int taille);

int main() {
    int mon_tableau[] = {10, 45, 2, 26, 17, 56, 19, 20};

    tri_insertion(mon_tableau, 8);

    for(int i=0; i<8; i++)
    {
        printf("%i ", mon_tableau[i]);
    }

    return 0;
}

void tri_insertion(int tab[], int taille)
{
    int x;
    int j;
    for(int i=1; i<taille; i++)
    {
        x = tab[i];
        j = i;
        while(j>0 && tab[j-1]>x)
        {
            tab[j] = tab[j-1];
            j--;
        }
        tab[j] = x;
    }
}

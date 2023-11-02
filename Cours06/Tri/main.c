#include <stdio.h>
#include "tri_tab1d.h"

int main() {
    int mon_tableau[] = {10, 45, 2, 26, 17, 56, 19, 20};
    int mon_tableau2[] = {10, 45, 2, 26, 17, 56, 19, 20};
    int mon_tableau3[] = {10, 45, 2, 26, 17, 56, 19, 20};

    tri_insertion(mon_tableau, 8);
    afficher_tab(mon_tableau, 8);

    tri_selection(mon_tableau2, 8);
    afficher_tab(mon_tableau2, 8);

    tri_bulles(mon_tableau3, 8);
    afficher_tab(mon_tableau3, 8);

    return 0;
}








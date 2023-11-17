#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "t_etudiant.h"

int main() {
    t_etudiant* e1;

    e1 = t_etudiant_init("Baggins", "Bilbo");
    if(e1 == NULL)
    {
        exit(EXIT_FAILURE);
    }
    strcpy(e1->code_perm, "BAGB00000000");
    e1->tp1 = 80;
    e1->tp2 = 85;
    e1->intra = 79;
    e1->finale = 89;

    t_etudiant_afficher(e1);




//    t_etudiant e1;
//
//    e1.prenom = (char*)malloc(sizeof(char)* (strlen("Bilbo")+1) );
//    if(e1.prenom == NULL)
//    {
//        exit(EXIT_FAILURE);
//    }
//    strcpy(e1.prenom, "Bilbo");
//    e1.nom = (char*)malloc(sizeof(char) * (strlen("Baggins")+1));
//    if(e1.nom == NULL)
//    {
//        exit(EXIT_FAILURE);
//    }
//    strcpy(e1.nom, "Baggins");
//    strcpy(e1.code_perm, "BAGB00000000");
//    e1.tp1 = 80;
//    e1.tp2 = 85;
//    e1.intra = 79;
//    e1.finale = 89;
//
//    t_etudiant_afficher(&e1);

    return 0;
}

#include <stdio.h>
#include <string.h>

#define TAILLE_MAX 100

int compter_mots(char* chaine);

int main() {
    char chaine[TAILLE_MAX];
    char chaine2[TAILLE_MAX];
    char resultat[TAILLE_MAX];

    // Ne jamais écrire : chaine = "Bonjour";
    // On doit toujours utiliser strcpy pour modifier le contenu d'une chaine
    strncpy(chaine, "Bonjour", TAILLE_MAX);
    printf("Chaine contient: %s\n", chaine);

    strncat(chaine, " a tous", TAILLE_MAX);
    printf("Chaine contient: %s\n", chaine);

    strncpy(chaine2, "etudiant-e-s", TAILLE_MAX);

    int nb_etudiants = 30;
    sprintf(resultat, "%s les %i %s", chaine, nb_etudiants, chaine2);

    printf("%s\n", resultat);

    printf("La chaine resultat contient %i mots.\n", compter_mots(resultat));

    return 0;
}

int compter_mots(char* chaine)
{
    int compteur = 0;
    int taille = strlen(chaine);

    if(taille == 0)
    {
        return 0;
    }
    for(int i=0; i<taille; i++)
    {
        if(chaine[i]==' ' || chaine[i]==',' || chaine[i]=='.')
        {
            compteur++;
        }
    }
    return compteur+1;
}


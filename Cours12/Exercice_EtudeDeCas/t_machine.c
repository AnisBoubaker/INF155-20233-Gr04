//
// Created by Anis Boubaker on 2023-11-23.
//

#include "t_machine.h"

/*
 *
 */
int nb_aleatoire(int min, int max);

t_machine* machine_init(int num, const char* num_modele)
{
    t_machine* nouv_machine;

    nouv_machine = (t_machine*)malloc(sizeof(t_machine));
    if(nouv_machine == NULL)
    {
        return NULL;
    }

    nouv_machine->num_modele = (char*)malloc(sizeof(char)*(strlen(num_modele)+1));
    if(nouv_machine->num_modele == NULL)
    {
        free(nouv_machine);
        return NULL;
    }

    nouv_machine->num = num;
    strcpy(nouv_machine->num_modele,  num_modele);

    nouv_machine->date_mise_service.jour = 0;
    nouv_machine->date_mise_service.mois = 0;
    nouv_machine->date_mise_service.annee = 0;

    nouv_machine->date_maintenance.jour = 0;
    nouv_machine->date_maintenance.mois = 0;
    nouv_machine->date_maintenance.annee = 0;

    return nouv_machine;
}

void machine_free(t_machine* machine)
{
    free(machine->num_modele);
    free(machine);
}


void machine_afficher(const t_machine* m)
{
    printf("****** MACHINE NUM: %i *********\n", m->num);
    printf("Num. Modele: %s\n", m->num_modele);
    printf("Mise en service: %i/%i/%i\n",
           m->date_mise_service.jour,
           m->date_mise_service.mois,
           m->date_mise_service.annee);
    printf("Derniere maintenance: %i/%i/%i\n",
           m->date_maintenance.jour,
           m->date_maintenance.mois,
           m->date_maintenance.annee);
}

int nb_aleatoire(int min, int max)
{
    return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

void machine_jeu_machines(t_machine* machines[], int nb)
{
    char num_modele[10];
    for(int i=0; i<nb; i++)
    {
        sprintf(num_modele, "%c%i%c%i", (char)nb_aleatoire(65, 90), nb_aleatoire(100, 500), (char)nb_aleatoire(65, 90),
                nb_aleatoire(100, 500));
        machines[i] = machine_init(i, num_modele);
        date_set_date(&(machines[i]->date_mise_service), nb_aleatoire(1, 28), nb_aleatoire(1, 12), 2023);
        date_set_date(&(machines[i]->date_maintenance), nb_aleatoire(1, 28), nb_aleatoire(1, 12), 2023);
        machines[i]->categorie = nb_aleatoire(0, NB_CATEGORIES-1);
    }
}

t_machine** machines_a_maintenir(t_machine* liste_machines[],
                                 int nb_machines,
                                 t_date date_min,
                                 int* nb_a_maintenir)
{
    t_machine** a_maintenir;
    t_machine** tmp; //Adresse temproraire pour la reallocation
    *nb_a_maintenir = 0;

    a_maintenir = (t_machine**)malloc(sizeof(t_machine*) * nb_machines);
    if(a_maintenir == NULL)
    {
        return NULL;
    }
    for(int i=0; i<nb_machines; i++)
    {
        if(date_cmp( liste_machines[i]->date_maintenance, date_min ) < 0)
        {
            a_maintenir[ *nb_a_maintenir ] = liste_machines[i];
            (*nb_a_maintenir)++;
        }
    }

    tmp = (t_machine**)realloc(a_maintenir, sizeof(t_machine*)* *nb_a_maintenir);
    if(tmp == NULL)
    {
        return a_maintenir;
    }
    a_maintenir = tmp;

    return a_maintenir;
}

t_machine_ptr** machine_classer_categories(t_machine_ptr machines[], int taille)
{
    t_machine_ptr** tab2d;
    int compteurs[NB_CATEGORIES] = {0};

    tab2d = (t_machine_ptr**)malloc(sizeof(t_machine_ptr*)*NB_CATEGORIES);
    if(tab2d == NULL)
    {
        return NULL;
    }

    for(int i=0; i<NB_CATEGORIES; i++)
    {
        tab2d[i] = (t_machine_ptr*)calloc(sizeof(t_machine_ptr), 100);
        if(tab2d[i]==NULL)
        {
            for(int j=0; j<i; j++)
            {
                free(tab2d[j]);
            }
            free(tab2d);
            return NULL;
        }
    }

    for(int i=0; i<taille; i++)
    {
        int ligne, colonne;
        ligne = machines[i]->categorie;
        colonne = compteurs[ machines[i]->categorie ];
        tab2d[ligne][colonne] = machines[i];
        //On incrémente le compteur de la catégorie de la machine qu'on vient
        //de placer.
        compteurs[ machines[i]->categorie ] ++;
    }


    return tab2d;
}

int machine_sauvegarder_machines(t_machine* machines[], int nb, char* nom_fichier)
{
    FILE* fichier;

    fichier = fopen(nom_fichier, "w");
    if(fichier == NULL)
    {
        return 0;
    }

    fprintf(fichier, "%i\n", nb);
    for(int i=0; i<nb; i++)
    {
        fprintf(fichier, "%i %s %i %i %i %i %i %i\n",
                machines[i]->num,
                machines[i]->num_modele,
                machines[i]->date_mise_service.jour,
                machines[i]->date_mise_service.mois,
                machines[i]->date_mise_service.annee,
                machines[i]->date_maintenance.jour,
                machines[i]->date_maintenance.mois,
                machines[i]->date_maintenance.annee
                );
    }

    fclose(fichier);
    return 1;
}

t_machine_ptr* machine_charger_machines(const char* nom_fichier, int* taille)
{
    FILE* fichier;
    t_machine_ptr* tab;

    fichier = fopen(nom_fichier, "r");
    if(fichier == NULL)
    {
        return NULL;
    }

    fscanf(fichier, "%i", taille);

    tab = (t_machine_ptr*)malloc(sizeof(t_machine_ptr) * *taille);
    if(tab==NULL)
    {
        fclose(fichier);
        *taille = 0;
        return NULL;
    }

    for(int i=0; i< *taille; i++)
    {
        int num;
        char num_modele[50];

        fscanf(fichier, "%i %s", &num, num_modele);

        tab[i] = machine_init(num, num_modele);

        fscanf(fichier, "%i %i %i %i %i %i",
               &(tab[i]->date_mise_service.jour),
               &(tab[i]->date_mise_service.mois),
               &(tab[i]->date_mise_service.annee),
               &(tab[i]->date_maintenance.jour),
               &(tab[i]->date_maintenance.mois),
               &(tab[i]->date_maintenance.annee)
               );
    }
    fclose(fichier);
    return tab;
}


















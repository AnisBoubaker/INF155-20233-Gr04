#include <stdio.h>
#include "t_lecture.h"

//Crée un alias nommé "uint" pour le type existant "unsigned int"
typedef unsigned int uint;



//struct lecture
//{
//    double temperature;
//    double humidite;
//    double co2;
//    int jour;
//    int mois;
//    int annee;
//};
//
//typedef struct lecture t_lecture;


int main() {
    int age;
    //struct lecture lecture1;
    t_lecture lecture1;
    t_lecture lecture2;
    t_lecture tab_lectures[100];

    lecture1.temperature = 25.5;
    lecture1.humidite = 40.5;
    lecture1.co2 = 10.5;
    lecture1.jour = 16;
    lecture1.mois = 11;
    lecture1.annee = 2023;

    lecture2.temperature = 23.2;
    lecture2.humidite = 45.0;
    lecture2.co2 = 13.5;
    lecture2.jour = 15;
    lecture2.mois = 11;
    lecture2.annee = 2023;

    t_lecture_afficher(&lecture1);

    printf("Valeur de humidite après affichage: %.2lf\n", lecture1.humidite);

    t_lecture_afficher(&lecture2);

    tab_lectures[0].temperature = 25.5;
    tab_lectures[0].humidite = 40.5;
    tab_lectures[0].co2 = 10.5;
    tab_lectures[0].jour = 16;
    tab_lectures[0].mois = 11;
    tab_lectures[0].annee = 2023;

    tab_lectures[1].temperature = 23.2;
    tab_lectures[1].humidite = 45.0;
    tab_lectures[1].co2 = 13.5;
    tab_lectures[1].jour = 15;
    tab_lectures[1].mois = 11;
    tab_lectures[1].annee = 2023;

    printf("Moyenne: %.2lf\n", t_lecture_moyenne_temps(tab_lectures, 2) );


    return 0;
}

















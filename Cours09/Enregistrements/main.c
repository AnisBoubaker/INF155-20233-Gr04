#include <stdio.h>

//Crée un alias nommé "uint" pour le type existant "unsigned int"
typedef unsigned int uint;

typedef struct lecture{
    double temperature;
    double humidite;
    double co2;
    int jour;
    int mois;
    int annee;
} t_lecture;

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

void t_lecture_afficher(t_lecture lec);

int main() {
    int age;
    //struct lecture lecture1;
    t_lecture lecture1;
    t_lecture lecture2;

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

    t_lecture_afficher(lecture1);
    t_lecture_afficher(lecture2);

    return 0;
}

void t_lecture_afficher(t_lecture lec)
{
    printf("Date: %i/%i/%i\n", lec.jour, lec.mois, lec.annee);
    printf("Temperature: %.2lf, Humidite: %.2lf, CO2: %.2lf\n",
           lec.temperature, lec.humidite, lec.co2);
}














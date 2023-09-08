#include <stdio.h>
#include <stdlib.h>

int main() {
    int age_jean = 18;
    int age_martine = 20;

    printf("Bienvenue dans mon programme genial!\n");
    printf("L'age de jean est: %i\n", age_jean);

    age_jean = 22;

    printf("Le nouvel age de jean est: %i\n", age_jean);

    age_martine = age_martine + 4;

    printf("L'age de martine est: %d\n", age_martine);

    return EXIT_SUCCESS;
}

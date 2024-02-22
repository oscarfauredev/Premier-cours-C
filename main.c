#include <stdio.h>

int main() {
    const char texte[] = "Victor Hugo est un poète, z dramaturge, écrivain, romancier et dessinateur romantique français, né le 26 février 1802 à Besançon et mort le 22 mai 1885 à Paris. Il est considéré comme l'un des plus importants écrivains de langue française.";
    int testVariable = 0;

    const char *ptr = texte;

    while (*ptr != '\0') {
        if (*ptr == 'z') {
            testVariable = 1;
            break;
        }

        ptr++;
    }

    if (testVariable) {
        printf("Le caractere 'z' est present dans la chaine.\n");
    } else {
        printf("Le caractere 'z' n'est pas present dans la chaine.\n");
    }

    return 0;
}
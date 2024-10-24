#include <stdio.h>

int main() {
    char nom[50], prenom[50], sexe[10], tel[20];
    int age;

    printf("Entre votre nom: ");
    scanf("%s", nom);

    printf("Entre votre prenom: ");
    scanf("%s", prenom);

    printf("Entre votre age: ");
    scanf("%d", &age);

    printf("Entre votre sexe: ");
    scanf("%s", sexe);

    printf("Entre votre numéro de telephone: ");
    scanf("%s", tel);

    printf("\n- Informations Personneles -\n");
    printf("Nom: %s\n", nom);
    printf("Prenom: %s\n", prenom);
    printf("Age: %d\n", age);
    printf("Sexe: %s\n", sexe);
    printf("Numero de telephone: %s\n", tel);

    return 0;
}

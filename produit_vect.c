#include <stdio.h>

int main() {
    int a[3], b[3], c[3];

    printf("Entrez les 3 composantes du premier vecteur : ");
    for (int i = 0; i < 3; i++)
        scanf("%d", &a[i]);

    printf("Entrez les 3 composantes du deuxieme vecteur : ");
    for (int i = 0; i < 3; i++)
        scanf("%d", &b[i]);

    c[0] = a[1] * b[2] - a[2] * b[1];
    c[1] = a[2] * b[0] - a[0] * b[2];
    c[2] = a[0] * b[1] - a[1] * b[0];

    printf("Produit vectoriel : (%d, %d, %d)\n", c[0], c[1], c[2]);

    return 0;
}

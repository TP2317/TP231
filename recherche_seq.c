#include <stdio.h>

int main() {
    int n, x, pos = -1;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int a[n];
    printf("Entrez les elements du tableau :\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Entrez l'element a rechercher : ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            pos = i;
            break;
        }
    }

    if (pos == -1)
        printf("Element non trouve\n");
    else
        printf("Element trouve a la position %d (indice %d)\n", pos + 1, pos);

    return 0;
}

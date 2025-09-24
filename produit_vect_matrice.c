#include <stdio.h>

int main() {
    int n, m;
    printf("Entrez la dimension du vecteur : ");
    scanf("%d", &n);
    printf("Entrez le nombre de colonnes de la matrice : ");
    scanf("%d", &m);

    int v[n], a[n][m], res[m];

    printf("Entrez les elements du vecteur (%d) :\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    printf("Entrez les elements de la matrice (%d x %d) :\n", n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    for (int j = 0; j < m; j++) {
        res[j] = 0;
        for (int i = 0; i < n; i++)
            res[j] += v[i] * a[i][j];
    }

    printf("Resultat (vecteur de dimension %d) :\n", m);
    for (int j = 0; j < m; j++)
        printf("%d ", res[j]);
    printf("\n");

    return 0;
}

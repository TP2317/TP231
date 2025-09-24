#include <stdio.h>

int main() {
    int n, m, p;
    printf("Entrez le nombre de lignes de la premiere matrice : ");
    scanf("%d", &n);
    printf("Entrez le nombre de colonnes de la premiere matrice (et lignes de la deuxieme) : ");
    scanf("%d", &m);
    printf("Entrez le nombre de colonnes de la deuxieme matrice : ");
    scanf("%d", &p);

    int a[n][m], b[m][p], c[n][p];

    printf("Entrez les elements de la premiere matrice (%d x %d) :\n", n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    printf("Entrez les elements de la deuxieme matrice (%d x %d) :\n", m, p);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++) {
            c[i][j] = 0;
            for (int k = 0; k < m; k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    printf("Resultat du produit de matrices (%d x %d) :\n", n, p);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}

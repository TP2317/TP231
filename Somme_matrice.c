#include <stdio.h>

int main() {
    int n, m;
    printf("Entrez le nombre de lignes des matrices : ");
    scanf("%d", &n);
    printf("Entrez le nombre de colonnes des matrices : ");
    scanf("%d", &m);

    int a[n][m], b[n][m], c[n][m];

    printf("Entrez les elements de la premiere matrice (%d x %d) :\n", n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    printf("Entrez les elements de la deuxieme matrice (%d x %d) :\n", n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("Resultat de la somme des matrices (%d x %d) :\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}

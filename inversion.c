#include <stdio.h>

int main() {
    int n;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int a[n];
    printf("Entrez les elements du tableau :\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n / 2; i++) {
        int tmp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = tmp;
    }

    printf("Tableau inverse :\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

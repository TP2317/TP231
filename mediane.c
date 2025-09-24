#include <stdio.h>

void trier(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
}

int main() {
    int n;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int a[n];
    printf("Entrez les elements du tableau :\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    trier(a, n);

    if (n % 2 == 1) {
        printf("La mediane est : %d\n", a[n / 2]);
    } else {
        float mediane = (a[n / 2 - 1] + a[n / 2]) / 2.0;
        printf("La mediane est : %.2f\n", mediane);
    }

    return 0;
}

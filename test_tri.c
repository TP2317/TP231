#include <stdio.h>

int main() {
    int n;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int a[n];
    printf("Entrez les elements du tableau :\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int croissant = 1, decroissant = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) croissant = 0;
        if (a[i] > a[i - 1]) decroissant = 0;
    }

    if (croissant)
        printf("Le tableau est trie en ordre croissant.\n");
    else if (decroissant)
        printf("Le tableau est trie en ordre decroissant.\n");
    else
        printf("Le tableau n'est pas trie.\n");

    return 0;
}

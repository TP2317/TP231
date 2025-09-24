#include <stdio.h>

int main() {
    int a, b;
    printf("Entrez deux entiers positifs a et b : ");
    scanf("%d %d", &a, &b);

    int res = 0;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            res += 1;
        }
    }

    printf("Resultat : %d\n", res);
    return 0;
}

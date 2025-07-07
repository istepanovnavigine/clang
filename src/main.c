#include <stdio.h>

int invert(int x, int p, int n);

int main() {
    int x = 0, p = 0, n = 0;
    printf("\nВведите число x: ");
    scanf("%d", &x);
    printf("\nВведите число p: ");
    scanf("%d", &p); 
    printf("\nВведите число n: ");
    scanf("%d", &n);

    x = invert(x, p, n);

    printf("x после преобразования: %d\n", x);

    return 0;
}

int invert(int x, int p, int n) {
    int mask = ((1 << n) - 1) << p;

    x = x ^ mask;

    return x;
}


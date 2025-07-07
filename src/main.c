#include <stdio.h>

int setbits(int x, int p, int n, int y);

int main() {
    int x = 0, p = 0, n = 0, y = 0;
    printf("\nВведите число x: ");
    scanf("%d", &x);
    printf("\nВведите число p: ");
    scanf("%d", &p); 
    printf("\nВведите число n: ");
    scanf("%d", &n);
    printf("\nВведите число y: ");
    scanf("%d", &y);

    x = setbits(x, p, n, y);

    printf("x после преобразования: %d\n", x);

    return 0;
}

int setbits(int x, int p, int n, int y) {
    int mask = (1 << n) - 1;
    int y_bits = (y & mask) << p;

    x = x & ~(mask << p);
    x = x | y_bits;

    return ~(mask << p);
}
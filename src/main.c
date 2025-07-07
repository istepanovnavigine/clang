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
    int num_for_and = 1;
    for(int i = 0; i < x - n - p; i++) {
        num_for_and = num_for_and << 1;
        num_for_and++;
    }
    num_for_and = num_for_and << p;
    
    for(int i = 0; i < n; i++) {
        num_for_and = num_for_and << 1;
        num_for_and++;
    }

    x = x & num_for_and; // Получен x после вычета

    

    return x;
}


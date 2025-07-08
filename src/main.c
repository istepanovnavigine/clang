#include <stdio.h>

int rightrot(int x, int n);

int main() {
    int x = 0, n = 0;
    printf("\nВведите число x: ");
    scanf("%d", &x);
    printf("\nВведите число n: ");
    scanf("%d", &n);

    x = rightrot(x, n);

    printf("x после преобразования: %d\n", x);

    return 0;
}

int rightrot(int x, int n) {
    int word_size = sizeof(int) * 8;
    int rot_data =  x << (word_size - n);
    x = (x >> n) | rot_data;

    return x;
}


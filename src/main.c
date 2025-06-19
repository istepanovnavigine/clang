#include <stdio.h>
#include <limits.h>

int main() {
    printf("char range: %d\n", (CHAR_MAX - CHAR_MIN));
    printf("short range: %d\n", (SHRT_MAX - SHRT_MIN));
    printf("int range: %u\n", (unsigned int)(INT_MAX) - INT_MIN);
    printf("long range: %lu\n", (unsigned long)(LONG_MAX) - LONG_MIN);
    printf("unsigned char range: %d\n", UCHAR_MAX);
    printf("unsigned int range: %u\n", (unsigned int)(UINT_MAX));
    printf("unsigned long range: %lu\n", (unsigned long)(ULONG_MAX));
    printf("unsigned short range: %u\n", USHRT_MAX);
    printf("lol\n");

    return 0;
}
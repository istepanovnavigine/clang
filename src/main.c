#include <stdio.h>
#include <limits.h>

#define MAXLEN 20

int inputline(char s[MAXLEN]);

int main() {
    char hex[MAXLEN];

    inputline(hex);

    printf("%s", hex);

    return 0;
}

int htoi(char s[MAXLEN]) {
    int result = 0;



    return result;
}

int inputline(char s[MAXLEN]) { // *ввод строки для последующей обработки
    int i, c;

    for(i = 0; i < MAXLEN - 1; i++) {
        c = getchar();
        if(c == '\n' || c == '\0') break;
        s[i] = c;
    }
    s[i++] = '\n';
    s[i++] = '\0';

    return i;
}
#include <stdio.h>

#define MAXLEN 20

int inputline(char s[MAXLEN]);
int power(int base, int pow);
int strlen(char str[MAXLEN]);

int main() {
    char hex[MAXLEN];
    int result;

    inputline(hex);

    result = htoi(hex);
    printf("hex to dec: %d\n", result);

    return 0;
}

int htoi(char s[MAXLEN]) {
    int result = 0;
    int len = strlen(s); // Получаем длину строки

    

    for(int i = 0; s[i] != '\n'; i++) {

    }

    return result;
}

int inputline(char s[MAXLEN]) { //* ввод строки для последующей обработки
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

int power(int base, int pow) {
    int result = 1;

    for(int i = 0; i < pow; i++) {
        result = result * base;
    }

    return result;
}

int strlen(char str[MAXLEN]) {
    int len = 0;

    for (len; str[len] != '\n'; len++) {

    }

    len++;

    return len;
}
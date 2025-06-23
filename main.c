#include <stdio.h>
#include <ctype.h>

#define MAXLEN 20


int inputline(char s[MAXLEN]);
int power(int base, int pow);
int stringlen(char str[MAXLEN]);
int htoi(char str[MAXLEN]);

int main() {
    char hex[MAXLEN];
    int result;

    inputline(hex);//тут проблем нет

    result = htoi(hex);
    printf("hex to dec: %d\n", result);

    return 0;
}

int htoi(char s[MAXLEN]) {
    int result = 0;
    int lennum = stringlen(s) - 2; // Получаем длину строки
    int i = 0; 

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) { // увеличиваем стартовый индекс и уменьшаем длину для степеней
        i += 2;
        lennum -= 2;
    }

    while (s[i] != '\n') { // основная логика возведения
        int number; // вот этого чувака нам нужно выковырять из строки

        int c = tolower(s[i]);
        
        if(c >= 'a' && c <= 'f') {
            number = c - 'a' + 10;
        } else if (c >= '0' && c <= '9') {
            number = c - '0';
        }

        result += number * power(16, lennum);
        lennum--;
        i++;
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

int stringlen(char str[MAXLEN]) {
    int len;

    for (len = 0; str[len] != '\n'; len++) {

    }

    len++;

    return len;
}
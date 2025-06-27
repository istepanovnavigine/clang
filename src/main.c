#include <stdio.h>

#define MAXLEN 20


int inputline(char s[MAXLEN]);
int squeeze(char s1[MAXLEN], char s2[MAXLEN]);

int main() {
    char s1[MAXLEN];
    char s2[MAXLEN];

    inputline(s1);
    inputline(s2);

    printf("\n%s\n", s1);

    return 0;
}


int inputline(char s[MAXLEN]) {
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

int squeeze(char s1[MAXLEN], char s2[MAXLEN]) {
    int i = 0;
    int j = 0;
    char buf[MAXLEN];

    while ((s1[j] != '\n' && s1[j] != '\0') && (s2[j] != '\n' && s2[j] != '\0')) {
        if (s1[j] != s2[j]) {
            buf[i++] = s1[j];   
        }
        j++;
    }

    while (s1[j] != '\n' && s1[j] != '\0') {
        buf[i++] = s1[j++];
    }

    buf[i++] = s1[j++];

    for(j = 0; j < i; j++) {
        s1[j] = buf[j];
    }

    s1[++j] = '\0';

    return i;
}
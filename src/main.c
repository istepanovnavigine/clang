#include <stdio.h>

#define MAXLEN 20


int inputline(char s[MAXLEN]);
int squeeze(char s1[MAXLEN], char s2[MAXLEN]);

int main() {
    char s1[MAXLEN];
    char s2[MAXLEN];

    inputline(s1);
    inputline(s2);

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
    
}
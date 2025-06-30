#include <stdio.h>

#define MAXLEN 20


int inputline(char s[MAXLEN]);
int any(char s1[MAXLEN], char s2[MAXLEN]);

int main() {
    char s1[MAXLEN];
    char s2[MAXLEN];
    int pos;

    inputline(s1);
    inputline(s2);

    pos = any(s1, s2);

    if(pos == -1) {
        printf("\nno considences\n");
    } else {
        printf("\nfirst index in s1 from s2 = %d\n", pos);
    }

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

int any(char s1[MAXLEN], char s2[MAXLEN]) {
    int pos = -1;

    
    for (int i = 0; s2[i] != '\n' && s2[i] != '\0'; i++) {
        for (int j = 0; s1[i] != '\n' && s1[i] != '\0'; j++) {
            if(s1[j] == s2[i]) {
                if(pos != -1 && j < pos) {
                    pos = j;
                } else {
                    pos = j;
                }
            }
        }
    }

    return pos; 
}
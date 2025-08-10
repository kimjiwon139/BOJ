#include <stdio.h>
#include <string.h>

int main(void) {
    char S[101];            
    int alphabet[26];       
    int i;

    for (i = 0; i < 26; i++) {
        alphabet[i] = -1;
    }

    scanf("%s", S);

    for (i = 0; i < strlen(S); i++) {
        int index = S[i] - 'a';
        if (alphabet[index] == -1) {
            alphabet[index] = i;
        }
    }

    for (i = 0; i < 26; i++) {
        printf("%d ", alphabet[i]);
    }

    return 0;
}

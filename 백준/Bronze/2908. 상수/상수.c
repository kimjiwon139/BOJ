#include <stdio.h>
#include <string.h>

int main() {
    char a[4], b[4], m[4], n[4];
    scanf("%s %s", a, b);
    for (int i = 0; i < 3; i++) {
        m[i] = a[2 - i];
        n[i] = b[2 - i];
    }
    m[3] = '\0';
    n[3] = '\0';
    if (strcmp(m, n) > 0) printf("%s", m);
    else printf("%s", n);
    return 0;
}

#include <stdio.h>

int main(void) {

    int n, sum = 0;
    char num[101];

    scanf("%d", &n); 
    scanf("%s", num);

    for (int i = 0; i < n; i++) {
        sum += num[i] - '0';
    }
    
    printf("%d\n", sum);
    
    return 0;

}
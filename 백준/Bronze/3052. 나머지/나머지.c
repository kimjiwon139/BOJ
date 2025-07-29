#include <stdio.h>

int main() {
    int nums[10];
    int remainders[10];
    int count = 0;
    int i, j;

    for (i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
        remainders[i] = nums[i] % 42;
    }

    for (i = 0; i < 10; i++) {
        int flag = 1;
        for (j = 0; j < i; j++) {
            if (remainders[i] == remainders[j]) {
                flag = 0;
                break;
            }
        }
        if (flag) count++;
    }

    printf("%d\n", count);

    return 0;
}

#include <stdio.h>

int main() {
    int n,i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2 * n - 1; i >= 1; i -= 2) {
        printf("%d\n", i);
    }

    return 0;
}

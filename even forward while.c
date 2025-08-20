#include <stdio.h>

 main() {
    int n, i = 0, num = 2;

    printf("Enter n ");
    scanf("%d", &n);

    while (i < n) {
        printf("%d ", num);
        num += 2; 
        i++;
    }

    
}

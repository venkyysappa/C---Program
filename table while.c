//write a program to print table using while

#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter n ");
    scanf("%d", &n);

    while (i <= 10) 
	{
        printf("%d*%d = %d\n", n, i, n * i);
        i++;
    }

    
}












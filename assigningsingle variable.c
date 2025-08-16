#include <stdio.h>
int main()
{
    int x;   // single variable

    x;  // assign 23
    scanf("%d",&x);
    printf("Value = %d\n", x);

    x  ; // reassign 50
    scanf("%d",&x);
    printf("Value = %d\n", x);

    return 0;
}


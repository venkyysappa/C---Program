#include<stdio.h>
main()
{
	int n;
	printf("enter n");
	scanf("%d",&n);
	(n<0) ? printf("negative") :
		(n>0) ? printf("positive") :
			printf("zero");
		}

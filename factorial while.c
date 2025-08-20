#include<stdio.h>
main()
{
	int n,i,f=1;
	printf("enter n");
	scanf("%d",&n);
	if(n!=0)
	{
		for(i=1;i<=n;i++)
		f=f*i;
		printf("%d",f);
	}
	else
	printf("1");
}


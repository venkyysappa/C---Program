#include<stdio.h>
main()
{
	int n,i,count=0;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	printf("prime");
	else
	printf("not prime");
}

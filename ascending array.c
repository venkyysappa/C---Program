#include<stdio.h>
#define size 5
main()
{
	int a[size],i,temp,j;
	for(i=0;i<size;i++)
	{
		printf("enter element");
		scanf("%d",&a[i]);
	{
	
		for(i=0;i<size+1;i++)
			for(j=i+1;j<size;j++)
			{
				if(a[i]>a[j])
				{
					temp =a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		for(i=0;i<size+1;i++)
		printf("%d\t",a[i]);
}

}

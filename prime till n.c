#include<stdio.h>
main()
{
	int i,j,d=0,n=10;
	for(i=2;i<=n;i++)
	{
		d=0;
		for(j=2;j<=n;j++)
		{
			if(i%j==0)
			{
				d=1;
				break;
			}
		}
	}
	if(d==0)
	printf("%d",i);
}
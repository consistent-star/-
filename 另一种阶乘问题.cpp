# include <stdio.h>
int main()
{
	int i,n,j,k,b,a;
	scanf("%d",&i);
	while(i--)
	{
		int sum=0; 
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			 a=1; 
			for(k=1;k<=j;k=k+2) 
			{
				a=a*k;
				
			}
			sum=sum+a;	
		}
		printf("%d\n",sum);
	}
	return 0;
 } 

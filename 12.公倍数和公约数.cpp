# include <stdio.h>
int main() 
{
	int a,b,i,j,c,k;
	scanf("%d",&i);
	for(j=0;j<i;j++)
	{
		scanf("%d%d",&a,&b);
		k=a*b;
		while(b!=0)
		{
			c=a%b;
			a=b;
			b=c;
		}
		printf("%d %d\n",a,k/a);
		 
	}
	return 0;
 } 

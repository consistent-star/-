# include <stdio.h>
int main()
{
	int i,j,k,a,b;
	scanf("%d",&i);
	while(i--)
	{
	scanf("%d",&j);
	for(k=3,a=b=1;k<=j;k++)
	{
		a=a+b;b=a-b;
	}
	printf("%d\n",a);
	}
	
 } 

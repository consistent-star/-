# include <stdio.h>
int main()
{
	int i,j,k,a,b;
	scanf("%d",&i);
	for(j=0;j<i;j++)
	{
		scanf("%d",&k);
		for(a=1;a<=k;a++)
		{
		
		   if((a%2)==0)
		   printf("%d",a);
		}
		printf("\n");
		for(b=1;b<=k;b++)
		{
	
		   if((b%2)==1)
		   printf("%d",b);
		}
		printf("\n");   
	   	
	}
    return 0;	
 } 

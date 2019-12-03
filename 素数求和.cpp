# include <stdio.h>
int main()
{
	int i,j,k,a,b,c,sum=0;
	scanf("%d",&i);
	for(j=0;j<i;j++)
	
	{
		sum=0; 
		scanf("%d",&k);
		for(a=0;a<k;a++)
		{
			scanf("%d",&b);
			for(c=2;c<b;c++)//此处不需要括号 
			
				if(b%2==0)
				break;
			if(b==c)
			{
				sum=sum+b;
			}
			
		}
	    printf("%d\n",sum);
	 }	
	 
   return 0;
 } 



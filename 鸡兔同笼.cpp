# include <stdio.h>
int main()
{
	int i,j,t,k;
	scanf("%d",&i);
	while(i--)
	{
		int head,foot,a=0;
		scanf("%d%d",&head,&foot);
		for(k=0;k<=head;k++)
		{
			if( 2*k+4*(head-k)==foot)
			{
				a=1;
				printf("¼¦ÓÐ%d ÍÃÓÐ%d\n",k,head-k);
			}
		}
		if(a==0)
		printf("No answer!\n");	
	}
	return 0;
 } 

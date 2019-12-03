# include <stdio.h>
int main()
{
	int i,n,m,sum;//此处如果sum=0错误 
	scanf("%d",&i);
	while(i--)
	{
		sum=0;//sum每一轮清零才能得出正确答案 
		scanf("%d %d",&n,&m);
		while(n)
		{
			n=n/m;
		    sum=sum+n;
		}
	printf("%d\n",sum);	
	}
	return 0;
 } 

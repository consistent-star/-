# include <stdio.h>
int main()
{
	int i,n,m,sum;//�˴����sum=0���� 
	scanf("%d",&i);
	while(i--)
	{
		sum=0;//sumÿһ��������ܵó���ȷ�� 
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

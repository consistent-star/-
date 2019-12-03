# include <stdio.h>
int main()
{
	int i,a[3],t=0,k;
	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	for(i=0;i<3;i++)
	{
		for(k=0;k<3-i-1;k++)
		{
		
		if(a[k]>a[k+1])
			{
				t=a[k];
				a[k]=a[k+1];
				a[k+1]=t;
		
			}
			
		}
		
	} 
	printf("%d %d %d\n",a[0],a[1],a[2]);
	return 0;
 } 

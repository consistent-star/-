# include <stdio.h>
int main ()
{
	int i,j,t;
	int a[5];
	for(i=0;i<5;i++)
	    scanf("%d",&a[i]);
	for(j=0;j<5;j++)
	{
	for(i=0;i<4;i++)
	{

	   if(a[i]>a[i+1])
	     {
		 t=a[i];
	     a[i]=a[i+1];
	     a[i+1]=t;
	     }
    
	}
    }
    printf("%d %d",a[0],a[4]);
    return 0;
	
}

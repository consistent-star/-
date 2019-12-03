# include <stdio.h>
int main() 
{
	int i,a,b,c;
	for(i=100;i<1000;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		if(c*c*c+b*b*b+a*a*a==i)
		printf("%d\n",i);
	 } 
 } 

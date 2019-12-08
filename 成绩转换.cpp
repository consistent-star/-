#include <stdio.h> 
int main()
{
	int n,a;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		if(90<=a&&a<=100) printf("A\n");
		if(80<=a&&a<=89) printf("B\n");
		if(70<=a&&a<=79) printf("C\n");
		if(60<=a&&a<=69) printf("D\n");
		if(0<=a&&a<=59) printf("E\n");
	}
	return 0;
}    

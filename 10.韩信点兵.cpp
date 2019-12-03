# include <stdio.h>
int main()
{
	int i,j,k,sum;
	scanf("%d%d%d",&i,&j,&k);
	for(sum=10;sum<100;sum++) 
	{
	
    	if(sum%3==i && sum%5==j && sum%7==k)
		{
	
	  		printf("%d",sum);
	  		break;
		}
		else
		{
			printf("No anser!\n");
		}


    }
    
	  return 0;
	
 } 

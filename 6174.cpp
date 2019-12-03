#include<stdio.h>
int main()
{
    int k,i,j,t,l;
    scanf("%d",&k);
    int n,a[4],n1,n2,s=0;
    for(l=0;l<4;l++)
        scanf("%d",&a[4]);
        while(n!=6174)
        {
            a[0]=n%10;
            a[3]=n/1000;
            a[1]=n/10%10;
            a[2]=n/100%10;
          	for(i=1;i<4;i++)
          	{
          		for(j=1;j<=4-i-1;j++)//ÅÅÐò´íÁË 
				  {
				  	if(a[j]>a[j+1])
				  	{
				  		t=a[j];
				  		a[j]=a[j+1];
				  		a[j+1]=t;
					}
				  } 
			  }
            n1=1000*a[3]+100*a[2]+10*a[1]+a[0];
            n2=1000*a[0]+100*a[1]+10*a[2]+a[3];
            n=n1-n2;
            s++;
        }
        if (n==6147) 
           printf("%d\n",s+1); 
}        

# include <stdio.h>
int main() 
{
	int a[3],b[3],n,m,i,count;
	while(scanf("%d%d",&m,&n),m!=0||n!=0)
	{
		count=0;
		a[0]=m/100;//�� 
		a[1]=(m/10)%10;//ʮ 
		a[2]= m%10;//�� 
		b[0]=n/100;
		b[1]=(n/10)%10;
		b[2]= n%10;
		for(i=2;i>=0;i--)//�Ӹ�λ��ʼ�� �����������λ 
		{
			if(a[i]+b[i]>=10) 
			count++;
			a[i-1]+=1;//��һ��Ӧ��Ȩλ��һ 
		}
		printf("%d\n",count);	
	}
	return 0;
} 

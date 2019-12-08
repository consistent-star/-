#include<stdio.h>   
int main()
{
    int num;
    int M;
    scanf("%d",&num);
    while(num--)
    {
        scanf("%d",&M);
        int i=10;
        while(M/i>=10)
        {
            i=i*10;
        }
        printf( "%d\n" ,M%i);
    }
}  

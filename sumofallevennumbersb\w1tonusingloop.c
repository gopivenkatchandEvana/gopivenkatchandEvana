// Online C compiler to run C program online
#include <stdio.h>

void main()
{
    int i,n,sum;
    sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        }
        printf("the sum is %d",sum);
}

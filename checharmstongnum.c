#include <stdio.h>
int main(){
    int n,temp,rem,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
        if (temp==sum){
            printf("it is armstone number");
        }
        else{
             printf("it is not armstone number ");
        }
    return 0;
}

#include <stdio.h>
int main()
{
 int n,temp,rev=0,rem;
 scanf("%d",&n);
 temp=n;
 while(n>0){
 rem=n%10;
 rev=rev*10+rem;
 n=n/10;
 }
 if (rev=temp)
  printf("given number is palindrome number %d",rev);
  else
      printf("given number is not palindrome number %d",rev);
    return 0;
}

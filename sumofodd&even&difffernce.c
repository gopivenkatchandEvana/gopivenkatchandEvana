/* Online C Compiler and Editor */
#include <stdio.h>

int main()
{
    int i,n,evensum=0,oddsum=0,differace;
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        if(i%2==0){
            evensum = evensum+i;}
            else{ oddsum = oddsum +i;
        }
        differace=oddsum-evensum;
    }
    printf("%d\n",evensum);
     printf("%d\n",oddsum);
      printf("%d",differace);
    
    return 0;
}

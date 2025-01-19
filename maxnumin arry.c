#include <stdio.h>
#include <limits.h>
int main(){
    int arr[5]={-1,-2,-4,-5,-7};
    int max = INT_MIN;
    for(int i=0;i<=4;++i){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d max",max);
    return 0;
}

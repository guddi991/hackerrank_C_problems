
#include <stdio.h>
int main(){
    int i,j,n,k,sum,G=0;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            sum=arr[i]+arr[j]; 
            if(sum%k==0)
            G++;
    
        }
    }
    
    printf("%d",G);
    return 0;
}

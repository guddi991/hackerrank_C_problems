#include <stdio.h>
int main(){
    
    int n;
    long sum=0;
    scanf("%d",&n);
    long int ar[n];
    for(int i=0;i<n;i++){
        scanf("%ld",&ar[i]);
        sum=sum+ar[i];
        
    }
    printf("%ld",sum);
    return 0;
    
}

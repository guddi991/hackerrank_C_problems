
#include <stdio.h>
int main(){
    int n,k,i,max=0,finall=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);  
        if(max<a[i])
        max=a[i];
        
         
    }
    finall=max-k;
    if(finall<0)
    printf("0");
    else {
    printf("%d",finall);
    }
    
    
}

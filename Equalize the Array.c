
#include <stdio.h>
#include <string.h>
int main(){
    int n,i,k=0,l,x=0,y=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    l=sizeof(a);
    for(i=0;i<n;i++){
        x=a[i];
        for(int j=0;j<n;j++){
            if(a[i]==a[j])
            k++;
        } 
        if(y<k){
            y=k;
        }  
        k=0;
    }
    printf("%d",n-y);   
}

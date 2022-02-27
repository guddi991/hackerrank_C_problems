
#include <stdio.h>
int main(){
    int n,i,p=0;
    scanf("%d",&n);
    int c[n];
    for(i=0;i<n;i++){
        scanf("%d",&c[i]);
    }
    for(i=2;i<=n;i=i+2){
        if(c[i]==1){
            p++;
            i--;
        }
        else{
            p++;
        }
    }
    printf("%d",p);
}

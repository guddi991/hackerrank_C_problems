
#include <stdio.h>
int main(){
    int n,i,j,k,min=0,p=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                k=j-i;
                if(p==0){
                    min = k;
                    p=1;
                }
                if(min>k){
                    min=k;
                }
            }
        }
    }
    if(min==0)
    printf("-1");
    else{
        printf("%d",min);
    }
}

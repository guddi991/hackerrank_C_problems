
#include <stdio.h>
int main(){
    int n,i,p=5,like=0,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i!=1)
        {
            p = (p/2)*3;
        }
        l=p/2;
        like = like+l;
    }
    printf("%d",like);
}

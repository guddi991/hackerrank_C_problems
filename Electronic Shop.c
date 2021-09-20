
#include <stdio.h>
int main(){
    int b,n,m,i,j,x=0,no=-1;
    scanf("%d%d%d",&b,&n,&m);
    int key[1000],drive[1000];
    for(i=0;i<n;i++){
        scanf("%d",&key[i]);
    }
    for(i=0;i<m;i++){
        scanf("%d",&drive[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            x=key[i]+drive[j];
            if(x>no&&x<=b){
                no=x;
            }
            
        }
    }
    printf("%d",no);
    return 0;
    
}


#include <stdio.h>
int main(){
    int n,p,i,front,back;
    scanf("%d",&n);
    scanf("%d",&p);
    front=p/2;
    back=n/2-p/2;
    if(front<back){
        printf("%d",front);
    }
    else{
        printf("%d",back);
    }
    return 0;
    
}


#include <stdio.h>
int main(){
    long int n,k,b,i,act,cha=0;
    scanf("%ld%ld",&n,&k);
    long int bill[n];
    for(i=0;i<n;i++){
        scanf("%ld",&bill[i]);
        cha=cha+bill[i];
    }
    scanf("%ld",&b);
    act=cha-bill[k];
    act=act/2;
    if(b==act){
        printf("Bon Appetit");
    }
    else {
        printf("%ld",b-act);
    }
    return 0;
}

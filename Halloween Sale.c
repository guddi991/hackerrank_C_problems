
#include <stdio.h>
int main(){
    int p,d,m,s,i,sum=0,g=0;
    scanf("%d%d%d%d",&p,&d,&m,&s);
    while(1){
        sum = sum+p;
        if(sum<=s){
            g++;
            if(p-d>=m){
                p=p-d;
            }
            else{
                p=m;
            }
        }
        else{
            break;
        }
    }
    printf("%d",g);
    return 0;
}

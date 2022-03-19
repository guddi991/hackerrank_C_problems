
#include<stdio.h>
int main(){
    int t,n,c,m,i,wrapper,bar,bar1;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d%d",&n,&c,&m);
        bar = n/c;
        wrapper = bar;
        while(1)
        {
            if(wrapper>=m){
                bar1 = wrapper/m;
                wrapper = wrapper%m+bar1;
                bar = bar+bar1;
            }
            else{
                break;
            }
        }
        printf("%d\n",bar);
    }
    return 0;
}

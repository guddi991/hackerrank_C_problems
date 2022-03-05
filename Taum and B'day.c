
#include <stdio.h>
int main(){
    long long b,w,bc,wc,z,p1,p2,p3;
    int t,i,min;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%lld%lld",&b,&w);
        scanf("%lld%lld%lld",&bc,&wc,&z);
        
        p1= b*bc+w*wc;
        p2= b*(wc+z)+w*wc;
        p3= b*bc+w*(bc+z);
        if(p1<p2 && p1<p3){
            printf("%lld\n",p1);
        }
        else if(p2<p1 && p2<p3){
            printf("%lld\n",p2);
        }
        else {
            printf("%lld\n",p3);
        }
    }
    
}

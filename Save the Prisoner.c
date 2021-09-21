
#include <stdio.h>
int main(){
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        long long n,m,s;
        scanf("%lld%lld%lld",&n,&m,&s);
        long long result=((m+s-1)%n);
        if(result==0)
        result=n;
        printf("%lld\n",result);
        
    }
    
    
}

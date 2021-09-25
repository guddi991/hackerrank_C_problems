
#include <stdio.h>
#include <math.h>
int main(){
    int q,i,j,count=0,p=0;
    long long int a,b;
    scanf("%d",&q); 
    for(i=0;i<q;i++){
        scanf("%lld%lld",&a,&b);
        for(j=sqrt(a);j<=sqrt(b);j++){
            
            if((j*j)>=a&&(j*j)<=b)
            count++;
        }
        printf("%d\n",count);
        count=0;   
    }
    
}

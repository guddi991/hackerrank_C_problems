
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
long int rev(long int x){
    long int i,sum=0,mult=10;
    while(x!=0){
        i=x%10;
        sum=(sum*mult)+i;
        x=x/10;
    }
    return sum;
}
int main(){
    long int i,j,k,x,r,result=0;
    scanf("%ld%ld%ld",&i,&j,&k);
    for(x=i;x<=j;x++){
        r=rev(x);
        if(abs(x-r)%k==0){
            result++;
        }   
    }
    printf("%ld",result);
    return 0;
}




#include <stdio.h>
int main(){
    long int a[5],min,max,i,sum=0;
    for(i=0;i<5;i++){
        scanf("%ld",&a[i]);
        sum=sum+a[i];
    }
    min=a[0];
    for(i=0;i<5;i++){
        if(min>a[i])  
        min=a[i];
    }
    max=a[0];
    for(i=0;i<5;i++){
        if(max<a[i])   
        max=a[i];
    }
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}



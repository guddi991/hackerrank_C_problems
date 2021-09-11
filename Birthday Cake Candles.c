

#include<stdio.h>
int main(){
    
    int n,i;
    
    scanf("%d",&n);
    long int a[n];
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);   
    
    long max;
    max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i])
        max=a[i];
    }
    long c=0;
    for(i=0;i<n;i++){
        if(a[i]==max)
        c++;
    }
    printf("%ld",c);
    return 0;
    
    
}

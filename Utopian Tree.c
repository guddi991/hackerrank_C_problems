
#include <stdio.h>
int main()
{
    int t,n,i,j,h=0,a[60];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    scanf("%d",&a[i]);
    long int b[70];
    for(i=0;i<=60;i++){
        if(i%2==0){
            h=h+1;
            b[i]=h;
        }
        else{
            h=h*2;
            b[i]=h;
        }
    }
    j=0;
    i=0;
    while(i<=61){
        if(a[j]==i){
            printf("%ld\n",b[i]);
            j++;
            i=0;
        }
        i++;
        
    }  
    
    
}

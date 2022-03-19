
#include <stdio.h>
int main(){
    int n,t,min,i,j,l,k;
    scanf("%d%d",&n,&t);
    int a[n];
    for(k=0;k<n;k++)
    scanf("%d",&a[k]);
    
    for(l=0;l<t;l++)
    {
        scanf("%d%d",&i,&j);
        min = a[i];
        for(k=i+1;k<=j;k++)
        {
            if(min > a[k])
                min = a[k]; 
        }
        printf("%d\n",min);
    }
    return 0;
}

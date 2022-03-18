
#include <stdio.h>
int main(){
    int i,j,k,n,d,p=0;
    scanf("%d%d",&n,&d);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]-a[i]==d)
            {
                for(k=j+1;k<n;k++)
                {
                    if(a[k]-a[j]==d){
                        p++;
                        break;
                    }
                }
            }
        }
    }
    printf("%d",p);
}

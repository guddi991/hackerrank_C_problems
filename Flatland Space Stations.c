
#include <stdio.h>
int main(){
    long int n,m,i,j,p=0,q=0,k,x;
    scanf("%ld%ld",&n,&m);
    int a[n],l[n],r[n];
    for(i=0;i<n;i++){
        a[i]=-1;
        l[i]=0;
        r[i]=0;
    }
    for(i=0;i<n;i++){
        scanf("%ld",&x);
        a[x]=x;
    }
    for(i=0;i<n;i++){
        p=0;
        q=0;
        for(j=i,k=i;j<n||k>=0;j++,k--)
        {
           if(j<n)
           {
              if(a[j]==-1)
              p++;
              else{
                  r[i]=p;
                  break;
              } 
           } 
           if(k>=0)
           {
               if(a[k]==-1)
               q++;
               else{
                   l[i]=q;
                   break;
               }
           }
            
        }
    }
    
    int max1 = r[0];
    int max2 = l[0];
    for(i=0;i<n;i++){
        if(r[i]>max1)
        max1 = r[i];
        if(l[i]>max2)
        max2 = l[i];
    }
    if(max1>max2){
        printf("%ld",max1);
    }
    else{
        printf("%ld",max2);
    }
}

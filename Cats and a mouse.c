
#include <stdio.h>
int main()
{
    int q,i,a,b,x,y,z;
    scanf("%d",&q);
    for(i=0;i<q;i++){
        scanf("%d%d%d",&x,&y,&z); 
        a=z-x;
        b=z-y; 
        if(b<0)
        b=-1*b;
        if(a<0)
        a=a*-1;
        if(a==b)
        printf("Mouse C\n");
        else if(a<b)
        printf("Cat A\n");
        else 
        printf("Cat B\n");
        
        
    }
    return 0;    
}

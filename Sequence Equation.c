
#include <stdio.h>
int main()
{
    int n,i,x=1;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(x=1;x<=n;x++)
    {
        for(i=1;i<=n;i++)
        {
            if(a[a[i]]==x)
            {
                printf("%d\n",i);
                break;
            }
        }
        
    }
    return 0;   
}

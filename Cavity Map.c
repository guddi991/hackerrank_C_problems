
#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char map[100][100];
    for(i=0;i<n;i++)
    scanf("%s",map[i]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            if(i==0||j==0||i==n-1||j==n-1)
            { 
                printf("%c",map[i][j]);
            }
            else if(map[i][j]>map[i][j-1] && map[i][j]>map[i][j+1] && map[i][j]>map[i+1][j] && map[i][j]>map[i-1][j])
            {  
                printf("X");
            }
            else{
                printf("%c",map[i][j]);
            }
        }
        printf("\n");
    }
        
    
}

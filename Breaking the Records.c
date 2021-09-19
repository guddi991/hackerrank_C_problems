
#include <stdio.h>

int main(){
    int i,n,min,max,count_max=0,count_min=0;
    scanf("%d",&n);
    int score[n];
    for(i=0;i<n;i++){
        scanf("%d",&score[i]);
    }
    max=score[0];
    for(i=0;i<n;i++){
        if(max<score[i]){
            max=score[i];
            count_max++;
        }
    }
    min=score[0];
    for(i=0;i<n;i++){
        if(min>score[i]){
            min=score[i];
            count_min++;
        }
    }
    printf("%d %d",count_max,count_min++);
    return 0;
    
    
    
}

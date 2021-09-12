

#include<stdio.h>
int main(){
    int n,g,ig;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&g);
        if(g<38)
          printf("%d\n",g);
        else{
            ig=(g/5+1)*5;
            if(ig-g<3)
            printf("%d\n",ig);
            else {
            printf("%d\n",g);
            }
            
        }
    }
    return 0;
    
}

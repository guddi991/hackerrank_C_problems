
#include <stdio.h>
int main(){
    int n,i,carry=0,j,mul,dig,len=1;
    scanf("%d",&n);
    int arr[1000]={0};
    arr[0]=1;
    for(i=2;i<=n;i++){
        for(j=0;j<len;j++){
            mul=i*arr[j]+carry;
            dig=mul%10;
            arr[j]=dig;
            carry=mul/10;
        }
        while(carry){
            dig=carry%10;
            arr[len]=dig;
            len++;
            carry=carry/10;
        }
    }
    for(i=len-1;i>=0;i--){
        printf("%d",arr[i]);
    }
    return 0;
    
    
}

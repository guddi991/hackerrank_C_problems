
#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    long long int n,x;
    int i,p=0,a;
    gets(s);
    scanf("%lld",&n);
    a=strlen(s);
    for(i=0;s[i]!='\0';i++)
    { 
        if(s[i]=='a')
        p++;
        
    }
    x=n;
    x=x/a;
    x=x*p;
    n=n%a;
    for(i=0;i<n;i++){
        if(s[i]=='a')
        x++;
    }
    printf("%lld",x);
    
    
}

#include <stdio.h>
int main(){
    
    int n,a=0;
    printf("enter your no.");
    scanf("%d",&n);

    for(int i = 0; n>0; i++)
    {
        a+=n%10;
        n=n/10;

    }
    printf("your sum is %d",a);

return 0;
}
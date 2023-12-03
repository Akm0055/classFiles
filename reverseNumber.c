#include <stdio.h>
int main(){
    int n ,p ;
    printf("enter your no. : ");
    scanf("%d",&n);

    for(int i=1; n>0; i++)
    {
        p = p*10+(n%10);
        n= n/10;
    }
    printf("%d",p);
return 0;
}
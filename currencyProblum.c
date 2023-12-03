#include <stdio.h>
int main(){
    int m,h,f,t;
    printf("enter ");
    scanf("%d",&m);
    h=m/100;
    m-=h*100;
    f=m/50;
    m-=f*50;
    t=m/10;
    m-=t*10;

    printf("no of hundreds is %d ,fifties is %d and ten is %d",h,f,t);


return 0;
}
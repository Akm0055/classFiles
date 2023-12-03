#include <stdio.h>
int main(){
    int t=80000,m=52,w,/*m=men,w= women*/
    tl=48,lm=35,lw,/*tl=total litracy*/
    ilm,ilw;
    w=100-m;
    lw=tl-lm;

    ilm=m-lm;
    ilw=w-lw;

    printf("Total no illetrate men are :%d\n",t*ilm/100);
    printf("Total no illetrate women are :%d",t*ilw/100);
return 0;
}
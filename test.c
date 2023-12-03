#include <stdio.h>
#include <math.h>
int main()
{
    int n , number = 0, digit , i=0;
    printf("enter your no.");
    scanf("%d",&n);

    while(n)
    {
        digit = n%10;
        if(digit ==9){
            digit =0 ;
            number += digit*pow(10,i);
        }
        else{
            digit++;
            number += digit*pow(10,i);
        }
        n=n/10;
        i++;
    }
    printf("new number is : %d",number);


    return 0;

}
#include <stdio.h>
int main(){
    int n,p,x=1,r=0;
    printf("Enter your number: ");
    scanf("%d",&n);

    while (n)
    {
        p=n%10;//taking last digit

        if(p==9)
        {
            p=0;//for 9 making digit zero without affecting next number
            x=10;
        }
        else
        {
            p+=1;//add 1 to the digit
        }

        n=n/10;//removing last number
        r=(r*10)+p; //appending new value at end of number 

        //this will store modified number in reverse order
    }
    while (r>0)//reversing r
    {
        n = n*10+(r%10);
        r = r/10;
    }
    n*=x;
    printf("your new no is :%d",n);
    
    

return 0;
}
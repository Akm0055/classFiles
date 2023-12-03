#include <stdio.h>
int main(){
    int n;
    printf("input your number : ");
    scanf("%d",&n);
    int space = n/2;
    int star = 1;
    for (int i = 1 ; i<= n ; i++ )
    {
        for (int j=0 ; j<space ; j++)// printing spaces
        {
            printf(" ");
        }

        for ( int k =0 ; k<star ; k++)
        {
            printf("*");
        }

        if (i<=n/2)
        {
            space--;
            star+=2;
        }
        else
        {
            space++;
            star-=2;
        }
        printf("\n");


    }
     

return 0;
}
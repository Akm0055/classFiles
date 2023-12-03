#include <stdio.h>
int main(){
    int n ;
    printf("enter no of rows : ");
    scanf("%d",&n);
    char c = 'A';

    for(int i=0;i<n;i++)
    {
        // printing spaces
        for (int k=1; k<(n-i);k++)
        {
            printf("  ");
        }
        //left side
        for (int j = 0; j <= i; j++)
        {
            printf("%c ",c--);
        }
        c++;
        //right side
        for (int l = 0; l < i; l++)
        {
            printf("%c ",++c);
        }
        c++;



        printf("\n");
    }

return 0;
}
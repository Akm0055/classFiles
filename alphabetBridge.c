#include <stdio.h>
int main()
{
    
    int n;
    char a='A';
    // taking input
    printf("enter no rows: ");
    scanf("%d",&n);
    
    for (int i = n; i >0; i--)
    {
        // printing left side of pyramid
        for (int j = 0; j < i; j++)
        {
            if(i==n && j==5)
            {
                a++;
            continue;
            }
            printf("%c ",a++);
        }

        // printing spaces
        for (int k=0; k<(2*(n-i))-1;k++)
        {
            printf("  ");
        }

        // printing right side of pyramid
        for (int l=0; l<i; l++ )
        { 
            printf("%c ",--a);
        }
       
        printf("\n");//for new line
    }
    return 0;
        
        
}
    




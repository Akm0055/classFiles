#include <stdio.h>
int main()
{
    
    int count;
    // taking input
    printf("enter no rows: ");
    scanf("%d",&count);
    int num =64;
    
    for (int i = 0; i < count; i++)
    {
        // printing spaces
        for (int k=1; k<(count-i);k++)
        {
            printf("  ");
        }
        // printing left side of pyramid
        for (int j = 0; j <= i; j++)
        {
            printf("%c ",++num);
        }
        // printing right side of pyramid
        for (int l=0; l<i; l++ )
        { 
            printf("%c ",--num);
        }
       
        printf("\n");//for new line
    }
    return 0;
        
        
}
    




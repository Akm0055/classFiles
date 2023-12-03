#include <stdio.h>
int main()
{
    
    int count;
    char alph='A';
    // taking input
    printf("enter no rows: ");
    scanf("%d",&count);
    
    for (int i = count; i >0; i--)
    {
        // printing left side of pyramid
        for (int j = 0; j <= i; j++)
        {
            printf("%c ",alph++);
        }
        // if(i==count)
        // {
        //     printf("%c ",++alph);
        //     alph--;
        // }
        // printing spaces
        for (int k=1; k<(2*(count-i))+1;k++)
        {
            printf("_ ");
        }
        // printing right side of pyramid
        // alph--;
        for (int l=0; l<=i; l++ )
        { 
            if( i==0 && l==0)
            {
                continue;
            }
            printf("%c.",--alph);
        }
       
        printf("\n");//for new line
    }
    return 0;
        
        
}
    




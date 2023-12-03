#include <stdio.h>
int main()
{
    
    int i,j,count;
    char alph = 'A';
    printf("enter no rows");
    scanf("%d",&count);
    
    for(i=0; i<count; i++)
    {
        for (j=0; j<=i; j++)
        {
            printf("%c ", alph++);
        }
        printf("\n");
    }
    return 0;
        
        
}
    




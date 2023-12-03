#include <stdio.h>
int main()
{
    
    int i,j,count;
    printf("enter no rows");
    scanf("%d",&count);
    
    for ( i = 0; i <= count ; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf("%d ",i);
            
        }
        printf("\n");
    }
    return 0;
        
        
}
    




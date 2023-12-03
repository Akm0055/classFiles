#include <stdio.h>
int main()
{
    
    int i,j,count;
    printf("enter no rows");
    scanf("%d",&count);
    int num =1;
    for ( i = 0; i < count; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
        
        
}
    




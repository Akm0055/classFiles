#include <stdio.h>
int main()
{
    
    int i,j,count;
    printf("enter no rows: ");
    scanf("%d",&count);
    int num =1;
    for ( i = 0; i < count; i++)
    {
        for (int k=0; k<(count-i);k++)
        {
            printf("  ");
        }
        for ( j = 0; j <= i; j++)
        {
            printf("%d ",num);
            num++;
        }
        if(i>=1)
        {
        num = num-i;
        }
        printf("\n");
    }
    return 0;
        
        
}
    




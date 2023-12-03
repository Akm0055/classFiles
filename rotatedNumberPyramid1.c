#include <stdio.h>
int main(){
    int n;
    printf("enter no of rows :");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for (int k = n-i; k >0; k--)
        {
            printf("  ");
        }
        int j=i;
        while (j)
        {
            
            printf("%d ",j);
            j--;
        }
        printf("\n");
        
    }
return 0;
}
#include <stdio.h>
int main(){
    int n = 7;
    for (int i = 1; i < n ; i++)
    {
        for (int j = 1; j < (n-i); j++)//printing spaces
        {
           printf(" ");
        }
        
        for (int k = 1; k <= i; k++)
        {
            printf("%d",k);
            
        }
        for (int k = (i-1); k > 0; k--)
        {
            printf("%d",k);
            
        }
        
        printf("\n");
        
    }

    
return 0;
}
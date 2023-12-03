#include <stdio.h>
int main()
{
    int n,i,j,k;
    // printf("Enter the number of rows in triangle:\n ");
    n=5;
    // scanf("%d",&n);
    // for(i=1; i<=n; ++i){
    //     for(k=0; k<(n-i); k++){
    //         printf(" ");
    //     }
    //     for(j=1; j<=i; ++j){
    //         printf("*");
    //     }
    //     printf("\n");

    for(i=n; i>=0; i--){
        
        for(k=1; k<=(n-i); k++){
            printf("-");
        }

        for(j=0; j<i; j++){
            printf("*");
        }
    printf("\n");
    }
    
return 0;
}
#include<stdio.h>

int main(){
    
    int i,j,k,n;
    printf("Enter the noumer of rows you want in triangle :");
    scanf("%d",&n);

    for (i=1 ; i<n+1 ; i++)
    {
    //     // printing spaces
        for (j=0 ; j<(n-i) ; j++){
            printf(" ");
        }

        // printing stars
        for(k=0 ;k<(2*i)-1 ; k++)
        {
            printf("*");        
        }
        //command for going to new line
            printf("\n");


//      Reverse Triangle
    }
    for (i=n ; i>=0 ; i--)
    {
    //     // printing spaces
        for (j=0 ; j<(n-i) ; j++){
            printf(" ");
        }

        // printing stars
        for(k=0 ;k<(2*i)-1 ; k++)
        {
            printf("*");        
        }
        //command for going to new line
            printf("\n");



    }


    return 0;
}
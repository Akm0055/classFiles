#include <stdio.h>

// function to calculate factorial
int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    // iterate over the rows
    for (int i = 0; i < n; i++)
    {
        // print the leading spaces
        for( int k =n-i-1 ; k>0; k--)
        {
            printf(" ");
        }
        
        // calculate and print the values of each row
        for(int j = 0 ; j<=i; j++)
        {
            printf("%d ",factorial(i)/(factorial(j)*factorial(i-j)));
        }
        
        // print a newline character
        printf("\n");
    }
    
    return 0;
}
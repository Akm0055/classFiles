#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

void printPascalTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", factorial(i) / (factorial(j) * factorial(i - j)));
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);
    /*
    ----1
    ---1 1
    --1 2 1
    -1 3 3 1
    1 4 6 4 1

    */





    for (int i = 0; i < n; i++)
    {
      for( int k =n-i-1 ; k>0; k--)
      {
        printf(" ");
      }
      for(int j = 0 ; j<=i; j++)
      {
        printf("%d ",factorial(i)/(factorial(j)*factorial(i-j)));
      }
      printf("\n");
    }
    

    // printPascalTriangle(n);
    return 0;
}
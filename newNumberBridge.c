#include <stdio.h>
int main(){
    int m;
    printf("input your number : ");
    scanf("%d",&m);
    int n = m-1;
    for (int a = 1; a<= 2*m-1;a++)
    {
        printf("%d",a);
    }
    printf("\n");
    // int n =3;
    int nsp = 1;
    int nst = n;
    for (int i=1; i<=n ; i++)
    {
        int a =1; 
        for(int j=1; j<=nst; j++)
        {
            printf("%d",a);
            a++;
        }
        for(int k = 1; k<= nsp; k++ )
        {
            printf(" ");
            a++;
        }

       for(int l=1; l<=nst; l++)
        {
            printf("%d",a);
            a++;
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
return 0;
}
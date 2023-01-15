#include <stdio.h>
#include <math.h>

int main()
{
    int i,c,n,r;

    printf("Enter the range of magic square\n");
    scanf("%d",&n);
    int arr[n][n];


    for(i=1;i<=n*n;i++)
    {
        r=(n-i%n+1+2*((i-1)/n))%n;    // for row  //
        c=((n-1)/2+i-1-(i-1)/n)%n;   // for column //
        arr[r][c]=i;
    }

   
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%d\t",arr[r][c]);
        }
        printf("\n");
    }
    getch();
     return 0;
}
       
    

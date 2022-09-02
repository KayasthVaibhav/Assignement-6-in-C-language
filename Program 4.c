// Write A Program to Calculate Sum of Squares of First N Natural Numbers...?

#include <stdio.h>
#include <conio.h>
int main()
{

       int i=1,N,sum =0 ;
    printf("Enter Sum of Squares of First N Natural Numbers\n");
    scanf("%d",&N);

    for(i=1; i<=N; i++)
    {
         sum = sum + i*i;
    }
    printf("Sum of Squares First of  N Natural Numbers is = %d\n",sum);
    return 0;
}
//Completed//

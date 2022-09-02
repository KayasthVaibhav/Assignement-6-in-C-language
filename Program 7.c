
//Write Program to Count Digit in a Given Number //

#include <stdio.h>
#include <conio.h>
int main()
{

    int N,count =0;
    printf("Enter a Number ");
    scanf("%d",&N);
//1st method
/* for( count=0;N!=0;count++)
    {
      N=N/10;
    }
        printf("%d",count);
        */
       //2nd Method //
        while(N!=0)
        {
            N=N/10;
            count++;
        }
        printf("Digit in Given Number  is = %d",count);
    return 0;
}
//completed //

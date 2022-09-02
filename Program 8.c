//Write a Program to check whether a given number is a prime number or not //

#include <stdio.h>
#include <conio.h>
int main()
{

    int x,i,flag =0;
    printf("Enter a Number:\n");
    scanf("%d",&x);
    {
        for( i=2; i<x; i++ )
        {
            if (x%i==0)
                flag = 1;
            break;
        }
        {
            if(flag == 1)
               printf("Given Number %d is not a Prime Number... ",x);
            else
                printf("Given Number %d is a Prime Number... ",x);
        }
    }
    return 0;
}
//Completed //

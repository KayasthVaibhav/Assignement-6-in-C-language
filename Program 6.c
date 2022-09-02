// Write a Program to Calculate Factorial of a numbers//

#include <stdio.h>
#include <conio.h>
int main()
{
   int N,fact =1;
    printf("Enter Factorial of a  Numbers\n");
    scanf("%d",&N);

    for(fact=1; N>=1; N--)
    {
      fact= fact*N;

    }
    printf("Factorial of a  Number = %d\n",fact);
    return 0;
}
//Completed//
//Incompleted because of Dry Run ?//

//Write a Program To Calucate Sum Of First N Even natural Numbers.//

#include<stdio.h>
#include<conio.h>
int main()
{

    int i=1,N,sum =0 ;
    printf("Enter Sum of First N Even Natural Numbers\n");
    scanf("%d",&N);

    for(i=1; i<=N; i++)
    {
         sum = sum + 2*i;
    }
    printf("Sum of First N Even Natural Numbers is = %d\n",sum);
    return 0;
}
//Completed//

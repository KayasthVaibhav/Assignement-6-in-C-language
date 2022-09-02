//Write a Program to Print a Given Number IN Reverse Order//

#include <stdio.h>
#include <conio.h>
int main()
{

    int x,reverse =0, remindar;
    printf("Enter A Numbers :\n");
    scanf("%d",&x);

    while(x!=0)
    {

        remindar =x%10;
        x=x/10;
        reverse =reverse *10 + remindar;
    }
    printf("Given is Numbers in Reverse Order : %d",reverse);
    return 0;
}
//completed..//

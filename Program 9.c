// Write a Program to Calculate LCM of two Numbers //


#include <stdio.h>
#include <conio.h>
int main()
{

    int x,y,i=1;
    printf("Enter two  Number:\n");
    scanf("%d %d",&x,&y);

    for(i=1; i<=x*y; i++)
    {
        if ((i%x==0) && (i%y==0))
        {
            break;
        }
    }
        printf("LCM IS = %d",i);
    return 0;
}
//Completed//

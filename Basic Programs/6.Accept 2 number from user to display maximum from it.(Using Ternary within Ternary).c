//Accept 2 number from user to display maximum from it.(Using Ternary within Ternary).
//(condition)?(True):(False);

#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0,No2=0;
    printf("\n Enter 2 Integer Numbers=> ");
    scanf("%d%d",&No1,&No2);
    (No1==No2)?printf("\n Both Given Numbers are Equal."):(No1>No2)?printf("\n Number %d is Maximum",No1):printf("\n Number %d is Maximum",No2);
}

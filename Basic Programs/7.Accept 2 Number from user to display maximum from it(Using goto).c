//Accept 2 Number from user to display maximum from it.(Using goto).
#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0,No2=0;
    Grade:
        printf("\n Enter 2 Integer Numbers: ");
        scanf("%d%d",&No1,&No2);
        if(No1==No2)
        {
            printf("\n Both Given Numbers are Equal.\n Please Enter Different Numbers to compare,\n");
            goto Grade;
        }
        (No1>No2)?printf("\n Given Number %d is Maximum.",No1):printf("\n Given Number %d is Maximum.",No2);
        getch();
        return 0;
}

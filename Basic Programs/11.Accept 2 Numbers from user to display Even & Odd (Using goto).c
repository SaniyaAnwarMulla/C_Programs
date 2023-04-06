//Accept 2 Numbers from user to display Even & Odd (Using goto).
#include<stdio.h>
#include<conio.h>
int main()
{
    int Num=0;
        printf("\n Enter an Integer Number to check wheather it is Even or Odd: ");
        Up:
        scanf("%d",&Num);
        if(Num==0)
        {
            printf("\n Given Number is Neutral,\n\n Please Enter other than zero Integer to check wheather it is Even or Odd: ");
            goto Up;
        }
        (Num%2==0)? printf("\n Given Number is Even."):printf("\n Given Number is Odd.");
        getch();
        return 0;
}

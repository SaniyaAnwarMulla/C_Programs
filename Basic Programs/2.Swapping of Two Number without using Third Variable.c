//Swapping of Two Number Without Using Third Variable.
#include<stdio.h>
#include<conio.h>
int main(){

    int No1=0,No2=0;
    printf("\n Enter Two Numbers:- ");
    scanf("%d%d",&No1,&No2);

    printf("\n Before Swapping => 1st Number=>%d, 2nd Number=>%d",No1,No2);
    No1=No1+No2;
    No2=No1-No2;
    No1=No1+No2;
    printf("\n After Swapping => 1st Number=>%d, 2nd Number=>%d",No1,No2);
    getch();
    return 0;
}

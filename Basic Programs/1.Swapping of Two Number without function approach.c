//Write a program for Swapping two number

#include<stdio.h>
#include<conio.h>
int main(){
   int No1=0,No2=0,Temp=0;
   printf("\n Enter Two Number's:- ");
   scanf("%d%d",&No1,&No2);
   printf("\n Before Swapping =>First Number=>%d, Second Number=>%d",No1,No2);

   Temp=No1;
   No1=No2;
   No2=Temp;

   printf("\n After Swapping =>First Number=>%d, Second Number=>%d",No1,No2);
   getch();
   return 0;
}

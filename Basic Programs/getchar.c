#include <stdio.h>
#include <conio.h>
  int main (){
    char ch = 'A';
    printf("\n\n Value of our character is = %c.\n--------Hellow Indians ---------\n\n",ch);
    printf("\n Are you Indian??(Yes/No)=");
    ch = getchar();
    if(ch=='Y' || ch=='Y')
    {
        printf("\n\n Welcome Dear \n\n");

    }
    else{
        printf("\n\n Bye Bye.....\n\n");
    }
    getch();
    return 0;
}

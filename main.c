#include"EQM.h"
#include<stdio.h>
#include<math.h>
float EQ1();
float EQ2();
float EQ3();
float EQ4();
void main()
{
    int number;
    float pri;
    //V=Final Velocity.
    //U=Initial Velocity.
    //S=Distance.
    //A=Accleration.
    //T=Time.
    printf("Enter the number of Equation you want to choose\n");
    printf("1 For V=U+AT\n");
    printf("2 For S=U*T+0.5*A*T*T\n");
    printf("3 For V*V=U*U+2*A*S\n");
    printf("4 For S=0.5*(U+V)*T\n");
    scanf("%d",&number);
    if(number==1)
    {

        pri=EQ1();
        printf("%f",pri);
    }
    else if(number==2)
    {

        pri=EQ2();
        printf("%f",pri);
    }
    else if(number==3)
    {

        pri=EQ3();
        printf("%f",pri);
    }
    else if(number==4)
    {
        pri=EQ4();
        printf("%f",pri);
    }
    else
    {
            printf("Please enter valid number");
    }
}



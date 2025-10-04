// Calculator.
#include<stdio.h>
int main(){


// Declared variables.
    int choice;
    int num1,num2,Add,Sub,Mul;
    float Div,in1,in2;
    printf("\n1.Add : ");
    printf("\n2.Sub : ");
    printf("\n3.Mul : ");
    printf("\n4.Div : ");

// Choice for user to what the user wants to calculate.


    printf("\nchoose the choice to calculate : ");
    scanf("%d",&choice);

    switch(choice)
    {

        // For addition of two number.
    case 1:
    printf("Enter the num1 : ");
    scanf("%d",&num1);
    printf("Enter the num2 : ");
    scanf("%d",&num2);


//Formula to add two number.
    Add = num1 + num2;

    printf("Addition of two number = %d\n",Add);
    break;

    case 2:

// For subtraction of two number.

    printf("Enter the num1 : ");
    scanf("%d",&num1);
    printf("Enter the num2 : ");
    scanf("%d",&num2);

// Formula to subtract two number.

    Sub = num1 - num2;

    printf("Subtraction of two number = %d\n ",Sub);

    break;

    case 3:

// For multiplication of two variables.

    printf("Enter the num1 : ");
    scanf("%d",&num1);
    printf("Enter the num2 : ");
    scanf("%d",&num2);

// Formula to multiply two number.


    Mul = num1 * num2;

    printf("Multiplication of two number = %d\n",Mul);

    break;

    case 4:

// For divide two number.

    printf("Enter the in1 : ");
    scanf("%d",&in1);
    printf("Enter the in2 : ");
    scanf("%d",&in2);

// Formula to divide two number.


    Div = in1/in2;

    printf("Division of two number = %f\n",Div);






    }
    return 0;




}

///write a program to find wheather the number enter by user is smallest or greatest out of two variables

#include <stdio.h>
#include <conio.h>

int main(){

    int num1, num2;
    printf("Enter first number: ");
    scanf("\n%d",&num1);
    printf("Enter second number: ");
    scanf("\n%d",&num2);

    if(num1>num2){
        printf("First number is greatest");
    }
    else{
        printf("Second number is greatest");
    }

    return 0;
}
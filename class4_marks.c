#include <stdio.h>
#include <conio.h>

int main(){

    int marks, attend;

    printf("Enter your marks: ");
    scanf("\n%d",&marks);
    printf("Enter yout attendance in percentage: ");
    scanf("\n%d", &attend);

    if(marks > 60 && attend >= 75 ){
        printf("You are pass in End Term");
    }
    else{
        printf("sorry! you are fail!");
    }


    return 0;
}
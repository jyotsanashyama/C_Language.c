///write a program to find whether the entered number is less than or greater than the other variable

#include<stdio.h>

int main(){

    int a,b;
    printf("enter the first value: ");
    scanf("%d",&a);
    printf("enter the second value: ");
    scanf("%d",&b);

    if(a>b){
        printf("%d is greater than %d",a,b);
    }
    else{
        printf("%d is greater than %d",b,a);
    }

    return 0;
}
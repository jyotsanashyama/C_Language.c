#include <stdio.h>
#include <conio.h>

int main(){

    int v, a;
    printf("Enter the number: ");
    scanf("%d",&v);
    printf("Enter the value of variable 'a' with which you want to compare: ");
    scanf("%d",&a);

    if(v<a){
        printf("Number is less than 10");
    }
    else{
        printf("Number is greater than %d",a);
    }
    
    return 0;
}
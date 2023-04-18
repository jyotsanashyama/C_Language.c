#include <stdio.h>

int main(){

    int a, v;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter the number with which you want to compare: ");
    scanf("%d",&v);

    if(a<v){
        printf("Number is less than %d",v);
    }
    else if(a<100){
        printf("Number is less than %d",v);
    }


    return 0;
}
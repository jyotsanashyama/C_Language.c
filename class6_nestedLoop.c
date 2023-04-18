#include <stdio.h>

int main(){

    int i;
    printf("Enter the value of i: ");
    scanf("%d",&i);
    if(i==10){
        if(i<15){
            printf("%d is smaller than 15\n",i);
            if(i<12){
                printf("%d is smaller than 12 too",i);
            }
        }
    }
    else{
            printf("%d is greater than 15",i);
        }

    return 0;
}
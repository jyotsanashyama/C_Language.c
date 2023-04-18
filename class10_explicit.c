#include <stdio.h>

int main(){

int average, total;
float counter;

printf("Enter the value of total in integer: ");
scanf("%d",&total);
printf("Enter the value of counter in float: ");
scanf("%f",&counter);

average = total/(int)counter;
printf("The average is: %d",average);

    return 0;
}
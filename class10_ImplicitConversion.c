#include <stdio.h>

int main(){

float average, total;
int counter;

printf("Enter the value of total in float: ");
scanf("%f",&total);
printf("Enter the value of counter in integer: ");
scanf("%d",&counter);

average = total/(float)counter;
printf("The average is: %f",average);

    return 0;
}
#include <stdio.h>

int main(){

int i,j;
printf("Displaying right angle triangle for 5 rows:\n");
for(i=1; i<=10; i++){
    for(j=1; j<=i; j++){
        printf("* ");
    }
    printf("\n");
}

    return 0;
}
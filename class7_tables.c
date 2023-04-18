#include <stdio.h>

int main(){

    int n, i, a;
    printf("Enter the number to print the table: ");
    scanf("%d",&n);
    printf("Enter from which value you want the table: ");
    scanf("%d",&i);
    printf("Enter upto which value you want the table: ");
    scanf("%d",&a);

    while (i<=a){
        printf("%d * %d = %d\n", n, i, n*i);
        i++;
    }

    return 0;
}
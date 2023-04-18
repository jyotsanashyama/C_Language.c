#include <stdio.h>
///wap to start the loop from 1 to 100 and ask the user upto which number the user wants to print the value
int main(){

int i,a;
printf("Enter the number upto you want the iteration: ");
scanf("%d",&a);
for(i=1; i<=100; i++){
    printf("%d\n",i);
    if(i==a){
        break;
    }
}

    return 0;
}
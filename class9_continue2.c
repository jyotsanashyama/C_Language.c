///wap to print any series and in that ask the user to skip any two numbers usinmg continue statement

#include <stdio.h>

int main(){
int i,j,a,b;
printf("Enter first number you want to skip: ");
scanf("%d",&a);
printf("Enter second number you want to skip: ");
scanf("%d",&b);
for(i=1; i<=3;i++){
    for(j=1; j<=5; j++){
        if(j==a){
            continue;
        }
        else if(j==b){
            continue;
        }
        printf("%d\n",j);
    }
}

    return 0;
}
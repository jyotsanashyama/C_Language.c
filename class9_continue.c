#include <stdio.h>

int main(){

int i,j,a;
printf("Enter the number you want to skip: ");
scanf("%d",&a);
for(i=1; i<=3;i++){
    for(j=1; j<=5; j++){
        if(j==a){
            continue;
        }
        printf("%d\n",j);
    }
}

    return 0;
}
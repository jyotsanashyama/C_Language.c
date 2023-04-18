#include <stdio.h>
int main(){
    int i,j;

    for(i=1; i<5; i++){
        if(i==2){
            goto there;
        }
        printf("%d\n",i);
    }
    there:
        printf("Two");
        for(j=1; j<=10; j++){
            printf("\n2 * %d = %d",j, 2*j);
        }
    return 0;
}
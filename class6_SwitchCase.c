#include <stdio.h>

int main(){

    int pt;
    printf("Enter the number of nodes: ");
    scanf("%d",&pt);

    switch(pt){
        case 0:
        printf("No Geometry\n");
        break;
        case 1:
        printf("A point\n");
        break;
        case 2:
        printf("A line\n");
        break;
        case 3:
        printf("A triangle\n");
        break;
        case 4:
        printf("A rectangle\n");
        break;
        case 5:
        printf("A pentagon\n");
        break;
        default:
        printf("Invalide input\n");
        break;

    }

    return 0;
}
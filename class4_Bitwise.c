#include <stdio.h>

int main(){
    /// this code will perform bitwise operation by converting the value of a and b to binary format and then perform operations
    int a, b;

    printf("Enter the value of a: ");
    scanf("%d\n",&a);
    printf("Enter the value of b: ");
    scanf("%d\n",&b);

    printf("a = %d, b = %d\n",a,b);
    printf("a&b = %d\n",a&b);  
    printf("a|b = %d\n",a|b);
    printf("a^b = %d\n",a^b);
    printf("~a = %d\n",a=~a);   /// ~ = -(n+1) 
    printf("b<<1 = %d\n",b<<1);  ///left shift
    printf("b>>1 = %d\n",b>>1);  ///right shift

    return 0;
}
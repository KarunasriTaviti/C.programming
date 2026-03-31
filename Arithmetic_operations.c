//basic arithmetic operations b.w 2 numnbers
#include <stdio.h>
void main(){
    int a,b;
    printf("Enter any two numbers to perform arithmetic operations:");
    scanf("%d\n%d",&a,&b);
    //Addition
    
    printf("\nAddition: %d+%d=%d\n",a,b,a+b);
    
    //Subtraction
    
    printf("Subtraction: %d-%d=%d\n",a,b,a-b);
    
    //Multiplication
    
    printf("Multiplication: %d*%d=%d\n",a,b,a*b);
    
    //Division
    
    printf("Division: %d/%d=%d\n",a,b,a/b);
}

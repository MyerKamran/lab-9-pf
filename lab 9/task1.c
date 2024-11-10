#include<stdio.h>
int product(int a, int b);
int main(){
    int a ,b;
    printf("Enter the number a: \n");
    scanf("%d", &a);
    printf("Enter the number b: \n");
    scanf("%d", &b);
   printf("The product of the numbers is: %d", product(a,b));
    return 0;

}
int product(int a, int b){
    int c;
    c= a*b;
    return c;
}
#include <stdio.h>
int check(int number) {
    if(number<=1){
        return 0; 
    }
    for(int i=2;i<=number;i++){
        if (number%i==0) {
            return 0; 
        }
    }
    return 1; 
}
int main(){
    int i, n, number;
    printf("Enter the number of integers to check= \n ");
    scanf("%d", &n);
    for ( i=0; i<n;i++) {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (check(number)) {
            printf("%d is a prime number\n", number);
        }
         else{
            printf("%d is not a prime number\n", number);
        }
    }
    return 0;
}

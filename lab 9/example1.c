#include<stdio.h>
int sum(int a, int b);
int main(){
int result = sum(5, 10);
printf("Sum is= %d\n", result);
return 0;
}

int sum(int a, int b)
 {
return a + b;
}
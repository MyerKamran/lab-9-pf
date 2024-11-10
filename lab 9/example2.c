#include <stdio.h>
int max(int a, int b) {
if(a>b){
return a;
}
else{
return b;
}
}
int main(){
int result=max(8,25);
printf("Maximum is= %d \n", result);
return 0;
}
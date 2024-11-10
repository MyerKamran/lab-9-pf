#include<stdio.h>
int sumarray(int arr[], int size);
int main(){
    int arr[]= {1,2,3,4,5};
    printf("The sum of the array is= %d \n", sumarray(arr, 5));
    return 0;
}
 sumarray(int arr[], int size){
    int sum=0;
    for(int i=0;i<5;i++){
        sum = sum +arr[i];
    }
    return sum;
}

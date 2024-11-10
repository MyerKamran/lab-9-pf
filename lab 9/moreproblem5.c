#include <stdio.h>
#include <string.h>
void reverseString(char string[]){
    int length=strlen(string);
    for (int i=0; i<length/2;i++) {
        char temp=string[i];
        string[i]=string[length - i - 1];
        string[length - i - 1]=temp;
    }
}
int main() {
    char string[100];
    printf("Enter a string: ");
    scanf("%s", string); 
    reverseString(string);
    printf("Reversed string: %s\n", string);
    return 0;
}

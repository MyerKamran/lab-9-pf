#include <stdio.h>
#include <string.h>
int encryptMessage(char message[], int shift);
int decryptMessage(char message[], int shift);
int main() {
    char message[100];
    int shift;

   
    printf("Enter a message (no spaces)= ");
    scanf("%s", message);  
    printf("Enter shift value=");
    scanf("%d", &shift);

    encryptMessage(message, shift);
    printf("Encrypted message=%s\n", message);
    decryptMessage(message, shift);
    printf("Decrypted message=%s\n", message);
    return 0;
}

 int encryptMessage(char message[], int shift){
    for (int i=0;message[i]!='\0';i++) {
        message[i]=message[i]+shift;
    }
}
 int decryptMessage(char message[], int shift){
    for (int i=0;message[i]!='\0';i++) {
        message[i]=message[i]-shift; 
    }
}


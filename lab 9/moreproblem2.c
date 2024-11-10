#include <stdio.h>
#include <string.h>
int isPalindrome(char word[]) {
    int length = strlen(word);
    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - i - 1]) {
            return 0; 
        }
    }
    return 1;
}
int main() {
    int i;
    char words[5][20];
    
    
    printf("Enter 5 words:\n");
    for(i=0;i<5;i++){
        scanf("%s", words[i]);
    }
    
    
    for(i=0;i<5;i++){
        if (isPalindrome(words[i])) {
            printf("%s= Palindrome\n", words[i]);
        } else
         {
            printf("%s= Not Palindrome\n", words[i]);
        }
    }
    return 0;
}

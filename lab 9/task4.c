#include <stdio.h>
#include <string.h>
int main() {
 
    char words[5][20]={"truck", "car", "bike", "ship", "helicopter"};

    
    char input[20];
    printf("Enter a word to search= ");
    scanf("%s", input);
    
  
    int found=0;
    for (int i=0;i<5;i++) {
        if (strcmp(words[i] , input) == 0) {
            found=1;
            break;
        }
    }
    if(found){
        printf("Found");
    }
     else{
        printf("Not Found");
    }
    
    return 0;
}

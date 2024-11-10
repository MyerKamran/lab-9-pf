#include<stdio.h>
#include<string.h>
int main(){
char source[]="Jelly bean";
char  destination[]= "Sour";
int n;
printf("enter n:");
scanf("%d", &n);
strncat(destination, source, n );
printf("The new string is:%s", destination);
return 0;
}


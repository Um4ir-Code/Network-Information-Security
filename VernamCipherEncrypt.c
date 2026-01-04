#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
char plain_text[40],cipher_text[40],key[40];
int i,j;
printf("Enter Plain Text :");
scanf("%s",&plain_text);
printf("Enter Key Equal To Plain Text :");
scanf("%s",&key);
for (i=0;i<strlen(plain_text);i++){
cipher_text[i]=((plain_text[i]-'A')^(key[i]-'A'))%26+'A';
}
cipher_text[i]='\0';
printf("cipher Text :%s\n",cipher_text);
return 0;
}
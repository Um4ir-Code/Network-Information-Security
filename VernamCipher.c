#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
char plain_text[40],cipher_text[40],key[40],AT_key[40][40],plain[40];
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
for(i=0;i<strlen(plain_text);i++){
for(j=0;j<26;j++){
AT_key[i][j]=j+'A';
}}
printf("Attacker KeY:\n");
for(i=0;i<strlen(plain_text);i++){
for(j=0;j<26;j++){
printf("%c",AT_key[i][j]);
}
printf("\n");
}
printf("\nBrute Force Decrypt:\n");
for(i=0;i<strlen(plain_text);i++){
for(j=0;j<26;j++){
plain[i]=((cipher_text[i]-'A')^(AT_key[i][j]-'A'))%26+'A';
printf("%c",plain[i]);
}
printf("\n");
}
return 0;
}
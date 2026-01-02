#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
int key,i,j,UC;
char plain_text [40];
char plain [40];
char cipher_text [40];
printf("Enter Key:");
scanf("%d",&key);

printf("Enter Plain Text:");
scanf("%s",&plain_text);
for(i=0;i<strlen(plain_text);i++){
if(plain_text[i]>=48 && plain_text[i]<=57){
cipher_text[i]=(plain_text[i]-'0' +key)%10 +'0';
}
else if(plain_text[i]>=97 && plain_text[i]<=122){
cipher_text[i]=(plain_text[i]-'a' +key)%26 +'a';
}
else{
cipher_text[i]=(plain_text[i]-'A'+key) %26 + 'A';
} }
cipher_text[i]='\0';
printf("Cipher Text: %s\n",cipher_text);
printf("Press \n1.Normal Decryption \n2.BruteForce Decryption\n");
scanf("%d",&UC);
//for normal
if(UC==1){
for(i=0;i<strlen(cipher_text);i++){
if(cipher_text[i]>=48 && cipher_text[i]<=57){
plain[i]=((cipher_text[i] -'0' - key)+10) % 10 + '0';
}
else if(cipher_text[i]>=97 && cipher_text[i]<=122){
plain[i]=((cipher_text[i] -'a' - key)+26) % 26 + 'a';
}
else{
plain[i]=((cipher_text[i] -'A' - key)+26) % 26 + 'A';
}}
plain[i]='\0';
printf("decypted: %s",plain);
}

//for brute force
else{
for (j=0;j<26;j++){
for(i=0;i<strlen(cipher_text);i++){
if(cipher_text[i]>=48 && cipher_text[i]<=57){
plain[i]=((cipher_text[i] - '0' - j)+10) % 10 + '0';
}
else if(cipher_text[i]>=97 && cipher_text[i]<=122){
plain[i]=((cipher_text[i] - 'a' - j)+26) % 26 + 'a';
}
else{
plain[i]=((cipher_text[i] - 'A' - j)+26) % 26 + 'A';
} }
plain[i]='\0';
printf("key:%d ",j);
printf("%s\t",plain);
} }
return 0;
}
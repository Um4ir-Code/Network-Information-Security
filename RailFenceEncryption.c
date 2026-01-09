#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
void main(){
char plain[40];;
int key,i,j,row=0,down=0;
char cipher[40][40];
printf("Enter Plain Text:");
scanf("%s",&plain);
printf("Enter Key:");
scanf("%d",&key);
for(i=0;i<key;i++){
for(j=0;j<strlen(plain);j++){
cipher[i][j]='*';
}
}
for(i=0;i<strlen(plain);i++){
cipher[row][i]=plain[i];
if(row ==0){
down=1;
}
else if(row==key-1){
down=0;
}
if(down==1){
row=row+1;
}
else {
row=row-1;
}
}
printf("Cipher Matrix:\n");
for(i=0;i<key;i++){
for(j=0;j<strlen(plain);j++){
printf("%c",cipher[i][j]);
}
printf("\n");
}
printf("\nCipher Text:\n");
for(i=0;i<key;i++){
for(j=0;j<strlen(plain);j++){
if(cipher[i][j]!='*'){
printf("%c",cipher[i][j]);
}}}

}
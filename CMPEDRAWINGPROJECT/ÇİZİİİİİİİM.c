#include <stdio.h>
#include <stdlib.h>

int main()
{
    int org_input,i;
    char char_input, symbol = '/', symbol2 = '\\' , bos = ' ' ;
    scanf(" %d", &org_input);
    scanf(" %c", &char_input);

    int input= org_input;
    for (i = 0; i < input; i ++) {
        printf("%c", bos);
}
    printf("%c%c",symbol, symbol2);
    for (i = 0; i < input; i ++) {
        printf("_");
}
printf("%c%c\n",symbol, symbol2);
int backup_input = input+4;
while (input >=2){

    for (i = 0; i < input-1 ; i ++) {
        printf("%c", bos);}
        printf("%c",symbol);
    for (i = 0; i < backup_input ; i ++) {

        printf("%c", bos);}
    printf("%c\n", symbol2);


    input-=1;
    backup_input +=2 ;
 }
printf("(");
    for (i = 0; i < backup_input ; i ++) {
        printf("%c", bos);}
printf(")\n");
while (input<org_input-1 ){
    for (i = 0; i < input ; i ++) {
        printf("%c", bos);}
    printf("%c",symbol2);
    for (i = 0; i < backup_input-2 ; i ++) {
        printf("%c", bos);}
    printf("%c\n", symbol);
    input+=1;
    backup_input -=2 ;
 }
for (i = 0; i < org_input-1 ; i ++) {
    printf("%c", bos);}
printf("%c",symbol2);
for (i = 0; i < org_input+4; i ++) {
    printf("_");
}
printf("%c",symbol);

   return 0;
}

#include<stdio.h>
#include<string.h>

int main(){
char str[]="Lalit";
char str2[]="Sonar";

int a=strlen(str);
int b=strcmp(str,str2);

char str3[]="bhai";
char str4[10];


printf("The length of string str is=%d \n",a);
printf("\n");
printf("reverse the string str=%s\n",strrev(str));
printf("\n");
printf("Lower case into upper case str2=%s",strupr(str2));
printf("\n");
printf("The comparing value =%d\n",b);
printf("\n");
printf("concentrate str3 in str2=%s\n",strcat(str3,str2));
printf("\n");
printf("copy str3 into str4%s",strcpy(str4,str3));
printf("\n");





    return 0;
}
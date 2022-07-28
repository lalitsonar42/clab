#include<stdio.h>
int main(){
int rowsize,out,in,p;
printf("enter the row size");
scanf("%d",&rowsize);

for(out=1; out<=rowsize; out++)
{
    for(in=rowsize-1; in>=out; in--)
    {
    printf(" ");
    }
    for(p=1; p<=out; p++)
    {
    printf(" * ");
    }
    printf(" \n ");
    
}



    return 0;
}
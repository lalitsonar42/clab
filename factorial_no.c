#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("enter the no");
    scanf("%d",&n);

if(n <=0)
{
    printf( "factor of negativ number exist");
}
else
{
    for(i=1; i<=n; ++i ) {
    fact=fact*i;

    }
printf("factorial of %d\n",fact);
}


    return 0;
}
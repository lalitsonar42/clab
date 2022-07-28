#include<stdio.h>
int main(){
int a,b;

printf("accept 1 no ");
scanf("%d",&a);

printf("accept 2 no ");
scanf("%d",&b);



int *p1=&a;
int *p2=&b;



printf("addition of no %d and %d is %d",*p1,*p2,(*p1+*p2));

    return 0;
}
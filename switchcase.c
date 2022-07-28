#include<stdio.h>
int main()
{
    int a,b,c,n;
    //char ch;
    printf("1.addition \n");
    printf("2.Substriction \n");
    printf("3.Multiply \n");
    printf("4.dividation \n");
    printf("enter your choice:\n");
    scanf("%d",&n);


switch (n)
{
case 1:
printf("Enter the first a=");
scanf("%d",&a);
printf("Enter the second b=");
scanf("%d",&b);
c=a+b;
printf("Adition is :%d",c);
 break;

case 2:
printf("Enter A =");
scanf("%d",&a);
printf("Enter B =");
scanf("%d",&b);

c=a-b;
printf("Substraction is =%d",c);

break;

case 3:
printf("multiplication of two no",&a,&b);
c=a*b;
break;

case 4:
printf("Division of two no",&a,&b);
c=a/b;
break;

default :
 printf("Enter a wrong value\n");

}


 return 0;
}
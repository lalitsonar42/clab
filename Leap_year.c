#include<stdio.h>
int main(){
    int num,num1,year,b;
    printf("chose your choice\n1.find the square and cube of a number\n2.find the year of leap or not\n");
    printf("chose choice:\n");
    scanf("%d",&num);
switch (num)
{
case 1 :
printf("enter the  number:\n");
scanf("%d",&num1);
b=num1*num1;
printf("square of :%d \n",b);
int cube=num1*num1*num1;
printf("cube of:%d\n",cube);


    break;
    

case 2 :

    printf("enter year \n");
    scanf("%d",&year);

    if(year /4==0) || (year /100==0) && (year/400==0)
{
    printf("Leap year.\n",year);
}
else
{
    printf("not leap year",year);
}

break;

}
    return 0;
}
#include<stdio.h>
int main(){
int percent;
printf("enter percent");
scanf("%d",&percent);
if(percent >=70)
{
    printf("Grade A");
}
else if(percent >=60 && percent <=70)
{
    printf("Grade B+");
}
else if(percent >=45 && percent<=60)
{
    printf("Grade B");
}
else if(percent >=35 && percent <=45)
{
    printf("Grade C");
}
else if(percent <=35)
{
    printf("fail");
}

    return 0;
}
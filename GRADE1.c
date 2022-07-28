#include<stdio.h>
int main(){
    int marks;
    printf("enter marks");
    scanf("%d",&marks);

    if(marks >=90)
    {
        printf("Grade A");
    }
else if(marks >80 || marks <=89)
{
    printf("grade B");
}
else if(marks >=70 || marks >=79)
{
    printf("grade C");
}
else if(marks >=60 || marks  <=69)
{
    printf("grade D");
}
else if(marks <=50)
{
    printf("fail");
}
    return 0;
}
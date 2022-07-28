#include<stdio.h>
int main()
{
    int a,b,n;
printf("Whether the user is Student or not \n 1.User is Student\n 2.User is Not Student\n");
scanf("%d",&n);

switch(n)
{
    case 1:
    
{
    printf("Enter the Cost Price:");
    scanf("%d",&b);
    if(b>500)
    {
        printf("Give discount of 10 Percent");
    }
    else
    {
        printf("Give discount of 5 Percent");
    }
        break;
    case 2:
    printf("Enter the Cost Price:");
    scanf("%d",&b);
    if(b>500)
    {
        printf("Give discount of 8 Percent");
    }
    else
    {
        printf("Give discount of 2 Percent");

    }
        break;
}
}
//scanf("%d",&a);
/*if(a<=25)
{
    printf("User is Student\n");
    printf("Enter the Cost Price:");
    scanf("%d",&b);
    if(b>500)
    {
        printf("Give discount of 10 Percent");
    }
    else
    {
        printf("Give discount of 5 Percent");
    }
}
else
{
    printf("User is not a Student\n");
    printf("Enter the Cost Price:");
    scanf("%d",&b);
    if(b>500)
    {
        printf("Give discount of 8 Percent");
    }
    else
    {
        printf("Give discount of 2 Percent");

    }
}*/
return 0;

}
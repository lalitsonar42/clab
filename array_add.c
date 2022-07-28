#include<stdio.h>
int main(){
int size,i;
int a[10],b[10];
int add[10],sub[10],mul[10],div[10];

printf("Enter the size of array \n");
scanf("%d",&size);

printf("enter first array value\n");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}

printf("enter second array value\n");
{
scanf("%d",&b[i]);
}

for(i=0;i<size;i++)
{add[i]=a[i]+b[i];
sub[i]=a[i]+b[i];
mul[i]=a[i]*b[i];
div[i]=a[i]/b[i];

}

printf("add/sub/mul/div");
for(i=0; i<size; i++)
{
printf("%d\n",&add[i]);
printf("%d\n",&sub[i]);
printf("%d\n",&mul[i]);
printf("%d\n",&div[i]);


}
    return 0;
}
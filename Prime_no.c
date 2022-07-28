#include<stdio.h>
int main(){
int a=2,prime,n;
prime=1;

printf("enter the number \n");
scanf("%d",&n);

for(a=2;a<=n;a++){
    if(n%a==0){
        prime=1;
    }

}
if(prime=0){
printf("the no is not prime \n");
}
else{
    printf("the no is prime \n");
}



    return 0;
}
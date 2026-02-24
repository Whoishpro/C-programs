// 6.Enter any number and check given number is div 3 and 5

#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: \n");
    scanf("%d",&a);

    if (a%3==0 && a%5==0)
    {
       printf("Number is divisble by 3 & 5");
    }
    else if (a%3==0)
    {
       printf("Number is divisble by 3 only");
    }
    else if (a%5==0)
    {
       printf("Number is divisble by 5 only");
    }
    else{
        printf("Number is not divisble by 3 & 5");
    }
}

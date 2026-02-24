// 4. Enter any 3nos and print greater number

#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter number 1: \n");
    scanf("%d",&a);

    printf("Enter number 2: \n");
    scanf("%d",&b);

    printf("Enter number 3: \n");
    scanf("%d",&c);

   if (a==0 && b==0 && c==0)
   {
     printf("Number is zero");
   }
   

   else if (a>b && a>c)
    {
       printf("number 1 is greater: ");
    }
    else if (b>a && b>c)
    {
       printf("Number 2 is greater: ");
    }
    else{
        printf("Number 3 is greater: ");
    }
}

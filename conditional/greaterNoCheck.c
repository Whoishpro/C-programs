// Enter 2 number and tell which is Greater

#include<stdio.h>

int main(){

    int num1, num2;

    printf("Enter number 1: \n");
    scanf("%d",&num1);

    printf("Enter number 2: \n");
    scanf("%d",&num2);

    if((num1==0)&&(num2==0)){
        printf("Both the numbers are 0")
    }

    if(num1>num2){
        printf("Number 1 is greater\n");
    }
    else if (num1==num2){
        printf("Both are Equal");
    }
    else{
        printf("Number 2 is greater\n");
    }
}

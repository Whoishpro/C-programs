// Age Check
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    if((age<0)||(age>100)||(age==0)){
        printf("Invalid Age");
    }

    if((age>0)&&(age<100)){
        printf("Your age is: %d",age);
    }
}

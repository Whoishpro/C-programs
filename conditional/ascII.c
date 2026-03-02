//ASSCI values
#include<stdio.h>

int main(){
    char ch;
    printf("Enter a charater: ");
    scanf("%c",&ch);

    printf("ASCII for %c is %d\n",ch,ch);

    if(ch>=65 && ch<=90){
        printf("\nIts is UpperCase");
    }
    else if(ch<=97 && ch<=122){
        printf("\nIts is lowercase");
    }
    else if(ch>=48 && ch<=57){
        printf("\nIts number");
    }
    else{
        printf("Other charater");
    }
}

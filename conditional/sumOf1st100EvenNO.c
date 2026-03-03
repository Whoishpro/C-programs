//sum of first 100 even nos
#include<stdio.h>
int main(){
    int i=1;
    int sum=0;
    do
    {
        if (i%2==0)
        {
           printf("%d\n",sum+=i);
        }
        i++;
        
    } while (i<=100);
}   



//Geometric caluclator of circle
#include<stdio.h>

int main(){
    int ip,r,c;
    float pi=3.14;
    menu:
    printf("1.Area of circle\n2.Cirumfernce of circle\n3.radius of circle\n4.Exit\n");
    scanf("%d",&ip);

    switch (ip)
    {
    case 1:
       printf("Enter radius of circle: ");
       scanf("%d",&r);
       printf("Area of circle is: %f\n",pi*r*r);
        break;

    case 2:
    printf("Enter radius of circle: ");
    scanf("%d",&r);
    printf("Cirumfernce of circle is : %f\n",2*pi*r);
    break;

    case 3:
    printf("Enter value of cirumfernce: ");
    scanf("%d",&c);
    printf("Radius of circle is: %f\n",c/2*pi);
    break;
    
    case 4:
    printf("Thankyou!!");
    return 0;
    
    default:{
        printf("Invalid ip");
    }
        break;
    }
    goto menu;
}

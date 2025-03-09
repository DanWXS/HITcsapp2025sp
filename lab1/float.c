#include<stdio.h>
int main()
{
 float f;
 do
 {
    printf("please input a float number:");
    scanf("%f",&f);
    printf("the float number is:%f\n",f);
 }while( f!=0);
    
 return 0;
 }

#include<stdio.h>
int cal(int n)
{
    if(n==1) return 1;
    if(n==0) return 1;
    else return cal(n-1)+cal(n-2);
}
int main()
{
    int n;
    while(scanf("%d",&n),n)
    {
        printf("%.8f\n",(float)cal(n-1)/cal(n));
    }
}
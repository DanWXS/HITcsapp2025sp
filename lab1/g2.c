#include<stdio.h>
int main()
{
    int n,f[110];
    f[1]=1;
    f[0]=1;
    while(scanf("%d",&n),n)
    {
    for(int i=2;i<=n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    printf("%.8f\n",(float)f[n-1]/f[n]);
    }
}
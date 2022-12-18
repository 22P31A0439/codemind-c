#include<stdio.h>
int main()
{
    int t,s,b,a;
    scanf("%d%d%d",&t,&s,&b);
    a=(2*t*s*b*512)/1024;
    printf("%d KB",a);
}
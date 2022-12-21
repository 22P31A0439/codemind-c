#include<stdio.h>
int main()
{
    float bs,da,hr,gs;
    scanf("%f",&bs);
    if(bs<=10000)
    {
        da=0.8;
        hr=0.2;
    }
    else if(bs<=20000)
    {
        da=0.9;
        hr=0.25;
    }
    else if(bs>20000)
    {
        da=0.95;
        hr=0.3;
    }
    gs=bs*da+bs*hr+bs;
    printf("%0.2f",gs);
}
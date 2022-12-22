#include<stdio.h>
#include<math.h>
int main()
{
	double p,r,t,n,cl,a;
	scanf("%lf%lf%lf%lf",&p,&r,&t,&n);
	a=p*pow(1+r/100,t);
	cl=a-p;
	printf("%0.2lf",cl);
	return 0;
}
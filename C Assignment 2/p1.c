#include<stdio.h>
int main()
{
 long long int m,t,n,p,q,sum,r;
 scanf("%d",&t);
 while(m<t)
{
m=m+1;
scanf("%lld",&n);
p=n%9;
q=n/9;
r=(p*p);
sum=(81*q)+(r);
printf("%lld\n",sum);
}
return 0;
}

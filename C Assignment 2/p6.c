#include<stdio.h>
int main()
{
long long int t,a1,a2,a3,n,i,a,b,c,k;
scanf("%lld",&t);
while(t!=0)
{
scanf("%lld%lld%lld%lld",&a1,&a2,&a3,&n);
a=a1;
b=a2;
c=a3;
if(n>=4)
{
for(i=4;i<=n;i++)
{
k=a+b+c;
a=b;
b=c;
c=k;
}
printf("%lld\n",k);
}
else if(n==1)
printf("%lld\n",a);
else if(n==2)
printf("%lld\n",b);
else if(n==3)
printf("%lld\n",c);
t--;
}
return 0;
}




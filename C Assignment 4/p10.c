#include<stdio.h>
long long int ice(long long int n,long long int k)
{
 if(n<=k)
 return 1;
 else
{
 if(n%2==0)
 return (2*ice(n/2,k));
 else
 return (ice(n/2,k)+ice((n/2+1),k));
}
}
int main()
{
 long long int t,n,k,result;
 scanf("%lld",&t);
 while(t--)
{
 scanf("%d %d",&n,&k);
 result=ice(n,k);
 printf("%lld\n",result);
}
 return 0;
}


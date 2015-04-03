#include<stdio.h>
long long int max(long long int n)
{
  long long int sum;
  sum=n/2+n/3+n/4 ;
  if(sum<=n)
  return n;
  else if(n/4+n/6+n/8<n/2)
  return n/2+n/3+n/4 ;
  else
  {
  return(max(n/3)+max(n/8)+max(n/6)+2*max(n/4));
  }
}
int main()
{
long long int n,result;
while(scanf("%lld",&n)!=EOF)
{
//printf("%lld\n",n);
result=max(n);
printf("%lld\n",result);
}
return 0;
}

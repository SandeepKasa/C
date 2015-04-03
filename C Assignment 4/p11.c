#include<stdio.h>
long long int a[1000][1000];
long long int comb(long long int n , long long int r)
{
	if(r==0 || r==n)
		return 1;
	else if(r==1 || r==n-1)
		return n;
	else if(a[n][r]!=0)
		return a[n][r];
	else
	{
		a[n-1][r]=comb(n-1,r)%1000000007;
		a[n-1][r-1]=comb(n-1,r-1)%1000000007;
		return (a[n-1][r]+a[n-1][r-1])%1000000007;
	}
}
int main()
{
	long long int t,n,r,result;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&r);
		result=((comb(n,r))%1000000007);
		printf("%lld\n",result);
	}
	return 0;
}

#include<stdio.h>
long long int power(long long int a , long long int b)
{
	long long int tmp;
	if(b==0)
		return 1;
	else if(b==1)
		return a;
	else
	{
		tmp=((power(a,b/2))%1000000007);
		if(b%2==0)
		{
			return (tmp*tmp)%1000000007;
		}
		else
			return ((tmp*tmp)%1000000007*(a%1000000007))%1000000007;
	}
}
int main()
{
	long long int t,a,b,result;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&a,&b);

		result=(power(a,b))%1000000007;
		printf("%lld\n",result);
	}
	return 0;
}



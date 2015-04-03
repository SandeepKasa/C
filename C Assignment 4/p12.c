#include<stdio.h>
int main()
{
	long long int a[1000000];
	long long int n,i,sum,s,e,out,x;
	while(scanf("%lld",&n)!=EOF)
	{
		sum=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&x);
			sum=sum+x;
			a[i]=sum;
		}
		while (1)
		{
			scanf("%lld%lld",&s,&e);
			if (s==-1 && e==-1)
				break;
			if (s==1)
		        out=a[e-1];
                        else
			out=a[e-1]-a[s-2];
			printf("%lld\n",out);
		}
	}
	return 0;
}



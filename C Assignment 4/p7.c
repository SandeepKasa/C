#include<stdio.h>
int main()
{
	long long int a[1000000];
	long long int i,n,low,high,mid,m,x,state;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	scanf("%lld",&m);
	for(i=0;i<m;i++)
	{
		scanf("%lld",&x);
		low=0;
		high=n-1;
		state=0;
		while(low<=high)
		{
			mid=(low+high)/2 ;
			if(a[mid]==x)
			{
				printf("%lld\n",mid);
				state=1;
				break;
			}
			else if(x>a[mid])
				low=mid+1;
			else 
				high=mid-1;

			//	printf("hello");
		}
		if(state==0)
		{
			printf("-1\n");
		}
	}
	return 0;
}



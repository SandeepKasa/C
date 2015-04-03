#include<stdio.h>
int main()
{
 long long int a,b,c,k;
	 int m=0,n,i;
		scanf("%d",&n);
		while(m<n)
		{
			m=m+1;
			scanf("%lld",&k);
			if(k==0 || k==1)
				printf("1\n");
			else
			{
				a=1;
					b=1;
					for(i=2;i<=k;i++)
					{
						c=a+b;
							a=b;
							b=c;
					}
			printf("%lld\n",c);
			}
		}
		return 0;
}

		


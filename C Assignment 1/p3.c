#include<stdio.h>
int main()
{
	int N,m=0,t,l,j;
	long long int r;
	scanf("%d",&t);
		while(m<t)
		{
			m=m+1;
			scanf("%lld",&r);
			j=0;
			while(r!=0)
			{
			if(r%10==3)
			j++;
			r/=10;	
			}
			printf("%d\n",j);
		}
	return 0;
}



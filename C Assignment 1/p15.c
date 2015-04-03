#include<stdio.h>
int main()
{
	int t,m=0,n,i;
	double x,p,a;
	scanf("%d",&n);
	while(m<n)
	{
		m=m+1;
			scanf("%lf%d",&p,&t);
			x=p;
		for(i=1;i<=t;i++)
		{
			a=p*(1.12);
			p=a-(x/10);
		}
		printf("%0.6lf\n",p);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int m=0,n,a,b,x,y;
	scanf("%d",&n);
	while(m<n)
	{
		m=m+1;
		scanf("%d%d",&a,&b);
		if(a>b)
		x=a-b;
		else
			x=0;
		if((b%2)==0)
			y=(a-(b/2));
		else
			y=(a-((b+1)/2));

		printf("%d %d\n",x,y);
	}
	return 0;
}

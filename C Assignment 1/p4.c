#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double x1,x2,y1,y2,m,d;
	scanf("%d",&n);
	m=0;
	while(m<n)
	{
		m=m+1;
		scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
		d=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
		printf("%0.1lf\n",d);
	}
	return 0;
}

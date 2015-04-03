#include<stdio.h>
#include<math.h>
int main()
{
	double x1,x2,x3,x4,y1,y2,y3,y4,a,a1,a2,a3;
	int m=0,n;
	scanf("%d",&n);
	while(m<n)
	{
		m=m+1;
	scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	a=fabs (((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)))/2);
	a1=fabs (((x1*(y2-y4))+(x2*(y4-y1))+(x4*(y1-y2)))/2);
	a2=fabs (((x2*(y3-y4))+(x3*(y4-y2))+(x4*(y2-y3)))/2);
	a3=fabs (((x1*(y3-y4))+(x3*(y4-y1))+(x4*(y1-y3)))/2);
	if(fabs(a-(a1+a2+a3))<0.000001)
		printf("YES\n");
	else
		printf("NO\n");
	}
	return 0;
}


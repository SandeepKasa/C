#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,r1,r2,m=0,n,d,x,y,p,q,r;
	scanf("%lf",&n);
	while(m<n)
	{
		m=m+1;
		scanf("%lf%lf%lf",&a,&b,&c);
		d=((b*b)-(4*a*c));
		x=((-1*b)/(2*a));
		y=(sqrt(d)/(2*a));
		if(d>=0)
		{
			r1=(x-y);
			r2=(x+y);
			printf("%0.2lf %0.2lf\n",r1,r2);
		}
		else
		{
			p=(-1*d);
                        q=((-1*b)/(2*a));
			r=(sqrt(p)/(2*a));
	printf("%0.2lf - i%0.2lf,%0.2lf + i%0.2lf\n",q,r,q,r);
		}
	}
	return 0;
}
	
		
	

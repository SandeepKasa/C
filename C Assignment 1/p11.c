#include<stdio.h>
int main()
{
	int r1,r2,r3,r4,r5,v,m=0,n;
		double i,i1,i2,i3,i4,i5,w,x,y,z;
		scanf("%d",&n);
		while(m<n)
		{
			m=m+1;
			scanf("%d%d%d%d%d%d",&r1,&r2,&r3,&r4,&r5,&v);
			x=((r3*r4)+(r4*r5)+(r3*r5));
			y=(r3*r4*r5);
			z=(r1*r2);
			w=(r1+r2);
			i=v/((z/w)+(y/x));
			i1=(r2*i)/w;
			i2=(i-i1);
			i3=(i*r4*r5)/x;
			i4=(i*r3*r5)/x;
			i5=(i-i3-i4);
 	printf("%0.1lf %0.1lf %0.1lf %0.1lf %0.1lf\n",i1,i2,i3,i4,i5);
		}
		return 0;
}
				






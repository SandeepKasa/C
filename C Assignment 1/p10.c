#include<stdio.h>
#include<math.h>
int main()
{
	int m=0,T,t;
	double X,P,R;
	scanf("%d",&T);
	while(m<T)
	{
		m=m+1;
	        scanf("%lf%d%lf",&X,&t,&R);
		P=X/(pow((1+(R/1200)),(12*t)));
		printf("%0.2lf\n",P);
	}
	return 0;
}


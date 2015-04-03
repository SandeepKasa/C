#include<stdio.h>
int main()
{
	unsigned int n,y,t,x1,x2,x;
		scanf("%u",&t);
	        while(t--)
		{
			scanf("%u%u",&n,&y);
			x1=n<<y;
			x2=n>>32-y;
			x=x1|x2;
			printf("%u\n",x);
		}
		return 0;
}

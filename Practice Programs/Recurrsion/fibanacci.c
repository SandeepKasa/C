#include<stdio.h>
int fibc(int n,int a,int b)
{ 
	if(n==0) 
		return a;
        if(n==1)
		return b;
	else
		return fibc(n-1,b,a+b); 
}
int main()
{
	int n,ans,a=1,b=1,sum;
	scanf("%d",&n);
	ans=fibc(n,1,1);
	printf("%d\n",ans);
	return 0;

}

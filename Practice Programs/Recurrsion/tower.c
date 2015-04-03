#include<stdio.h>
int  main()
{
	int n;
	char a,c,b;
	scanf("%d",&n);
	scanf("%c%c%c",&a,&b,&c);
	TOH(n,'a','b','c');
		return 0;
}
void TOH(int n,char a,char b,char c)
{
	if(n==1)
		printf("move disk %d from %c to %c\n",n,a,c);
	else
	{
	TOH(n-1,a,c,b);
		printf("move disk %d from %c to %c\n",n,a,c);
	TOH(n-1,b,a,c);
		printf("move disk %d from %c to %c\n",n,a,c);
	}
}

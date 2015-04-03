#include<stdio.h>
int main()
{
 int n,i,t,k,j,count,flag,v;
char x,y,s,a[1000][1000],d[1000],z;
scanf("%d",&n);
scanf("%c",&s);
while(n--)
{
count=0;
t=1;
x=0;
y=0;
z=0;
flag=0;
scanf("%c",&s);
while(s!='#')
{
	//printf("hloou\n")
	z=s;
	if(s=='\n')
	{
		a[t][0]=x;
		a[t][1]=y;
		t++;

	}
	y=x;
	x=z;
	scanf("%c",&s);
}
a[t][0]=x;
a[t][1]=y;
//printf("the t value for 2nd case is 5 %d\n",t);
for(v=0;v<=t;v++)
{
d[v]=0;
}
d[1]='A';
for(k=2;k<=t;k++)
{
for(j=k-1;j>=1;j--)
{	
	if(a[k][0]==a[j][0] && a[k][1]==a[j][1])
	{
		d[k]=d[j];
		flag=1;
		break;
	}
}
	if(flag==0)
	{
		count++;
		d[k]='A'+count;
	}
	flag=0;

}
//printf("%d\n",t);
for(i=1;i<=t;i++)
{

	printf("%c",d[i]);
}
printf("\n");
scanf("%c",&s);
}
return 0;
}
 





















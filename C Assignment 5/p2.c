#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned long long int N,q,i,b,j,count,flag=-1,w,z;
	char a;
	scanf("%llu",&N);
	char *c;
	c=(char* )malloc(sizeof(char)*N);
	scanf("%s",c);
	getchar();
	scanf("%llu",&q);
	for(i=0;i<q;i++)
	{
		getchar();
		scanf("%c%llu",&a,&b);
		if(b<N)
		{
			count=0;
			if(a=='r')
				c[b]='0';
			else if(a=='s')
				c[b]='1';
			else if(a=='t')
			{
				if(c[b]=='0')
					c[b]='1';
				else
					c[b]='0';
			}
			else if(a=='0')
			{
				while(1)
				{
					if(c[b+1]=='0')
						count++;
					else
						break;
					b++;
				}
				printf("%llu\n",count);
			}
			else if(a=='1')
			{
				while(2)
				{
					if(c[b+1]=='1')
						count++;
					else
						break;
					b++;
				}
				printf("%llu\n",count);
			}
			else
			{
				flag=b;
				z=1;
				w=0;
				for(j=0;j<64;j++)
				{
					if(flag<N)
					{
						w=w+((c[b+j]-'0')*z);
						// printf("%llu\n",w);
						z=z*2;
						flag++;
					}
					else
						break;
				}
				printf("%llu\n",w);
			}
		}
	}
	return 0;
}





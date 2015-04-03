#include<stdio.h>
#include<string.h>
int len=0;
char ch[10000];
int count,s=0;
char large[10000];
int main()
{
	int i,j,k,str,l,as,asci=0;
	int ch,pal;
	scanf("%c",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		for(j=i+1;ch[j]='\0';j++)
		{
			count=0;
			pal=1;
			as=0;
			for(k=i,l=j;k<=j;k++,l--)
			{
				as=as+(int)ch[k];
				if(ch[k]==ch[l])
					count++;
				else
				{
					pal=0;
					break;
				}
			}
			if(pal==1)
			{
				if(s<=count)
				{
					if(count==s)
					{
						if(asci>as)
						{
							asci=as;
							s=count;
							for(k=i,l=0;k<=j;k++)
								large[l++]=ch[k];
						}
					}
					else
					{
						asci=as;
						s=count;
						for(k=i,l=0;k<=j;k++)
						large[l++]=ch[k];
					}
				}
			}
		}
	}
	printf("%s",large);
	return 0;
}

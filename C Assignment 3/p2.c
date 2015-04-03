#include<stdio.h>
#include<string.h>
int main()
{
	int t,a,b,c,d,f,p,m,n,i,j,k,e,q;
	scanf("%d",&t);
	while(t>0)
  {
		char s[1000],r[21][21];
                int l=0;
                a=1,b=0,c=0,d=0;
		e=0,f=0,l=0;
		scanf("%s%d%d%d",s,&m,&n,&p);
		e=m*n-p;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				r[i][j]=s[i*n+j];
			}
		}
                a=1,b=0,c=0,d=0;
                l=0;
		while(e>0)
		{
			if(a==1)
			{
				for(k=l;k<n-l && e>0;k++)
				{
					s[f]=r[l][k];
					f++;
					e--;
				}
	              //printf("%d%d\n",a,b);
	                 a=0;
                         b=1;
			}
		        if (b==1)
			{
				for(k=l+1;k<m-l && e>0;k++)
				{
					s[f]=r[k][n-l-1];
					f++;
					e--;
				}
//printf("%d%d\n",b,c);
				c=1;
                                b=0;
			}
			if (c==1)
			{
				for(k=n-l-2;k>=l && e>0;k--)
				{
					s[f]=r[m-l-1][k];
					f++;
					e--;
				}
//printf("%d%d\n",c,d);
				c=0;
                                d=1;
			}
			 if (d==1)
			{
				for(k=m-l-2;k>l && e>0;k--)
				{
					s[f]=r[k][l];
					f++;
					e--;
				}
				l++;
//printf("%d%d\n",d,a);
			d=0;
                         a=1;
			}
		}
		for(i=0;i<f;i++)
		{
			printf("%c",s[i]);
		}
		printf("\n");
        t--;
}
	return 0;
}

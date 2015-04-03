#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char x[100];
int main()
{
   int t;
   int i=0,j=0,count=1,k,l,z,p;
    char s[1000][1000],c,ch='A',m,n,n1,m1;
scanf("%d",&t);
scanf("%c",&c);
     while(t>0)
{
	i=0;
        j=0;
        ch='A';
	count=1;
    while(1)
    {
        scanf("%c",&c);
        if(c=='#')
        {
            break;
        }
        else if(c=='\n')
        {
            count++;
            i++;
            j=0;
        }
        else
        {
            s[i][j++]=c;
        }
   } 


        for(k=0;k<count;k++)
        {
	    
            m=strlen(s[k])-1;
            n=m-1;
            for(z=k-1;z>=0;z--)
            {
                m1=strlen(s[z])-1;
                n1=m1-1;
                if(s[k][n]==s[z][n1] &&s[k][m]==s[z][m1])
                    {
                       // printf("%d\n",k);
                       k++;
                        if(k==count)
                            break;
                            else
                            {
                                z=k;
                                m=strlen(s[k])-1;
                                n=m-1;
                            }
                    }
            }
                            if(k==count)
                                break;
            x[k]=ch++;

            for(l=k+1;l<count;l++)
            {
                m1=strlen(s[l])-1;
                n1=m1-1;
                if(s[k][n]==s[l][n1] &&s[k][m]==s[l][m1])
                {
                    x[l]=x[k];
                }

            }
        }
            printf("%s\n",x);
t--;
}
    return 0;
}

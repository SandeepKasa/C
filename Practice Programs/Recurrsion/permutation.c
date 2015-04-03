#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	int n;
	scanf("%s",s);
	n=strlen(s);
	permute(s,0,n);
	return 0;
}
void permute(char s[],int i,int n)
{
	int j;
	if(i==n)
	{
	 for(j=0;j<n;j++)
	 {
		 printf("%c",s[j]);
	 }
	         printf("\n");
		 return;
	 }

		for(j=i;j<n;j++)
		{
			s[i]=(s[j]+s[i])-(s[j]=s[i]);
			permute(s,i+1,n);
                        s[i]=(s[j]+s[i])-(s[j]=s[i]);
		}
}
	

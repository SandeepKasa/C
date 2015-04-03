#include<stdio.h>
int main()
{
	char ch;
	int m=0,n;
	scanf("%d",&n);
        while(m<n)
	{
		m=m+1;
		scanf("%c",&ch);
		if(ch==10 || ch==32)
		scanf("%c",&ch);       	
		if(ch>='0' && ch<='9')
			printf("NUMERAL\n");
		else if(ch>='A' && ch<='Z')
			printf("UPPER CASE CHARACTER\n");
                else if(ch>='a' && ch<='z')
			printf("LOWER CASE CHARACTER\n");
		else printf("NON-ALPHANUMERAL\n");
	}
	return 0;
}
        



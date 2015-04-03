#include<stdio.h>
int solve(int a[][50],int );
int issafe(int a[][50],int ,int);
 int main()
{
	int k,l,m,N,col=0,c,d;
	int a[50][50]={0};
	scanf("%d",&N);
	k=solve(a,0);
	for(l=0;l<N;l++)
	{
		for(m=0;m<N;m++)
			printf("%d",a[l][m]);
		printf("\n");
	}
	return 0;
}
int issafe(int a[][50],int row,int col)
{
	int i,j,N;
	for(i=0;i<col;i++)
	{
		if( a[row][i]==1);
		{
			return 0;
		}
	}
	j=0;
	for(i=col-1;i>=0;i--)
	{
		if( a[row-1-j][i]==1 || a[row+1-j][i]==1)
		{
			return 0;
		}
		j++;
	}
	return 1;
}

int solve(int a[][50], int col)
{
	int row;
	if(col>=8)
		return 1;
	else
	{
		for(row=0;row<8;row++)
			if (issafe(a,row,col))
			{
				a[row][col]=1;
				if(solve(a,col+1))
				{return 1;}
				a[row][col]=0;
			}
	}
	return 0;
}




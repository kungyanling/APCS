#include <iostream>
using namespace std;
//M:up down front back left right

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int Q[n][6];
	for(int i=0;i<n;i++)
	{
		Q[i][0]=1;
		Q[i][1]=6;
		Q[i][2]=4;
		Q[i][3]=3;
		Q[i][4]=5;
		Q[i][5]=2;
	}
	int data[m][2];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%d",&data[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		if(data[i][0]>0&&data[i][1]>0)
		{
			for(int j=0;j<6;j++)
			{
				int tem=Q[data[i][0]-1][j];
			    Q[data[i][0]-1][j]=Q[data[i][1]-1][j];
			    Q[data[i][1]-1][j]=tem;
			}
		}
		if(data[i][1]==-1)
		{
			int tmp=Q[data[i][0]-1][2];
	        Q[data[i][0]-1][2]=Q[data[i][0]-1][0];
	        Q[data[i][0]-1][0]=Q[data[i][0]-1][3];
	        Q[data[i][0]-1][3]=Q[data[i][0]-1][1];
	        Q[data[i][0]-1][1]=tmp;
		}
		if(data[i][1]==-2)
		{
			int tmp=Q[data[i][0]-1][2];
	        Q[data[i][0]-1][2]=Q[data[i][0]-1][0];
	        Q[data[i][0]-1][0]=Q[data[i][0]-1][4];
	        Q[data[i][0]-1][4]=Q[data[i][0]-1][1];
	        Q[data[i][0]-1][1]=tmp;
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",Q[i][0]);
	}
	return 0;
} 

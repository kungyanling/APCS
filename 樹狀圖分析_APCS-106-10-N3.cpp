#include <iostream>
using namespace std;

int max_h=0;
int HT=0;
int root;

int h(int data[100000][1000],int node)
{
	int temh=0,H=0;
	int index=node-1;
	if(data[index][1]!=0)
	{
		for(int i=0;i<data[index][1];i++)
		{
			temh=h(data,data[index][i+2])+1;
			H=max(temh,H);
		}
		return H;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int N;
	scanf("%d",&N);
	int data[N][1000];
	for(int i=0;i<N;i++)
	{
		data[i][0]=i+1;
		scanf("%d",&data[i][1]);
		for(int j=0;j<data[i][1];j++)
		{
			scanf("%d",&data[i][j+2]);
		}
	}
	for(int i=0;i<N;i++)
	{
		int hi=h(data,i+1);
		if(hi>=max_h)
		{
			max_h=hi;
			root=i+1;
		}
		HT+=hi;
	}
	printf("%d\n",root);
	printf("%d\n",HT);
	return 0;
} 

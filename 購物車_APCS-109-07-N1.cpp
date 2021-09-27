#include <iostream> 
using namespace std;

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int n;
	scanf("%d",&n);
	int data[n][1000];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<1000;j++)
		{
			scanf("%d",&data[i][j]);
			if(data[i][j]==0)
			{
				break;
			}
		}
	}
	int G=0,F=0,TT=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<100000;j++)
		{
			if(data[i][j]==a)
			{
				G++;
			}
			else if(data[i][j]==-a)
			{
				G--;
			}
			if(data[i][j]==b)
			{
				F++;
			}
			else if(data[i][j]==-b)
			{
				F--;
			}
			if(data[i][j]==0)
			{
				break;
			}
		}
		if(G!=0&&F!=0)
		{
			TT++;
		}
		G=0;
		F=0;
	}
	printf("%d\n",TT);
	return 0;
}

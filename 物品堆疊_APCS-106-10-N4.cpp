#include <iostream>
using namespace std;

struct item
{
	int W;
	int F;
};

int main()
{
	int N;
	scanf("%d",&N);
	item items[N];
	for(int i=0;i<N;i++)
	{
		scanf("%d",&items[i].W);
	}
	for(int i=0;i<N;i++)
	{
		scanf("%d",&items[i].F);
	}
	for(int i=0;i<N-1;i++)
	{
		for(int j=0;j<N-1-i;j++)
		{
			if(items[j].W*items[j+1].F>items[j+1].W*items[j].F)
			{
				item tem;
				tem=items[j+1];
				items[j+1]=items[j];
				items[j]=tem;
			}
		}
	}
	int ans=0;
	int ws=0;
	for(int i=0;i<N-1;i++)
	{
		ws+=items[i].W;
		ans+= ws*items[i+1].F;
	}
	printf("%d\n",ans);
	return 0;
}
 

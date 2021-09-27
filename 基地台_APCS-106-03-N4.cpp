#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N,K;
	scanf("%d",&N);
	scanf("%d",&K);
	int data[N];
	int room1[K];
	int room2[K];
	int ans;
	for(int i=0;i<K;i++)
	{
		 room1[i]=0;
	}
	for(int i=0;i<K;i++)
	{
		 room2[i]=1000000000;
	}
	for(int i=0;i<N;i++)
	{
		scanf("%d",&data[i]); 
	}
	sort(data,data+N);
	int A=((data[N-1]-data[0])/K)+1;
	int j=1;
	for(int i=0;i<N;i++)
	{
		if(data[i]<j*A+data[0])//問題點!!!在這裡!!! 
		{
		    if(data[i]<room2[j-1])
		    {
		    	room2[j-1]=data[i];
		    	//printf("room2:%d\n",room2[j-1]);
			}
			if(data[i]-room2[j-1]>=room1[j-1])
			{
			    room1[j-1]=data[i]-room2[j-1];
			    //printf("room1:%d\n",room1[j-1]);
			}
		}
		else 
		{
			j++;
			i--;
		}
	}
	int max2=room1[0];
	for(int i=0;i<K;i++)
	{
		if(room1[i]>max2)
		{
			max2=room1[i];
		}
	}
	printf("%d\n",max2);

	return 0;
} 

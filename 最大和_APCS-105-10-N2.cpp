#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int N, M, a, b=0;
  int k=0 ,l=0,t=0,g=-1;
  scanf("%d %d",&N,&M); //這個一定要在這裡，不然data存的值會跑掉! 
  int data[N][M];
  while (k<N)
  {
    while(l<M)
    {
     scanf("%d",&data[k][l]);
     l++;
	}
    l=0;
    k++;
  }
  printf("\n");
  for(int i=0;i<N;i++)
  {
     sort(data[i],data[i]+M);
  }
  for(int j=0;j<N;j++)
  {
     a=data[j][M-1];
     b=a+b;
  }
  printf("%d\n",b);
  for(int i=0;i<N-1;i++)
  {
  	if(b%data[i][M-1]==0)
  	{
  		printf("%d ",data[i][M-1]);
	}
	else 
	{
		t++;
	}
  }
  if(b%data[N-1][M-1]==0)
  {
  	printf("%d",data[N-1][M-1]);
  }
  else
  {
  	t++;
  }
  if(t==N)
  {
  	printf("%d",g);
  }
  return 0;
}

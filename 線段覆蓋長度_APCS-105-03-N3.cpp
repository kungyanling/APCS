#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n,c=0,d,e,f,counter=0;
  scanf("%d",&n);
  //cin>>n;
  int ace[2*n],ace2[2*n];
  for(int i=0;i<2*n;i++)
  {
      scanf("%d",&ace[i]);
      //cin>>ace[i];
      ace2[i]=ace[i];
  }
  sort(ace2,ace2+2*n);
  d=ace2[2*n-1];
  char arr[d+1];
  for(int i=0;i<(d+1);i++)
  {
    arr[i]=0;
  }
  for(int i=0;i<2*n;i++)
  {
    e=ace[i];
    f=ace[i+1];
    while(e<f)
    {
      arr[e]='1';
      e++;
    }
    i++;
  }
  for(int i=0;i<(d+1);i++)
  {
    if(arr[i]=='1')
    {
      counter++;
    }
  }
  printf("%d",counter);
  //cout<<counter;
  return 0;
}

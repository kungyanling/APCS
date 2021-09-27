#include <iostream>
using namespace std;
#define True  1 //定義 
#define False 0 //定義

int main()
{
    int N,T,Y=0;
    scanf("%d",&N);
    int fs[N],used[N];
    for(int i=0;i<N;i++)
    {
       used[i]=False; 
    }
    for(int i=0;i<N;i++)
    {
       scanf("%d",&fs[i]);
    }
    for(int i=0;i<N;i++)
    {
       if(used[i]==False)
       {
           used[i]=True;
           T=fs[i];
           while(fs[T]!=i)
           {
               used[T]=True;
               T=fs[T];
           }
           used[T]=True;
           Y++;
       }
    }
    printf("%d",Y);
    return 0;
}

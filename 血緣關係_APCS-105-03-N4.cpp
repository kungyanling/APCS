#include <iostream>
#include <vector>
using namespace std;
#define N 100000

vector <int> data[N]; //拜託一定要放在這裡!!!不然程式會不能跑，直接傳值回來!! 
int ans=0;
int relation(int person)
{
	int max1=0;
	int max2=0;
	int result=0;
	if(data[person].size()==0)
	{
		return 0;
	}
	if(data[person].size()==1)
	{
		return (relation(data[person][0])+1);
	}
	else
	{
		for(int i=0;i<data[person].size();i++)
		{
			result=(relation(data[person][i])+1);
			if(i==0)
			{
				max1=result;
			}
			else //第二個小孩以後 
			{
			    if(result>=max1)
			    {
			        max2=max1;
					max1=result;
			    }
				else
				{
					max2=result;
				}
			}
		}
		ans=max(ans,max1+max2);
		return max1;
	}
}
int main()
{
	int n;
	while(cin>>n) //這裡如果用scanf的話要寫:while(scanf("%d",&n)!=EOF)不然會TLE(即超過執行時間) 
	{
		int tem1,tem2,root;
        bool ischild[n]={false}; 
	    for(int i=1;i<n;i++)
	    {
		    scanf("%d %d",&tem1,&tem2);
		    data[tem1].push_back(tem2);
		    ischild[tem2]=true;
	    }
	    for(int i=0;i<n;i++)
	    {
		    if(ischild[i]==false)
		    {
			    root=i;
			    break; //找到就走，減少程式運作時間 
	 	    }
	    }
	    int retdata=relation(root);
	    ans=max(retdata,ans);
	    printf("%d\n",ans); 
	    for(int i=0;i<n;i++)
	    {
		    data[i].clear();
	    } 
	    ans=0;
	}                                                 
	return 0;
} 

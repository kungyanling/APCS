#include <iostream>
#include <vector>
using namespace std;
#define N 100000

vector <int> data[N]; //���U�@�w�n��b�o��!!!���M�{���|����]�A�����ǭȦ^��!! 
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
			else //�ĤG�Ӥp�ĥH�� 
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
	while(cin>>n) //�o�̦p�G��scanf���ܭn�g:while(scanf("%d",&n)!=EOF)���M�|TLE(�Y�W�L����ɶ�) 
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
			    break; //���N���A��ֵ{���B�@�ɶ� 
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

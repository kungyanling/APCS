#include<iostream>
#include<vector>
using namespace std;

vector<int>person;
int main()
{
	int N,M,K,ans;
	scanf("%d %d %d",&N,&M,&K);
	for(int i=1;i<=N;i++)
	{
		person.push_back(i);
	}
	int now=0;
	for(int i=0;i<K;i++)
	{
		now=(now+(M-1))%person.size();
		person.erase(person.begin()+now);
	}
	if(person.size()==1)
	{
		ans=person[0];
	}
	else if(now==person.size()) //刪掉的最後一個值，恰為最後一項 
	     {
	     	ans=person[0]; 
		 }
		 else
		 {
		 	ans=person[now];
		 }
	printf("%d",ans);
	return 0;
} 

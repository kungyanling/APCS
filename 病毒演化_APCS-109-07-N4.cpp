#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int dna[n][2];
	char data[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%d",&dna[i][j]);
		}
		scanf("%s",&data[i]);
	}
	for(int i=0;i<n;i++)
	{
		char RNA1[m]="";
		char RNA2[m]="";
  	    strcat(RNA1,data[dna[i][1]-1]);//始祖 
  	    strcat(RNA2,data[dna[i][0]-1]);//演化 
		if(strcmp(RNA1,RNA2)!=0)
		{
			//除錯printf("hi!\n");
			for(int j=0;j<m;j++)
			{
				if(data[i][j]=='@')
				{
					data[i][j]=data[dna[i][1]-1][j]; 
				}
				else if(data[dna[i][1]-1][j]=='@')
				{
					data[dna[i][1]-1][j]=data[i][j];
				} 
			}
		}
	}
	int dis[n];
	for(int i=0;i<n;i++)
	{
		dis[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		char RNA1[m]="";
		char RNA2[m]="";
  	    strcat(RNA1,data[dna[i][1]-1]);//始祖 
  	    strcat(RNA2,data[dna[i][0]-1]);//演化
  	    if(strcmp(RNA1,RNA2)==0)
		{
			dis[i]+=0;
		}
		else if(strcmp(RNA1,RNA2)!=0)
		{
			for(int j=0;j<m;j++)
			{
				if(data[i][j]!=data[dna[i][1]-1][j])
				{
					dis[i]+=1; 
				}
			}
		}
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		ans+=dis[i];
	} 
  	printf("%d",ans);
	return 0;
}

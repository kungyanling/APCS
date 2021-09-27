#include <stdio.h>
//Zerojudge和codeblocks都不能用#include<iostream>配上C語言，他的編譯器會出問題
//using namespace std; 純C語言不用加

int arr[100][100];
int tem[100][100];
int R,C,M;

int main()
{
	while(scanf("%d",&R)!=EOF)
	{
		scanf("%d %d",&C,&M);
		/*int arr[R][C]; //不論用Dev C++或是Codeblocks放在這裡值都會錯!!
		int tem[R][C];*/
		int TODO[M];
		for(int i=0;i<R;i++)
		{
			for(int j=0;j<C;j++)
			{
				scanf("%d",&arr[i][j]);
				tem[i][j]=arr[i][j];
			}
		}
		for(int i=0;i<M;i++)
		{
			scanf("%d",&TODO[i]);
		}
		for(int k=M-1;k>=0;k--)
		{
			if(TODO[k]==0) //矩陣的左旋轉
			{
				//memcpy(tem,arr,sizeof(tem));  含在#include<iostream>中，若是用純C語言就不能使用此函數因為#include<stdio.h>中沒有此函數 
				for(int i=0;i<R;i++)
		        {
			        for(int j=0;j<C;j++)
			        {
				        tem[i][j]=arr[i][j];//自己寫的memcpy
			        }
                }
				int t=R;
				R=C;
				C=t;
				for(int i=0;i<R;i++)
		        {
			        for(int j=0;j<C;j++)
			        {
			        	arr[i][j]=tem[j][R-i-1];
			        }
			    }
		    }
		    else //TODO[k]值為1 即翻轉
		    {
		    	//memcpy(tem,arr,sizeof(tem)); Zerojudge和codeblocks都不能用(許是編譯器的問題，編譯器他不承認#include<iostream>中有此函數，但Dev C++就沒這個問題)
		    	for(int i=0;i<R;i++)
		        {
                    for(int j=0;j<C;j++)
                    {
                        tem[i][j]=arr[i][j];
                    }
		        }
		    	for(int i=0;i<R;i++)
		        {
			        for(int j=0;j<C;j++)
			        {
			        	arr[i][j]=tem[R-i-1][j];
			        }
			    }
			}
		}
		printf("%d %d\n",R,C);
		for(int i=0;i<R;i++)
		{
			for(int j=0;j<C;j++)
			{
				if(j<C-1)
				{
					printf("%d ",arr[i][j]);
				}
				else //j==C-1 即每一列的最後一個數字
				{
					printf("%d\n",arr[i][j]);
				}
			}
		}
    }
    return 0;
}

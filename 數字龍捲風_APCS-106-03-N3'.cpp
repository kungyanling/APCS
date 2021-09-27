#include <iostream>
using namespace std;

int main()
{
	int N,G;
	scanf("%d",&N);
	scanf("%d",&G);
	int data[N][N];
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			scanf("%d",&data[i][j]);
		}
	}
	int a=N/2,A=N/2;
	printf("%d",data[a][A]);
	int c=0;//紀錄處理次數 
	int cout=1;//控制重複次數 
	while(c<(N*2)-1)
	{
		for(int i=0;i<cout;i++)
		{
			if(G%4==0)
		    {
			    A=A-1; 
			    printf("%d",data[a][A]);
		    }
		    else if(G%4==1)
		        {
		    	    a=a-1;;
		    	    printf("%d",data[a][A]);
			    }
		    else if(G%4==2)
		        {
		    	    A=A+1;
		    	    printf("%d",data[a][A]);
			    }
		    else if(G%4==3)
		        {
		    	    a=a+1;
		    	    printf("%d",data[a][A]);
			    }
		}
		G++;
		c++;
		if(c!=(N*2)-2)
		{
			if(c%2==0)
		    {
			    cout++;
		    }
		}
    }
	printf("\n");
	return 0;
} 

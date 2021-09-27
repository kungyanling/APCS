#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
	    int score[n];
	    for(int i=0;i<n;i++)
	    {
		    scanf("%d",&score[i]);
	    }
	    sort(score,score+n);
	    for(int i=0;i<n;i++)
	    {
		    if(i<n-1)
		    {
			    printf("%d ",score[i]);
		    }
		    else
		    {
			    printf("%d\n",score[i]);
		    }
	    }
	    if(score[0]>=60)
		{
			printf("best case\n");
		}
	    for(int i=n-1;i>=0;i--)
	    {
		    if(score[i]<60)
		    {
		     	printf("%d\n",score[i]);
		     	break;
			}
	    }
	    if(score[n-1]<60)
		    {
			    printf("worst case\n");
			}
	    for (int i=0;i<n;i++)
	    {
		    if(score[i]>=60)
		    {
			    printf("%d\n",score[i]);
		        break;
		    }
	    }
		for(int i=0;i<n;i++)
	    {
		    score[i]=0;
	    }
	}
	return 0;
}

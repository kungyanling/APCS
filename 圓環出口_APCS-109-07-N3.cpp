#include <iostream>
using namespace std;

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int p[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	int q[m];
	for(int i=0;i<m;i++)
	{
		scanf("%d",&q[i]);
	}
	int place=0;
	for(int i=0;i<m;i++)
	{
		int a=0;
		for(int j=place;j<n;j++)
		{
			if(a<q[i])
			{
				a+=p[j];
				place=j;
				if(a<q[i]&&j==n-1)
				{
					//�p�G�o��gplace=0�A�|�X���A�]����o�Ӱj��ӻ��p�ƪ��Oj�A������j���ȡAj���O����n-1 
					j=-1;//�����I�ڰڰڰڰڰڰ�!!!  
				}
				if(a>=q[i]&&j!=n-1)
				{
					place=j+1;
					break;
				}
				if(a>=q[i]&&j==n-1)
				{
					place=0;
					break;
				}
			}
		}
	}
	printf("%d",place);
	return 0;
} 

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int data[3];
	while(scanf("%d",&data[0])!=EOF)
	{
		int a,b,c;
		for(int i=1;i<3;i++)
		{
			scanf("%d",&data[i]);
		}
		sort(data,data+3);
		a=data[0];
		b=data[1];
		c=data[2];
		cout<<a<<" "<<b<<" "<<c<<endl;
		if(a+b<=c)
		{
			printf("No\n");
		}
		else if((a*a+b*b)<c*c)
		     {
		     	printf("Obtuse\n");
			 }
			 else if((a*a+b*b)==c*c)
			      {
			      	printf("Right\n");
				  }
				  else //�]�����D�Ҧ������G�u���|�ءA�e���w�g�ư��F�T�ءA�ѤU���N�u�|�O�̫�@�ءA�G���ݦA�[����P�_ 
				  {
				  	printf("Acute\n");
				  }
	}
	return 0;
} 

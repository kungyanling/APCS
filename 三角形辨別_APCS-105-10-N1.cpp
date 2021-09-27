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
				  else //因為本題所有的結果只有四種，前面已經排除了三種，剩下的就只會是最後一種，故不需再加條件判斷 
				  {
				  	printf("Acute\n");
				  }
	}
	return 0;
} 

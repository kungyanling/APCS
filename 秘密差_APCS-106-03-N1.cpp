#include <iostream>
#include <string.h> //�i��strlen��� 
#include <stdlib.h> //�i��abs��� 
using namespace std;

int main()
{
	int a=0,b=0;
	char data[1000];
	scanf("%s",&data);
	int n=strlen(data);
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
		    a=(data[i]-'0')+a;	
		}
		else //i%2!=0
		{
			b=(data[i]-'0')+b;
		}
	}
	printf("%d\n",abs(a-b));
	return 0;
} 

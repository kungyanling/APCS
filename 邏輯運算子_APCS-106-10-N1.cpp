#include <iostream>
using namespace std;
//&&�O�B��A&�O�P�_!!!! 
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a==0&b==0&c==0) //","�OOR���N��A"&"�~�OAND���N�� 
	{
		printf("AND\n");
		printf("OR\n");
		printf("XOR\n");
	}
	if(a==0&b!=0)
	{
	    
	    if(c==0)
	    {
	    	printf("AND\n");
		}
		else //c==1
		{
			printf("OR\n");
			printf("XOR\n");
		}
	}
	if(b==0&a!=0)
	{
	    
	    if(c==0)
	    {
	    	printf("AND\n");
		}
		else //c==1
		{
			printf("OR\n");
			printf("XOR\n");
		}
	}
	if(a!=0&b!=0)
	{
		if(c==0)
		{
			printf("XOR\n");
		}
		else //c==1
		{
			printf("AND\n");
			printf("OR\n");
		}
	}
	if(a==0&b==0&c==1)
	{
		printf("IMPOSSIBLE\n");
	}
 	return 0;	 
}

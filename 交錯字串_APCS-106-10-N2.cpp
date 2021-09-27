#include <iostream>
#include <string.h>
using namespace std;

int a=0,b=0;
void co1()
{
	a++;
	//printf("va:%d\n",a);
}

void co2()
{
	b++;
	//printf("vb:%d\n",b);
}
int main()
{
	char s[100000];
	int k;
	scanf("%d",&k);
	scanf("%s",&s);
	int n=strlen(s);
	int cout[n];
	//printf("n:%d\n",n);
	for(int i=0;i<n;i++)
	{
		if( (s[i]>=0x41)&&(s[i]<=0x5A) )
		{
			cout[i]=1;
		}
		else 
		{
			cout[i]=0;
		}	
	}
	int max1=0,max2=0;
	for(int i=0;i<n;i++)
	{
		if(cout[i]==1)
		{
			b=0;
			co1();
			i++;
			for(int j=1;j<k;j++)
		    {
		    	if(cout[i]==1&&i!=n)
		    	{
		    		co1();
		    		i++;
				}
				else
				{
					i--;
					a=0;
					break;
				}
		    }
		    if(a>=k)
		    {
		    	max1=a;
			}
		    /*printf("max1:%d\n",max1);
			printf("m1a:%d\n",a);*/	
		    if(a!=0)
		    {
			    for(int j=0;j<k;j++)
		        {
		    	    if(cout[i]==0&&i!=n)
		    	    {
		    		    co1();
		    		    i++;
		    		    if(j==k-1)
				        {
				    	    i--;
					    }
				    }
				    else
				    {
				    	i=i-k;
					    a=0;
					    break;
				    }
		        }
		        if(a>=k)
		        {
		    	    max1=a;
			    }
		        /*printf("max1:%d\n",max1);
		        printf("m2a:%d\n",a);*/
			}
	    }
		else //cout[i]==0
		{
			a=0;
			co2();
			i++;
			for(int j=1;j<k;j++)
		    {
		    	if(cout[i]==0&&i!=n)
		    	{
		    		co2();
		    		i++;
				}
				else
				{
					i--;
					b=0;
					break;
				}
		    }
		    if(b>=k)
		    {
		    	max2=b;
			}
		    /*printf("max2:%d\n",max2);
		    printf("m1b:%d\n",b);*/
		    if(b!=0)
		    {
			    for(int j=0;j<k;j++)
		        {
		    	    if(cout[i]==1&&i!=n)
		    	    {
		    		    co2();
		    		    i++;
		    		    if(j==k-1)
				        {
				    	    i--;
					    }
				    }
				    else
				    {
				    	i=i-k;
					    b=0;
					    break;
				    }
		        }
		        if(b>=k)
		        {
		        	max2=b;
				}
		        /*printf("max2:%d\n",max2);
		        printf("m2b:%d\n",b);*/
			}
		}
	}
	int ans=max(max1,max2);
	printf("%d\n",ans);
	return 0;
}

#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

vector<int>basevec;
int score=0;
void updatebase(int n)
{
  basevec.insert(basevec.begin(),0);
  for(int i=0;i<basevec.size();i++)
  {
  	basevec[i]+=n;
  }
  for(int i=(basevec.size()-1);i>=0;i--)
  {
  	if(basevec[i]>=4)
  	{
  		score+=1;
  		basevec.erase(basevec.begin()+i);
	}
  }
}
int main() 
{
  int hitn[9],outn;
  char data[9][6][3];//����J���F�謰�r��A�@�Ӧr�����@�Ӧ�m�A�G��3
  for(int i=0;i<9;i++)
  {
    scanf("%d",&hitn[i]);
    for(int j=0;j<hitn[i];j++)
    {
      scanf("%s",&data[i][j]);
    }
  }
  scanf("%d",&outn);
  int out=0;
  while(out<outn)
  {
  	for(int j=0;j<5;j++)
  	{
  		if(out==outn)
  		{
  			break;
		}
  		for(int i=0;i<9;i++)
  		{
  			char hit[3]="";
  			strcat(hit,data[i][j]);
  			if((strcmp(hit,"FO")==0)||(strcmp(hit,"GO")==0)||(strcmp(hit,"SO")==0))
  			{
  				out+=1;
  				if(out==outn)
  				{
  					break; //�u�����X�o��FOR�j��A�G���X���٭n�P�_�@���~����X�t�@��FOR�j��! 
				}
				else if(out%3==0)
				    {
				    	basevec.clear();
				    }
			}
			else if(strcmp(hit,"1B")==0)
			    {
			    	updatebase(1);
				}
			else if(strcmp(hit,"2B")==0)
			    {
			    	updatebase(2);
				}
			else if(strcmp(hit,"3B")==0)
			    {
			    	updatebase(3);
				}
			else if(strcmp(hit,"HR")==0)
			    {
			    	updatebase(4);
				}
		}
	}
  }
  printf("%d\n",score);
  return 0;
}

#include <stdio.h>
//Zerojudge�Mcodeblocks�������#include<iostream>�t�WC�y���A�L���sĶ���|�X���D
//using namespace std; ��C�y�����Υ[

int arr[100][100];
int tem[100][100];
int R,C,M;

int main()
{
	while(scanf("%d",&R)!=EOF)
	{
		scanf("%d %d",&C,&M);
		/*int arr[R][C]; //���ץ�Dev C++�άOCodeblocks��b�o�̭ȳ��|��!!
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
			if(TODO[k]==0) //�x�}��������
			{
				//memcpy(tem,arr,sizeof(tem));  �t�b#include<iostream>���A�Y�O�ί�C�y���N����ϥΦ���Ʀ]��#include<stdio.h>���S������� 
				for(int i=0;i<R;i++)
		        {
			        for(int j=0;j<C;j++)
			        {
				        tem[i][j]=arr[i][j];//�ۤv�g��memcpy
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
		    else //TODO[k]�Ȭ�1 �Y½��
		    {
		    	//memcpy(tem,arr,sizeof(tem)); Zerojudge�Mcodeblocks�������(�\�O�sĶ�������D�A�sĶ���L���ӻ{#include<iostream>��������ơA��Dev C++�N�S�o�Ӱ��D)
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
				else //j==C-1 �Y�C�@�C���̫�@�ӼƦr
				{
					printf("%d\n",arr[i][j]);
				}
			}
		}
    }
    return 0;
}

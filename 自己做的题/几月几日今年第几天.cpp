#include<stdio.h>

int main()
{
	int yue;
	int ri;
	int js=0;
	printf("请输入日期：");scanf("%d%d",&yue,&ri);	
	
	for(int i=1;i<=yue;i++)
	{
		if(i%2==0)
		{
			js=js+30;
		}
		
		else if(i%2==1)
		{
			js=js+31;
		}
		
		
	}
	printf("\n这是今年第%d天\n",js+ri);      
	
}

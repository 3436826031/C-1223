#include <stdio.h>
main(){
	char a[3][4];
	//三行4列，每行4个
	
	printf("请输入一段文字，将自动分行");
	
	for(int i=0;i<3;i++)//行
	{
		
		for(int j=0;j<4;j++)//每行的数字
		{
			scanf("%c",&a[i][j]);
			
		}
		
	}//读取输入
	
	for(int s=0;s<3;s++)
	{
		
		for(int b=0;b<4;b++)
		{
			printf("%c",a[s][b]);
			
		}
		printf("\n");
		
		
	}//重复步骤输出
	
}
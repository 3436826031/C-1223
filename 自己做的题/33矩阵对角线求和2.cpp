/* 1 2 3
4 5 6
7 8 9 
求对角线 1+5+9的值*/
//循环输入，可以看出输出的就是数[1][1],[2][2]......


#include <stdio.h>
main(){
	int shu[2][2];//二维数组 3*3格子
	
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			scanf("%d",&shu[i][j]);
		}
	}//输入数组
	
	
	int a1=0,a2;
	for(int k=0;k<=2;k++)//循环输出
	{
		a2=a1+shu[k][k];
		a1=a2;//累加求和
		
		if(k<2)//为了美化一下界面
		{
			printf("%d+",shu[k][k]);
			
		}
		else if(k=2){
			printf("%d",shu[2][2]);
		}
		
	}
	printf("=%d",a1);
}
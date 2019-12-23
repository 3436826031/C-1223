

#include <stdio.h>
#include <stdlib.h>

//int qizi[3][3]={{0,0,0},{0,0,0},{0,0,0}};
int qizi[3][3];
int wanj=0;
int w1,w2;
int jc=2;
int bj=0;
int ks;

//初始化
void csh(){
	
	for(int i2=1;i2<=3;i2++)
	{
		for(int j2=1;j2<=3;j2++)
		{
			qizi[i2][j2]=0;
		}
	}
	
}

void qpbuju()
{
	printf("\n  【棋盘布局帮助】     \n\n");
	printf(" (1,1)┃ (1,2)┃(1,3)     \n");
	printf("━━━╋━━━╋━━━    \n");
	printf(" (2,1)┃ (2,2)┃(2,3)     \n");
	printf("━━━╋━━━╋━━━    \n");
	printf(" (3,1)┃ (3,2)┃(3,3)     \n");
	printf("                      \n\n\n\n\n");
}





//判断
void pd(){
	for(int i1=1;i1<=3;i1++)
	{
		if(qizi[i1][1]==qizi[i1][2]&&qizi[i1][1]==qizi[i1][3]&&qizi[i1][1]==1)
		{
			printf("游戏结束，1号你赢了\n");
			wanj=1;
		}
		else if(qizi[i1][1]==qizi[i1][2]&&qizi[i1][1]==qizi[i1][3]&&qizi[i1][1]==2)
		{
			printf("游戏结束，2号你赢了\n");wanj=1;
			
		}
		
		else if(qizi[1][i1]==qizi[2][i1]&&qizi[1][i1]==qizi[3][i1]&&qizi[1][i1]==1)
		{
			printf("游戏结束，1号你赢了\n");wanj=1;
			
		}
		else if(qizi[1][i1]==qizi[2][i1]&&qizi[1][i1]==qizi[3][i1]&&qizi[1][i1]==2)
		{
			printf("游戏结束，你赢了\n");wanj=1;
			
		}
		
		
		else if(qizi[1][1]==qizi[2][2]&&qizi[1][1]==qizi[3][3]&&qizi[1][1]==2)
		{
			printf("游戏结束，2号玩家获胜\n");wanj=1;
			
		}
		
		else if(qizi[1][1]==qizi[2][2]&&qizi[1][1]==qizi[3][3]&&qizi[1][1]==1)
		{
			printf("游戏结束，1号你赢了\n");wanj=1;
			
		}
		
		
		
	}
	
}


void buju(){
	
	if(bj==1)
	{
	qpbuju();
	bj=0;
	}
	printf("--------游戏棋盘---------\n\n");
	
	
	for(int i=1;i<=3;i++)
	{
		
		for(int j=1;j<=3;j++)
		{
			if(j!=3){
				printf( "  %d   ┃",qizi[i][j]);
			}
			else
			{
				printf( "  %d    ",qizi[i][j]);
			}
		}
		printf("\n━━━╋━━━╋━━━\n");
	}
	
	printf("  \n");
	
}



int main(){
	
	
	printf("-------------------------------\n");
    printf("         #井字棋小游戏#        \n");
	printf("--游戏中输入6 6可查看布局帮助--\n");
	printf("━━━━━━━━━━━━━━━\n");
	printf("--------|按回车键开始|--------\n");
	printf("━━━━━━━━━━━━━━━\n");
	printf(" \n");


		
	//scanf("%d",&buju);
	getchar();
	
    csh();
	
	
	while(1){
		jc++;
		
		if(wanj==0){
			
			
			if(jc%2==1)
			{
	
		    printf("\n请1号玩家，输入棋子位置：\n");
				
			}
			
			else
			{
	
				printf("\n请2号玩家，输入棋子位置：\n");	
			}
			
			scanf("%d %d",&w1,&w2);

			//***************************************
            if(3<w1||w1<1)
			{
			printf("ccfw");
			
			}
                 else if(3<w2||w1<2)
			{
			printf("ccfw");
			
			}

          ///***********************************************
			if(w1==6&&w2==6)
			{
			bj=1;
			
			}
			


			if(qizi[w1][w2]==0){
				
				if(jc%2==1)
				{
					system("cls");
					qizi[w1][w2]=1;
					buju();
					pd();
				}
				
				else 
				{
					
					system("cls");
					qizi[w1][w2]=2;
					buju();
					pd();
				}
			}
			
			
			else
			{
				printf("此位置已被占用了，请重新输入：\n");
				jc--;
			}

			
		}
		
	}
	
}








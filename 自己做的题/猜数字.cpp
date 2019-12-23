#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int gu,num,times,i,ch,flag=0;
	
    //times=3;
	//游戏登陆界面
	
	while(1)
	{
		printf("|-----------☆[猜数字游戏]☆-----------|\n");
		printf("|————————      ————————|\n");
		printf("| <1> △进入游戏        <2> ○退出游戏 |\n");
		printf("|————————      ————————|\n");
		printf("|--------------------------------------|\n");
		printf("\n请选择:");
		scanf("%d",&ch);
		if(ch==1){break;}
		if(ch==2){printf("---××游戏已退出，下次见××---!!\n");flag=1;break;}
		else{
		
		printf("输入错误，请重新输入\n");
	    getchar();getchar();
		system("cls");
		}
	}
	
	
	system("cls");
	//游戏设置
	while(1)
	{
		if(flag==1) {printf("tuichu");break;}
		printf("------------------------\n");
		printf("1-☆-困难（两次机会）|  \n2-☆-中等（三次机会）|  \n3-☆-简单（五次机会）|\n");
		printf("------------------------\n");
		printf("\n请选择难度:");
		scanf("%d",&ch);
		if(ch==1){times=2;break;}
		if(ch==2){times=3;break;}
		if(ch==3){times=5;break;}
		else{	
		printf("\n输入错误，请重新输入\n");
        getchar();getchar();
		system("cls");
		}	
	}
	
	
    while(1)
	{
srand(time(0));
num=rand()%10+1;
if(flag==1) {printf("已退出系统");break;}
			

		
		for(i=1;i<=times;i++)
		{   
			if(flag==1) {printf(" ");break;}
			
if(i==times)
		{
			printf("\n提醒：你还有最后一次就会\n");
		}
                   			
			printf("请输入一个1--10之间的数:");
			scanf("%d",&gu);
				if(gu==666)
			{
				printf("答案%d\n",num);	break;
			}
			
			if(gu==num)
			{
			system("cls");	printf("----------------\n恭喜你，猜对了！！正确率：%d/%d\n---------------------\n",i,times);getchar();getchar();	break;
			}
			
			if(gu<num)
			{
				printf("笨蛋，你猜小了！再试试\n--------------------------------\n剩余次数：<%d>\n\n",times-i);
			}      
			
			if(gu>num)
			{
				printf("笨蛋，你猜大了！再试试\n--------------------------------\n剩余次数：<%d>\n\n",times-i);
			}
		}
		
		if(i==times+1){printf("你输了，已到次数上限！！\n");}
		
		
		
		printf("----------------------------------------\n");
		printf("1--继续\n2--退出\n");
		printf("----------------------------------------\n");
		printf("\n请选择:");
		scanf("%d",&ch);
		if(ch==1){system("cls");
		
		
		while(1)
		{
			if(flag==1) {printf("tuichu");break;}
			printf("-----------------------------------------------------------------\n");
			printf("1--高级（可以猜两次）  2--中级（可以猜三次）  3--初级（可以猜五次）\n");
			printf("-----------------------------------------------------------------\n");
			printf("\n请选择难度:");
			scanf("%d",&ch);
			if(ch==1){times=2;break;}
			if(ch==2){times=3;break;}
			if(ch==3){times=5;break;}
		}
		
		
		
		continue;}
		if(ch==2){printf("游戏已经退出，下次见!!\n");break;}
		
	}
	
	getchar();getchar();	
	
}

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int s;
char a[1000];
int cd;
void cf(int cd1){
	
	for(int i=0;i<cd1;i++)
	{
		for(int j=cd1;j>i;j--)
		{
			
			printf(" ");
		}
		printf("%s",a);
		Sleep(s*10);
		system("cls");
	}
	
	
	
}
main(){

	printf("------滚动字条-------\n");


	
		printf("1.输入滚动内容：");
	gets(a);

	printf("2.设定速度：");scanf("%d",&s);


	cd=strlen(a);
	printf("ks");
	
	while(1){
		
		for(int i=0;i<cd;i++){
			
			
			printf("%s               ",a+i);
			for(int i1=0;i1<i;i1++)
			{
				printf("%c",a[i1]);
				
			}
			Sleep(s*10);
			system("cls");
			
			if(i==cd-1){
				cf(15);
				
			}
		}
	}
	return 0;
}







//随机取10个数，在1-20内，而且不能重复！！！

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main(){
	srand(time(0));
	int a[10];
	int b=1;
	//三层for循环，第一层取值，第二三层检测重复，第三层修改
	for(int i=0;i<10;i++)
	{
		
		a[i]=rand()%10+10;
		//printf("\n-----%d------\n",a[i]);
		
		for(int j=0;j<i;j++)//检测这个是否与前几个一样
		{	
			while(a[i]==a[j])//如果一样，重新取值，知道不一样
				
			{	
				a[i]=rand()%10+10;
				printf("cf  \n");
				j=0;
			}	
			
		}
		
		
	}
	
	for(int i1=0;i1<10;i1++)
	{
		
		printf("%d  ",a[i1]);
		
	}
	
	
}
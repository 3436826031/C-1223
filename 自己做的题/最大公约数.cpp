#include <stdio.h>
main(){
	int a,b,c;
	int max=0;
	scanf("%d %d %d",&a,&b,&c);
	for(int i=1;i<=9;i++)
	{
		if(a%i==0&&b%i==0&&c%i==0)//三个数同除一个数，无余数
		{
			printf("公约数：%d\n",i);
			
			if(i>max)//比大小，选出最大的
				
			{
				max=i;
			}
			
		}
		
	}
	
	printf("最大公约数：%d",max);//输出最大
	
}
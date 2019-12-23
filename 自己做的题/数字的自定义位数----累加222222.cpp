#include <stdio.h>
main(){
	//输出自定义数字和个数，2222222222
	//个数就循环几次，输出2+20+200+2000+20000
	//就是10的i次方，没有运算符次方、。。。
	int p;
	int shu,ge;
	int a1,a2;
	int a3=0;
	
	scanf("%d",&shu);//数字
	scanf("%d",&ge);//循环几位
	
	for(int i=0;i<ge;i++)//几位循环几次
	{
		int shi=1;//10

		for(int j=1;j<=i;j++)//规定次方数，，，，就是循环几次10*1
		{
			shi=shi * 10;
			p=shi;//累加
			printf("\n--次方调试--\n%d\n",p);
		}
		
		a1=shu*shi;   // 累加，a3记录上一次的结果，a1为新的
		a2=a1+a3;
		a3=a2;
		printf("\n-----\n输出的数字阶段测试\n%d\n------\n",a3);
	}
	printf("\n\n\n\n\n\n最终结果：%d\n\n\n\n\n\n",a3);
	
	

}
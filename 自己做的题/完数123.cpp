	/*完数：它所有除了自身以外的约数的和，恰好等于它本身
如：6=1+2+3； 28＝1+2+4+7+14
思路，求出约数，然后累加求和看是不是与其相等*/

#include <stdio.h>
main()
{



   int y1,shu;
   int a[100],b;
   int a1=0;
	scanf("%d",&shu);
	printf("%d=",shu);
	{
		
			for(int i=1;i<shu;i++)//求约数，除自身
			{
				if(shu%i==0)
				{
				a[i]=i;
                b=a1+a[i];
                a1=b;  //累加法，求和
				printf("余数为%d  \n",a[i]);
				}          
                 
			}

	
	if(a1==shu)//判断是否相等
	{
		printf("\n是完数\n");
	
	}
	else
	{
	printf("\n不是完数\n");
	
	}
		
		
		
		
		
		
	}

}
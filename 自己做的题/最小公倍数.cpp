#include <stdio.h>
main(){
//先固定第一位数，用第一个数乘1余其他数乘1到⑨比较，类推直至全部一样
	int a,b,c;
	int a1[9],b1[9],c1[9];
	scanf("%d%d%d",&a,&b,&c);
	 int min=10000;
	for(int i=1;i<=9;i++)
	{
		a1[i]=a*i;
		
		for(int j=1;j<=9;j++)
		{
			b1[j]=b*j;
			
			
			if(a1[i]==b1[j])
				
			{
				
				for(int k=1;k<=9;k++)
				{
					c1[k]=c*k;
					
					if(a1[i]==b1[j]&&b1[j]==c1[k])
					{
						
			
						
					
						printf("%d  \n",a1[i]);

                          
						   if(a1[i]<min)//比大小，选最小
						   {
						   min=a1[i];

              
						   
						   }



						
					}
					
					
				}
				
				
			}
			
			
			
		}
		
		
	
	}
	
		   printf("%d",min);
	
	
}
#include <stdio.h>
main(){		
	int wei,s[10],b[10],f[10];
	
	scanf("%d",&wei);
	for(int i=1;i<wei;i++)
	{
		b[i]=i;
		
		for(int j=1;j<wei;j++)
			
		{
			
			if(j==i)
			{
			j=j+1;
			}
				
			s[j]=j;
			
			for(int k=1;k<wei;k++)
				
			{
				f[k]=k;
				
				int sum;
				sum= b[i]*100+s[j]*10+f[k];
				printf("%d\n",sum);
				
				
				if(k==j)
				{
				k=k+1;
				}
				
			}
			
			k=k+1;
		}			
		
	}
			
}
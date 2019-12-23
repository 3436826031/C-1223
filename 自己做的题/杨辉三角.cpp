#include <stdio.h>
main(){
	
	int shu[10][10];
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(j==0||i==j)
			{
				shu[i][j]=1;		
			}

			else{
			shu[i][j]=shu[i-1][j]+shu[i-1][j-1];
			}
		}
		

	}


		for(int m=0;m<10;m++)
	{
		for(int n=0;n<=m;n++)
		{
		printf("%d",shu[m][n]);
		
			
		}
         printf("\n");
		}



}
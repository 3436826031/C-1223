



//菱形◇，laj代码，之前就写好的正三角，根据正三角
//又推出的倒三角，最后函数结合


#include <stdio.h>
void fan();

void zheng();
int kg=0;
int hang;
int shu=0;
main(){
	
	scanf("%d",&hang);
	
	if(kg==0)
	{
		zheng();
		kg=1;
	}
	if(kg==1){
		fan();
		
	}
}










void fan()
{
	
	for(int i=hang;0<i;i--)
	{
		for(int k=hang;i<k;k--)
		{
			printf(" ");
		}
		
		for(int ge=0;ge<2*i-1;ge++)
		{
			printf("*");
		}		
		
		printf("\n");
	}
	
	
}











void zheng(){
	
	
	
	int i;
	int x;
	int g;
	
	for(i=0;i<hang;i++)
	{
		g=i+1;
		while(g<hang+1)
		{
			g++;
			printf(" ");//空格数就是emmm
		}
		
		//平行的for
		for(x=0;x<2*i-1;x++)
		{    
			printf("*"); 
		}
		printf("\n");
	}
	
	
}
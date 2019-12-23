#include <stdio.h>
#include <string.h>
main(){
	
	
	char s[90];
	int shu;
	int c=0;
	gets(s);
	
	shu=strlen(s);
	printf("%d",shu);
	
	//for (int i=0;s[i]!='\0';i++){}
	//1 2 3 4 3 2 1         7
	
	
	for (int j=0; j<shu/2 ;j++)
	{
		if(s[shu/2-j]==s[shu/2+j])
		{
			printf("  dui");
			c++;
		}
		else
		{
			printf("  cuo");
		}
		
	}
	
	
	
	if(c==shu/2)
	{
		printf("\nchengguo\n");
	}
	
	else
	{
		printf("\nsssssssssssssss\n");
		
	}
	
}
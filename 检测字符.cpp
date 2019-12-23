#include <stdio.h>
main()
{
char a[100];
int sz=0;
int zf=0;
gets(a);
for(int i=0;a[i]!='\0';i++)
{
	if(('a'<=a[i]&&a[i]<='z') || ('A'<=a[i]&&  a[i]<='Z'))
	{
	zf++;
	}
		else if('0'<=a[i]<='9')
		{
		sz++;	
		}
}
    printf("字母的个数：%d数字的个数：%d",zf,sz);
}







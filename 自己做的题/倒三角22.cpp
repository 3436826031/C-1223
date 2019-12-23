






#include <stdio.h>
void fan()

void zheng()

int hang;
int shu=0;
main(){

scanf("%d",&hang);

zheng();
fan();


}


void fan()
{

int hang;



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











void zheng()
{
	int a,b,c,d,z;
	
for(a=0;a<hang;a++)
{

	for(d=hang;d>a+1;d--)
	{
	printf(" ");
	}
	
	for(b=0;b<(2*hang)+1;b++)
	{
	printf("*");
	}


	printf("\n");

}



}
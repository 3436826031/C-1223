#include <stdio.h>

main(){
int b;
int t;
int a[4];
for (int z=0;z<4;z++)
{
scanf("%d",&a[z]);
}//±È¿˙ ‰»Î

for (z=0;z<4;z++){

for(int c=0;c<3-z;c++)
{
if(a[c]>a[c+1])
{
t=a[c];
a[c]=a[c+1];
a[c+1]=t;//√∞≈›≈≈–Ú
}
}

}
for(z=0;z<4;z++)
{
printf("%d",a[z]);
}//±È¿˙ ‰≥ˆ

}
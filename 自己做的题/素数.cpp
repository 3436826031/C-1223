#include <stdio.h>
main(){
   int a;
   int z;
   scanf("%d",&a);

   for(int s=2;s<a-1;s++){
if(a%s==0)
z=1;
else
z=2;
   }
if(z=1)
printf("NO");
else
printf("sushu");

}